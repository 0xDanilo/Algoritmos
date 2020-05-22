multiplicador = input("Digite o multiplicador da tabuada: ")
multiplicador = int(multiplicador)

for value in range(0, 11):
    resultado = value * multiplicador
    print(f"Resultado {multiplicador} x {value} = {resultado}")
    pass