from random import randint;

if __name__ == '__main__':
    print('---------ROCK-PAPER-SCISSORS----------\n')
    while(1):
        print('R for Rock\nP for Paper\nS for Scissor\n')
        user = (input("> ")).lower()
        comp = randint(1,3)
        if (comp == 1 and user == 'p') or (comp == 2 and user == 's') or (comp == 3 and user == 'r'):
            print(f"You won, Computer chose {comp}")
        elif (comp == 1 and user == 's') or (comp == 2 and user == 'r') or (comp == 3 and user == 'p'):
            print(f"Computer won, It chose {comp}")
        else:
            print(f"Its a draw, It chose {comp}")
        choice = input("Wanna continue (Y/N): ")
        if(choice.lower() == 'n'):
            break;
        print()