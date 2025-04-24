#include <iostream>
using namespace std;

void SummeBerechnen() {
    int arr[6] = {10,20,304,30,9321,11};
    int summe = 0;

    for (int i = 0; i < 6; i++)
    {
        summe = summe + arr[i];
    }

    cout << "Endergebnis: " << summe; 
}

void MinToMax() {

    int arr[6] = {10,20,304,30,9321,11};
    int arr2[6];
    int count = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
            
            
        }

        arr2[count] = arr[i];
        count = 0;
        
    }   

    for (int k = 0; k < 6; k++)
    {
        cout << arr2[k] << "\n";
    }

}

void Doppelt(){
    int arr[6] = {10,20,304,30,30,11};
    int arr2[6];
    int count = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (arr[i] = arr[j])
            {   
                arr2[i];
                count++;
            }
            

            
        }
    }   

    for (int j = 0; j < 6; j++)
    {
        cout << arr[j] << ' gibt es mind. doppelt!\n';
    }
    
}



int main() {
    Doppelt();
}