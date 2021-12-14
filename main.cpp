#include<iostream>
#include<string>
using namespace std;

// Global constants
const int ROWS = 3;  // The number of rows in the array
const int COLS = 3;  // The number of columns in the array
const int MIN = 1;  // The value of the smallest number
const int MAX = 9;  // The value of the largest number

// Function prototypes
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max);
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRowSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkColSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkDiagSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
void showArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);

int main()
{
    
    /* Define a Lo Shu Magic Square using 3 parallel arrays corresponding         to each row of the grid */
    int magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS];
    char answer = 'y';
    int project = 5;
    string programmer = " Bao Quyen Lam";
    string dueDate = "December 6, 2021";
    do {
        fillArray(arrayRow1,arrayRow2,arrayRow3,size);
        showArray(arrayRow1,arrayRow2,arrayRow3,size);
        if (isMagicSquare arrayRow1,arrayRow2,arrayRow3,size)) {
            cout <<" This is a Lo Shu magic square. "
        }
        else
            cout <<" This is not a Lo Shu magic square." << endl;
            cout <<" Do you want to try again? "
        cin >> answer;
            }
    
} while (answer == 'y' ||answer == 'Y' );
cout <<" Name:" << programmer << endl;
cout <<" Project #:" << project << endl;
cout <<" Due Date: " << dueDate;
    return 0;
}
// Function definitions go here
void fillArray (int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
    int rows = 0;
    for ( int i = 0; i < size; i++) {
        cout <<" Enter the number for row " << rows << "and column" << i << ":" ;
        cin >> arrayRow1[i];
}
    rows = rows + 1;
    for (int t = 0; t < size; t++){
        cout <<" Enter the number for row " << rows << "and column" << t << ":";
        cin >> arrayRow2[t];
    
    }
    rows = rows + 1;
    for (int n = 0; n < size; n++){
        cout <<" Enter the number for row " << rows << "and column" << n << ":";
        cin >> arrayRow3[n];
    }
    rows = rows + 1;
    
    void showArray (int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
        int rowstwo = 0;
        for ( int n = 0; n < size; n++){
            cout << arrayRow1[n] << " " ;
            
        }
        cout << endl;
        rowstwo = rowstwo + 1;
        for (int n = 0; n < size; n++){
            cout << arrayRow2[n] << " ";
        }
        cout << endl;
        rowstwo = rowstwo + 1;
        for (int n = 0; n < size; n++){
            cout << arrayRow3[n] << " ";
        }
        cout << endl;
        
    }
    bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max) {
        bool isValid = true;
    for (int k = 0; k < COLS; n++){
        if (arrayRow1[k] < min || arrayRow1[k] > max) {
            isValid = false;
        }
        else if (arrayRow2[k] < min || arrayRow2[k] > max){
            isValid = false;
       
        }
        else if (arrayRow3[k] < min || arrayRow3[k] > max) {
            isValid = false;
        }
    }
        return isValid;
    }
    bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) {
    int array[9];
    array[0] = arrayRow1[0];
    array[1] = arrayRow1[1];
    array[2] = arrayRow1[2];
    array[3] = arrayRow2[0];
    array[4] = arrayRow2[1];
    array[5] = arrayRow2[2];
    array[6] = arrayRow3[0];
    array[7] = arrayRow3[1];
    array[8] = arrayRow3[2];
    
    for(int i =0 ; i < 9; i ++){
        for(int j = i + 1; j < 9; j ++){
            if(array[i] == array[j]){
                return false;
            }
        }
    }
    
    return true;
    }
    bool checkRowSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) {
        bool rowStatus = true;
        int sumRow1 = arrayRow1[0] + arrayRow1[1] + arrayRow1[2];
        int sumRow2 = arrayRow2[0] + arrayRow2[1] + arrayRow2[2];
        int sumRow3 = arrayRow3[0] + arrayRow3[1] + arrayRow3[2];
        
        if (sumRow1 != sumRow2 || sumRow2 != sumRow3 || sumRow1 != sumRow3) {
            rowStatus = false;
        }
        return rowStatus;
    }
    
    bool checkColSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) {
        bool columnStatus = true;
        int sumCol1 = arrayRow1[0] + arrayRow2[0] + arrayRow3[0];
        int sumCol2 = arrayRow1[1] + arrayRow2[1] + arrayRow3[1];
        int sumCol3 = arrayRow1[2] + arrayRow2[2] + arrayRow3[2];
        
        if (sumCol1 != sumCol2 || sumCol2 != sumCol3 || sumCol1 != sumCol3){
            columnStatus = false;
        }
        return columnStatus;
    
}
    bool checkDiagSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
        bool diaStatus = true;
        int sumDia1 = arrayRow1[0] + arrayRow2[1] + arrayRow3[2];
        int sumDia2 = arrayRow1[2] + arrayRow2[1] + arrayRow3[0];
        
        if (sumDia1 != sumDia2) {
            diaStatus = false;
        }
        return diaStatus;
        
    }
    
    bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) {
        bool isSquare = false;
        bool a = checkRange(arrayRow1,arrayRow2,arrayRow3,size, min,max);
        bool b = checkRowSum(arrayRow1,arrayRow2,arrayRow3,size);
        bool c = checkUnique(arrayRow1,arrayRow2,arrayRow3,size);
        bool d = checkColSum(arrayRow1,arrayRow2,arrayRow3,size);
        bool e = checkDiagSum(arrayRow1,arrayRow2,arrayRow3,size);
        if (a == true && b == true && c == true && d == true && e == true) {
            isSquare = true;
        }
        return isSquare;
        }
    }



