import requests as http

def hangman(word):
    words = set(list(word)[2:-2])
    user_words = set()
    live = len(word)
    while (len(words) > 0) and (live > 0):
        letter = input("Chose a word: ")
        user_words.add(letter)
        print(f"Words you have chosen: {' '.join(user_words)}")
        print(f"Current status: ", end="")
        for w in word[2:-2]:
            if (w in user_words):
                print(w,end=" ")
            else:
                print("-",end=" ")
        print()
        if letter in words:
            words.remove(letter)
        else:
            live -= 1
        print(f"{live} lives left.\n")
    if(len(words) == 0):
        print("YOU WON")
    else:
        print("YOU LOST")

if __name__ == '__main__':
    word = http.get("https://random-word-api.herokuapp.com/word?number=1").text   
    hangman(word)