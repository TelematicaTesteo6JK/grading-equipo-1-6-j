def australianToAmerican(grade):
    if (grade >= 0 and grade <= 100):
        if(grade >= 83 and grade <= 100):
            print("HD")
        elif(grade >= 73 and grade <= 82.99):
            print("D")
        elif(grade >= 63 and grade <= 72.99):
            print("C")
        elif(grade >= 50 and grade <= 62.99):
            print("P")
        else:
            print("N")

def evaluate(expected, realOne):
    print(expected + realOne)