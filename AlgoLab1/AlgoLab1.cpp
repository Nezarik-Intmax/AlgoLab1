#include <iostream>
using namespace std;
#define N 60
int hashFunction(int a){
    int b = a%1000;
    return b;
}

int main(){
    int a[N];
    printf("Начальный массив:");
    for (int i = 0; i < N; i++) {
        bool stop = false;
        while (!stop){
            stop = true;
            a[i] = rand() % 9000 + 1000;
            for (int j = 0; j < i; j++){
                if (a[i] == a[j]) {
                    stop = false;
                    break;
                }
                else{
                    stop = true;
                }
            }
        }
    }
    for(int i = 0; i < N; i++){
        if(i % 10 == 0) cout << endl;
        cout << a[i] << "  ";
    }
    printf("\nКонечный массив:\n ");
    const int t = N * 1.5;
    int b[t];
    for(int i = 0; i < t; i++)b[i]=0;
    for(int i = 0; i < N; i++){
        int ind = hashFunction(a[i]);
        while(1){
            if(ind > t) ind %= t;
            if(b[ind]==0){
                b[ind]=a[i];
                break;
            }
            else ind++;
        }
    }
    for(int i = 0; i < t; i++){
        if(i % 10 == 0) cout << endl;
        cout << b[i] << "  ";
    }

    cout << "\nend";
}
