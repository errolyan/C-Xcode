//
//  main.cpp
//  enum
//
//  Created by YanErrol on 2021/2/20.
//

#include <iostream>
using namespace std;
enum GameResult {WIN, LOSE, TIMEE, CANCEL};

int main() {
    GameResult result;
    enum GameResult omit = CANCEL;

    for (int count = WIN; count <= CANCEL; count++ ) {
        result = static_cast<GameResult> (count);
        if (result == omit) {
            cout << "The game was cancelled" << endl;
        } else {
            cout << "The game was played" << endl;
            if (result == WIN) {
                cout << " and we won!";
            }
            if (result == LOSE) {
                cout << "and we lost.";
            }
            cout << endl;
        }
    }
}
