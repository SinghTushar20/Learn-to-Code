from random import randint;

def game(x):

    rno = randint(1,x);
    tries = round(x**(1/2));
    i = 0;
    while (i != tries):
        i += 1; 
        guess = int(input(f"Guess the number between 1-{x}\n> "));
        if(guess == rno):
            print(f"Hurrah!! you did it in {tries} tries.");
            break;
        elif(guess < rno):
            print(f"Guess higher, {tries-i} tries remaining");
        else:
            print(f"Guess lower, {tries-i} tries remaining");
    else:
        print("You lost but don't worry we all have bad times.")

# print(__name__)
if __name__ == '__main__':
    max = int(input("Enter maximum bound of guess (The higher the harder)\n> "))
    game(max)
    # print("end")