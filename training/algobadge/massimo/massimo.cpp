#include <vector>
#include <climits>
using namespace std;

int trova_massimo(int N, vector<int> V) {

    // Inserisci il tuo codice qui

    int max = INT_MIN;

    for (int i = 1; i < N; i++) {
        if(V[i] > max){
            max = V[i];
        }
    }
    return max;
}
