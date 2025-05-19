import os
import json

# Función para procesar un archivo de código y generar prompt-completion
def process_code_file(file_path):
    with open(file_path, 'r') as file:
        code = file.read()
        # Define aquí cómo deseas separar los prompts y completions
        # Por ejemplo, podrías usar una convención de comentarios para los prompts
        # y el código subsiguiente como completion.
        
        # Para este ejemplo, usaremos un comentario de cabecera como prompt
        # y todo el código siguiente como completion.
        lines = code.splitlines()
        prompt = ""
        completion = ""
        in_prompt = True
        
        for line in lines:
            if line.startswith("//#"):  # Usamos '#' para denotar un prompt
                if in_prompt:
                    prompt += line + " "
                else:
                    completion += line + "\n"
            else:
                completion += line + "\n"
                in_prompt = False
        
        return {"prompt": prompt.strip(), "completion": completion.strip()}

# Ruta a la carpeta que contiene los archivos de código
input_folder = r"C:\Users\w10\Documents\NetBeansProjects\lenguaje-interpretado\ejemplos"
output_file = "datos_entrenamiento.jsonl"

# Procesar cada archivo de código y escribir en el archivo JSONL
with open(output_file, 'w') as outfile:
    for filename in os.listdir(input_folder):
        if filename.endswith(".pr"):  # Cambia .ext a la extensión de tus archivos, por ejemplo .py, .txt
            file_path = os.path.join(input_folder, filename)
            data = process_code_file(file_path)
            json.dump(data, outfile)
            outfile.write('\n')

print("Conversión completada. Datos guardados en", output_file)
