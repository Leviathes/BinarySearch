#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;
int guess{1};
int answer{2};

int numberGuesser(int &MIN, int &MAX, int answer)
{

    string hiLo{};
    int dif = MAX - MIN;
    guess = dif/2 + MIN;
    if(guess == answer)
    {
        cout << "The number is " << guess << "!";
        return guess;
    }

    cout << "is the number " << guess << "? \n\n";

    if(guess < answer)
    {
        MIN = guess;
    }
    if(guess > answer)
    {
        MAX = guess;
    }
    return guess;
}




int main()
{
    vector<int> numbers;
    int MIN{0};
    int MAX;

    cout << "Declare the range: \n\n";
    cin >> MAX;
    for(int i{1}; i < (MAX + 1); i++)
    {
        numbers.push_back(i);
        cout << "\n\n" << numbers[i - 1] << "\n\n";
    }
   cout << " \n\n Declare your number: \n\n";
    cin >> answer;
    while (guess != answer)
    {
     guess = numberGuesser(MIN, MAX, answer);
    }
}