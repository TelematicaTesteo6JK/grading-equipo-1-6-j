import my_library

while True:
    num = float(input("Escribe tu numero a evaluar "))
    print("Salir del programa con -1")
    if (num == -1):
        break
    else:
        my_library.australianToAmerican(num)