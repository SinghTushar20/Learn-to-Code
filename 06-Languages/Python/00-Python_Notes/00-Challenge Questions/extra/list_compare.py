#Program to compare 2 lists for equality

def compare_lists(ls1, ls2):
    if len(ls1) != len(ls2):
        return False

    #compare data
    for i in range(len(ls1)):
        if ls1[i] != ls2[i]:
            return False

    return True

def main():
    ls1 = [1,2,3,4, 'Hello', True]
    ls2 = [1, 2, 3, 4, 'Hello', True]

    print(compare_lists(ls1, ls2))

main()