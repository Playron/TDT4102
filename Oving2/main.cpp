#include <iostream>
using namespace std;

void inputAndPrintInteger(){
    int i;
    cout << "Skriv inn et tall: ";
    cin >> i;
    cout << "Tallet du skrev er: " << i << "\n";
}

int inputInteger(){
    int i;
    cout << "Skriv inn et tall: ";
    cin >> i;
    return i;
}

void inputIntegersAndPrintSum(){
    int num1 = inputInteger();
    int num2 = inputInteger();
    int sum = num1 + num2;
    cout << "Summen av tallene: " << sum << "\n";
}

bool isOdd(int n){
    if(n%2 != 0){
        return true;
    }else{
        return false;
    }
}

void printHumanReadableTime(int sec){
    int time = sec%(60*60);
    cout << time << "\n";
}


int loopSum(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum += i;
    }
    return sum;
}


void printIntNotNull(){
    int i;
    cout << "Tast inn tall: ";
    cin >> i;
    int sum = i;
    while (i != 0) {
        cout << i;
        cout << "\n" << "Tast inn tall: ";
        cin >> i;
        sum += i;
    }
    cout << "Sum: " << sum << "\n";
}

int main(int argc, const char * argv[]) {
//    inputAndPrintInteger();
//    int number = inputInteger();
//    cout << "Du skrev: " << number << "\n";
//    inputIntegersAndPrintSum();
//    for(int i = 0; i <15; i++){
//        cout << i  << " " << boolalpha << isOdd(i) << "\n";
//    }
//    printHumanReadableTime(3600);
//    cout << "Sum: " << loopSum(100) << "\n";
    printIntNotNull();
}
