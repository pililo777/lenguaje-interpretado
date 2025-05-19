import numpy as np

# Definición de las variables
NUMPAT = 10
NUMIN = 7
NUMHID = 3
NUMOUT = 4
it = 2000000

# Inicialización de variables
i, j, k, p, np1, op, epoch = 0, 0, 0, 0, 0, 0, 0

numpattern = 10
numinput = 7
numhidden = 3
numoutput = 4

# Definición de las matrices
input_data = np.array([
    [0, 0, 0, 0, 0, 0, 0, 0],
    [0, 1, 1, 1, 0, 1, 1, 1],
    [0, 1, 0, 0, 0, 0, 0, 1],
    [0, 1, 1, 0, 1, 1, 1, 0],
    [0, 1, 1, 0, 1, 0, 1, 1],
    [0, 1, 0, 1, 0, 0, 1, 0],
    [0, 0, 1, 1, 0, 1, 1, 0],
    [0, 0, 1, 1, 1, 1, 1, 1],
    [0, 1, 1, 0, 0, 0, 0, 1],
    [0, 1, 1, 1, 1, 1, 1, 1],
    [0, 1, 1, 1, 1, 0, 1, 1]
])

target_data = np.array([
    [0, 0, 0, 0],
    [0, 0, 0, 1],
    [0, 0, 1, 0],
    [0, 0, 1, 1],
    [0, 1, 0, 0],
    [0, 1, 0, 1],
    [0, 1, 1, 0],
    [0, 1, 1, 1],
    [1, 0, 0, 0],
    [1, 0, 0, 1],
    [1, 0, 1, 0]
])

# Dimensionando las matrices
sumh = np.zeros((NUMPAT + 1, NUMHID + 1))
weightih = np.random.rand(NUMIN + 1, NUMHID + 1) * 2 - 1
hidden = np.zeros((NUMPAT + 1, NUMHID + 1))
sumo = np.zeros((NUMPAT + 1, NUMOUT + 1))
weightho = np.random.rand(NUMHID + 1, NUMOUT + 1) * 2 - 1
output = np.zeros((NUMPAT + 1, NUMOUT + 1))
deltao = np.zeros(NUMOUT + 1)
sumdow = np.zeros(NUMHID + 1)
deltah = np.zeros(NUMHID + 1)
deltaweightih = np.zeros((NUMIN + 1, NUMHID + 1))
deltaweightho = np.zeros((NUMHID + 1, NUMOUT + 1))
error = 0
eta = 0.5
alpha = 0.5
smallwt = 0.5

# Inicialización de pesos y deltas
for j in range(1, NUMHID + 1):
    for i in range(NUMIN + 1):
        deltaweightih[i][j] = 0
        weightih[i][j] = 2 * (np.random.random() - 0.5) * smallwt

for k in range(1, NUMOUT + 1):
    for j in range(NUMHID + 1):
        deltaweightho[j][k] = 0
        weightho[j][k] = 2 * (np.random.random() - 0.5) * smallwt

# Bucle principal de entrenamiento
# Bucle de entrenamiento
for epoch in range(it):
    ranpat = np.random.permutation(NUMPAT)
    total_error = 0
    
    for np1 in range(NUMPAT):
        # Forward propagation
        hidden = 1 / (1 + np.exp(-(np.dot(input_data[p], weightih))))  # Activaciones capa oculta
        output = 1 / (1 + np.exp(-(np.dot(hidden, weightho))))  # Activaciones capa de salida
        
        # Backpropagation
        deltao = (target_data[p] - output) * output * (1 - output)  # Deltas capa de salida
        deltah = np.dot(deltao, weightho.T) * hidden * (1 - hidden)  # Deltas capa oculta
        
        # Acumular errores para este patrón
        pattern_error = 0.5 * np.sum((target_data[p] - output)**2)
        total_error += pattern_error
        
        # Actualizar pesos WeightIH y WeightHO
        deltaweightih = 0.5 * (np.outer(input_data[p], deltah))
        deltaweightho = 0.5 * (np.outer(hidden, deltao))
        
        weightih += deltaweightih
        weightho += deltaweightho
    
    # Calcular el error promedio para esta época
    average_error = total_error / NUMPAT
    
    # Detener el entrenamiento si se alcanza un error deseado
    if average_error < 0.0004:
        break
    
    # Imprimir información de época y error promedio
    if epoch % 100 == 0:
        print(f"Epoch: {epoch}, Average Error: {average_error}")

# Imprimir mensaje de finalización del entrenamiento
print("Training finished.")
 

# Suponiendo que las variables numinput, numpattern, numoutput, input y output ya están definidas

epoch = 0
print('NETWORK DATA - EPOCH : ', epoch)
print('Pat')

for i in range(1, numinput + 1):
    print('I', i)

print('Output')

print('------------------------------------------------------------------------------')

for p in range(1, numpattern + 1):
    print(p - 1, ':', end=' ')
    
    for i in range(1, numinput + 1):
        print(input_data[p][i], end='')
    
    print('  ----  ', end=' ')
    
    for k in range(1, numoutput + 1):
        val = 1 if output[p][k] > 0.5 else 0
        print(val, end=' ')
    
    print('\n------------------------------------------------------------------------------')

print('Goodbye!')
