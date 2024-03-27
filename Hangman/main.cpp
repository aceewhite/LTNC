#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

bool isLetterPresent(char letter, const string& word) {
    for (char c : word) {
        if (c == letter) {
            return true;
        }
    }
    return false;
}

void updateDisplayWord(char letter, const string& word, string& displayWord) {
    for (int i = 0; i < word.length(); ++i) {
        if (word[i] == letter) {
            displayWord[i] = letter;
        }
    }
}

int main() {
    vector<string> words = {"cryptography", "buffer", "logitech", "razer", "sanctuary","butter","logistics","mewing"};

    vector<string> hangmanStages = {
        "  ____\n |    |\n      |\n      |\n      |\n      |\n=========",
        "  ____\n |    |\n O    |\n      |\n      |\n      |\n=========",
        "  ____\n |    |\n O    |\n |    |\n      |\n      |\n=========",
        "  ____\n |    |\n O    |\n/|    |\n      |\n      |\n=========",
        "  ____\n |    |\n O    |\n/|\\   |\n      |\n      |\n=========",
        "  ____\n |    |\n O    |\n/|\\   |\n/     |\n      |\n=========",
        "  ____\n |    |\n O    |\n/|\\   |\n/ \\   |\n      |\n========="
    };

    srand(static_cast<unsigned int>(time(nullptr)));

    bool playAgain = true;

    while (playAgain) {
        string word = words[rand() % words.size()];

        string displayWord(word.length(), '_');

        int remainingAttempts = 6;

        cout << "Welcome to Hangman!" << endl;

        while (remainingAttempts > 0) {
            cout << "Word: " << displayWord << endl;
            cout << "Attempts remaining: " << remainingAttempts << endl;

            char guess;
            cout << "Enter your guess: ";
            cin >> guess;

            if (isLetterPresent(guess, word)) {
                cout << "Correct guess!" << endl;
                updateDisplayWord(guess, word, displayWord);

                if (displayWord == word) {
                    cout << "Congratulations! You guessed the word: " << word << endl;
                    break;
                }
            } else {
                cout << "Incorrect guess." << endl;
                remainingAttempts--;

                cout << hangmanStages[6 - remainingAttempts] << endl;
            }
        }

        if (remainingAttempts == 0) {
            cout << "Sorry, you failed . The word was: " << word << endl;
            cout << hangmanStages[6 - remainingAttempts] << endl;
        }

        char playChoice;
        cout << "Wanna play again? (y/n): ";
        cin >> playChoice;
        playAgain = (playChoice == 'y' || playChoice == 'Y');
    }



    return 0;
}
