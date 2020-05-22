multiplicador = input("Digite o multiplicador da tabuada: ")
multiplicador = int(multiplicador)

for i in range(0, 11):
    resultado = i * multiplicador
    print(f"Resultado {multiplicador} x {i} = {resultado}")
    pass