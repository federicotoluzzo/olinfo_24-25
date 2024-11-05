//
// Created by fede on 05/11/24.
//
#include <string>
#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

int main() {
    // se preferisci leggere e scrivere da file
    // ti basta decommentare le seguenti due righe:

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T, t;
    cin >> T;

    for (t = 1; t <= T; t++) {
        int N, F, C;

        // N = dimensione hdd in byte
        // F = dimensione filmati in byte
        // C = dimensione canzoni in byte

        // scrivi in queste variabili la risposta
        int nf, nc;



        cin >> N >> F >> C;

        // RISOLVI QUI IL PROBLEMA!!

        nf = N / F;
        nc = N % F / C;

        cout << "Case #" << t << ": " << nf << " " << nc << endl;
    }
}