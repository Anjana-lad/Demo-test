#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // Open a file for reading
    ifstream fin("G:\\batch830-10\\test\\c++ Program\\input.txt");
    if (!fin) {
        cout << "Error opening input file" << endl;
        return 1;
    }
    // Open a file for writing
    ofstream fout("G:\\batch830-10\\test\\c++ Program\\output.txt");
    if (!fout) {
        cout << "Error opening output file" << endl;
        fin.close(); // Close the input file
        return 1;
    }
    // Read data from input file and write it to output file
    int num;
    while(fin >> num) {
        fout<<num << " "; // Write data to output file
    }
    fin.close();
    fout.close();
    cout << "Data copied from input.txt to output.txt successfully." << endl;
}
