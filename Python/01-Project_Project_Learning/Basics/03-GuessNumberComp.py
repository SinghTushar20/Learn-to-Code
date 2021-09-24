from random import randint;

def game(x, a):
    tries = round(x**(1/2));
    l = 1;
    u = x;
    while (tries): 
        guess = randint(l,u);
        print(f"Computer guessed\n> {guess}");
        if(guess == a):
            print(f"Demm Computer won...");
            return;
        elif(guess > a):
            print(f"It still got some tries...");
            u = guess-1;
        else:
            print(f"It still got some tries...");
            l = guess+1
        tries -= 1;

    print("Yeah boooooi!! You won against computer")

# print(__name__)
if __name__ == '__main__':
    max = int(input("Enter maximum bound of guess (The higher the harder for comp ;p)\n> "));
    no = int(input("Enter number to be guessed\n> "));
    game(max, no)
    # print("end")