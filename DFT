#include <iostream>
#include <complex>
using namespace std;

void RevStrDFT(string &str);

int main() {
    string str;
    cout << "Enter string to be reversed: " << endl;
    getline(cin, str);
    RevStrDFT(str);
    cout << str << endl;
    return 0;
}


// reverses the string by taking the DFT of the sequence, inverting the frequency, then taking the inverse DFT
// not efficient at all, but it's fun
void RevStrDFT(string &str) {
    const double PI = 3.141592654;
    int N = str.length();
    complex<double> DFT[N];
    complex<double> invDFT[N];
    complex<double> freq;
    // calculate DFT using direct sum
    // iterate over frequency bins
    for (int k = 0; k < N; k++) {
        DFT[k] = 0;
        double omega = 2*PI*k/N; // frequency to analyze
        // integrating product
        for (int n = 0; n < N; n++) {
            complex<double> arg(0.0, n*omega); // notice positive argument for frequency inversion
            freq = exp(arg);
            DFT[k] += double(int(str[n]))*freq;
        }
    }
    // inverse DFT
    // iterate over frequency bins
    for (int k = 0; k < N; k++) {
        invDFT[k] = 0;
        double omega = 2 * PI * k / N; // frequency to synthesize
        // integrate product
        for (int n = 0; n < N; n++) {
            complex<double> arg(0.0, n * omega);
            freq = exp(arg);
            invDFT[k] += DFT[n]/double(N) * freq;
        }
        str[(k + N - 1) % N] = round(real(invDFT[k])); // circular shift by one
    }
}
