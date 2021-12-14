#include <iostream>
using namespace std;
#define N 60
int hashFunction(int a){
    int b = a%1000;
    return b;
}

int main()
{
    int a[N];
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
    cout << "\nend";
}
