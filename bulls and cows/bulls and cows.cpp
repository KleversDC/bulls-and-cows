#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <chrono> 
using namespace std;
//1
//template <typename T>
//vector<vector<T>> initMatrix(int size, T value) {
//    vector<vector<T>> matrix(size, vector<T>(size, value));
//    return matrix;
//}
//template <typename T>
//void printMatrix(const vector<vector<T>>& matrix) {
//    for (const auto& row : matrix) {
//        for (const auto& elem : row) {
//            cout << elem << " ";
//        }
//        cout << endl;
//    }
//}
//template <typename T>
//void findMinMaxDiagonal(const vector<vector<T>>& matrix, T& minElem, T& maxElem) {
//    minElem = matrix[0][0];
//    maxElem = matrix[0][0];
//
//    for (int i = 0; i < matrix.size(); i++) {
//        if (matrix[i][i] < minElem) minElem = matrix[i][i];
//        if (matrix[i][i] > maxElem) maxElem = matrix[i][i];
//    }
//}
//template <typename T>
//void sortRows(vector<vector<T>>& matrix) {
//    for (auto& row : matrix) {
//        sort(row.begin(), row.end());
//    }
//}
//
//int main() {
//    int size = 3;
//    auto matrixInt = initMatrix(size, 5);
//    matrixInt[0][0] = 9; matrixInt[1][1] = 3; matrixInt[2][2] = 8;
//    cout << "Int Matrix: " << endl;
//    printMatrix(matrixInt);
//    int minInt, maxInt;
//    findMinMaxDiagonal(matrixInt, minInt, maxInt);
//    cout << "Min on diagonal: " << minInt << ", Max on diagonal: " << maxInt << endl;
//    sortRows(matrixInt);
//    cout << "Sorted Int Matrix: " << endl;
//    printMatrix(matrixInt);
//    auto matrixDouble = initMatrix(size, 3.14);
//    matrixDouble[0][0] = 2.71; matrixDouble[1][1] = 1.61; matrixDouble[2][2] = 0.57;
//    cout << "Double Matrix: " << endl;
//    printMatrix(matrixDouble);
//    double minDouble, maxDouble;
//    findMinMaxDiagonal(matrixDouble, minDouble, maxDouble);
//    cout << "Min on diagonal: " << minDouble << ", Max on diagonal: " << maxDouble << endl;
//    sortRows(matrixDouble);
//    cout << "Sorted Double Matrix: " << endl;
//    printMatrix(matrixDouble);
//    auto matrixChar = initMatrix(size, 'a');
//    matrixChar[0][0] = 'z'; matrixChar[1][1] = 'b'; matrixChar[2][2] = 'm';
//    cout << "Char Matrix: " << endl;
//    printMatrix(matrixChar);
//    char minChar, maxChar;
//    findMinMaxDiagonal(matrixChar, minChar, maxChar);
//    cout << "Min on diagonal: " << minChar << ", Max on diagonal: " << maxChar << endl;
//    sortRows(matrixChar);
//    cout << "Sorted Char Matrix: " << endl;
//    printMatrix(matrixChar);
//}
// 
// 
// 
//2
//int gcd(int a, int b) {
//    if (b == 0) return a;
//    return gcd(b, a % b);
//}
//
//int main() {
//    int a, b;
//    cout << "Enter two numbers: ";
//    cin >> a >> b;
//    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;
//}
//3
//using namespace std;
//
//void calculateBullsAndCows(string secret, string guess, int& bulls, int& cows) {
//    bulls = 0;
//    cows = 0;
//    for (int i = 0; i < 4; i++) {
//        if (secret[i] == guess[i]) {
//            bulls++;
//        }
//        else if (secret.find(guess[i]) != string::npos) {
//            cows++;
//        }
//    }
//}
//string generateSecretNumber() {
//    auto now = chrono::system_clock::now();
//    auto duration = now.time_since_epoch();
//    long long millis = chrono::duration_cast<chrono::milliseconds>(duration).count();
//    string secret = to_string(millis % 9000 + 1000);
//    return secret;
//}
//
//void playGame(string secret, int attempts = 0) {
//    string guess;
//    cout << "Enter your guess (4 digits): ";
//    cin >> guess;
//
//    int bulls, cows;
//    calculateBullsAndCows(secret, guess, bulls, cows);
//
//    if (bulls == 4) {
//        cout << "Congratulations! You've guessed the number in " << attempts + 1 << " attempts!" << endl;
//        return;
//    }
//
//    cout << "Bulls: " << bulls << ", Cows: " << cows << endl;
//    playGame(secret, attempts + 1);
//}
//
//int main() {
//    cout << "Welcome to Bulls and Cows!" << endl;
//    string secret = generateSecretNumber();
//
//    playGame(secret);
//}



