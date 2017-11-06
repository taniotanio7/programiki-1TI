import os
import random
import sys

# list of words
try:
    words = open('words.txt').read().split('\n')
except:
    print("Error! No file found!")
    sys.exit()

max_guesses = 7

def clear():
    if os.name == 'nt':
        os.system('cls')
    else:
        os.system('clear')
        
def draw(bad_guesses, good_guesses, secret_word):
    clear()
    
    print('Strikes: {}/{}'.format(len(bad_guesses), max_guesses))
    print('')
        
    for letter in bad_guesses:
        print(letter, end=' ')
    print("\n\n")
    
    for letter in secret_word:
        if letter in good_guesses:
            print(letter, end='')
        else:
            print("_", end='')
    print('')
    
def get_guess(bad_guesses, good_guesses):
    while True:
        guess = input("Guess a letter: ").lower()
                
        if len(guess) != 1:
            print("You can only guess a single letter!")
        elif guess in bad_guesses or guess in good_guesses:
            print("You already guessed that letter!")
        elif not guess.isalpha():
            print("You can only guess letters!")
        else:
            return guess

    print("You need to guess a letter to from the word before the snake get's you!")
    
def game(done):
    clear()
    
    # pick random word
    #secret_word = words[random.randint(0,len(words) - 1)]
    secret_word = random.choice(words)
    
    # store correctly guessed
    bad_guesses = []
    good_guesses = []
    max_guesses = 7
    
    while True:
        draw(bad_guesses, good_guesses, secret_word)
        guess = get_guess(bad_guesses, good_guesses)
        
        if guess in secret_word:
            good_guesses.append(guess)
            found = True
            for letter in secret_word:
                if letter not in good_guesses:
                    found = False
            if found:
                print("You win!")
                print("The secret word was {}.".format(secret_word))
                done = True
        else:
            bad_guesses.append(guess)
            if len(bad_guesses) == 7:
                draw(bad_guesses, good_guesses, secret_word)
                print("You didn't guess it! My secret word was {}".format(secret_word))
                done = True
        
        if done:
            play_again = input("Play again? Y/n ").lower()
            if play_again != 'n':
                return game(done=False)
            else:
                sys.exit()
                
def welcome():
    start = input("Press enter / return to start, or enter Q to quit")
    if start.lower() == 'q':
        print("Bye!")
        sys.exit
    else:
        return True
        
done = False

while True:
    clear()
    welcome()
    game(done)
    
