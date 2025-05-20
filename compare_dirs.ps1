param(
    [string]$dir1 = "C:\Users\w10\OneDrive\Documentos\NetBeansProjects\lenguaje-interpretado\CppApplication_1",
    [string]$dir2 = "C:\Users\w10\source\repos\lenguaje-interpretado\CppApplication_1"
)

# Abrir WinMerge con los dos directorios
Start-Process "C:\Program Files (x86)\WinMerge\winmergeu.exe" -ArgumentList "$dir1 $dir2"

