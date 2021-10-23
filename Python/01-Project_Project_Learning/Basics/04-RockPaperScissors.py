import random;

if __name__ == '__main__':
    print('---------ROCK-PAPER-SCISSORS----------\n')
    while(1):
        print('R for Rock\nP for Paper\nS for Scissor\n')
        user = (input("> ")).lower()
        comp = random.choice(['r','p','s'])
        if (comp == 'r' and user == 'p') or (comp == 'p' and user == 's') or (comp == 's' and user == 'r'):
            print(f"You won, Computer chose {comp}")
        elif (comp == 'r' and user == 's') or (comp == 'p' and user == 'r') or (comp == 's' and user == 'p'):
            print(f"You think u can defeat me mere human, I chose {comp}")
        else:
            print(f"Its a draw, Computer chose {comp}")
        choice = input("Wanna continue (Y/N): ")
        if(choice.lower() == 'n'):
            break;
        print()