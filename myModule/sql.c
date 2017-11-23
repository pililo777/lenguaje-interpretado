#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

#include <sybfront.h>
#include <sybdb.h>

static LOGINREC              *src_login;
static DBPROCESS             *src_dbproc;

extern char *consulta;

// https://lists.ibiblio.org/pipermail/freetds/2007q4/022482.html
void mainsql2() {

	RETCODE retcode;
	//int seqnbr_arg = 99;
	char Name[500], Desc[500];
	int Value;
        
        char *src_serv = "local"; /* as listed in freetds.config */
/*
        char *DestPasswd;
        char *whereclause;
        char *sortby;
*/
        

	if (dbinit() == FAIL)
		exit(-1);
                
        src_login = dblogin();
        DBSETLUSER(src_login, "sa");
        DBSETLPWD(src_login, "1.Write.1");
        DBSETLAPP(src_login, "example");
        
        
	if((src_dbproc = dbopen(src_login, src_serv)) == FAIL) {
		fprintf(stderr, "Could not open server %s\n", src_serv);
		exit(1);
	}
        
        dbcmd(src_dbproc, consulta);
      //  dbcmd(src_dbproc, " where Clau like 'T%' ");

	//dbfcmd(src_dbproc,  "select top 10 c.clau from usuaris.dbo.usuaris as c where c.clau like 'T%'");
	
	dbsqlexec(src_dbproc);

	*Name = *Desc = '\0';
        Value = 0;
 	//*DestPasswd = *whereclause = *sortby = '\0';
	/* dbresults will return once for every query in a batch (often 1) before returning NO_MORE_RESULTS */
	while (dbresults(src_dbproc) != NO_MORE_RESULTS) {
		dbbind(src_dbproc, 1, STRINGBIND, 0, (BYTE *)Name);
/*
		dbbind(src_dbproc, 2, INTBIND, 0, (BYTE *)&Value);
		dbbind(src_dbproc, 3, STRINGBIND, 0, (BYTE *)Desc);
*/
		/* dbnextrow will be called once per row in the query before returning NO_MORE_ROWS */
		while (dbnextrow(src_dbproc) != NO_MORE_ROWS) {
			/* do RowByAgonizingRow processing */
                    printf("%s\n", Name);
		}
	}
	
	dbclose(src_dbproc);
	return 0;
}




// http://www.freetds.org/userguide/samplecode.htm
int mainsql3()
{
DBPROCESS *dbproc; /* The connection with */
/* SQL Server */
LOGINREC *login; /* The login information */
DBCHAR name[40];
DBCHAR city[20];
RETCODE return_code;
 

/* Initialize DB-Library */
dbinit();
login = dblogin();
DBSETLUSER(login, "sa");
DBSETLPWD(login, "1.Write.1");
DBSETLAPP(login, "example");
dbproc = dbopen(login, NULL);
dbcmd(dbproc, "select Clau from Usuaris.dbo.Usuaris");
// dbcmd(dbproc, " where state = ?CA? ");
dbsqlexec(dbproc);
while ((return_code = dbresults(dbproc)) !=NO_MORE_RESULTS )
{
if (return_code == SUCCEED)
{
dbbind(dbproc, 1, STRINGBIND, (DBINT)0, (unsigned char*)name);
//dbbind(dbproc, 2, STRINGBIND, (DBINT)0, (unsigned char*)city);
 
while (dbnextrow(dbproc) != NO_MORE_ROWS)
{
printf ("%s\n", name);
}
}
}
/* Close the connection to SQL Server */
dbexit();
return 0;
}

