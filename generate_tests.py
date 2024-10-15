from random import randint
with open("./1k_test.txt", "r+") as test1k, open("./1m_test.txt", "r+") as test1m:
    for i in range(10 ** 6):
        test1k.write(f"{randint(1, 1000)}\n")
        test1m.write(f"{randint(1, 1000000)}\n")