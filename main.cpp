#include<iostream>
#include<ctime>
#include<string>
using namespace std;
int main(){

    string a = "\n===================================\n";
    string b = " Simple Typing speed testor in C++ ";
    string c = "\n===================================\n";
    cout << a << b << c;

    string para = "The quick brown fox jumps over the lazy dog.";
    string typed; // User will write in this string.
    int correct = 0; // We will check the accuracy with this.

    cout << "\n" << "Type this line exactly as shown" << "\n\n";
    cout << para << endl;
    cout << "   Please press Enter to start typing...\n";
    cin.ignore();  // 1. clears the previous input buffer.  2. Enter dabane ke liye bolta ha.

    // Calculating the Time
    time_t start = time( NULL );
    getline( cin,typed );
    time_t end = time( NULL );
    double time_taken = difftime( end,start );

    // Calculating the accuracy
    for( auto i = 0 ; i < para.size() ; i++ ){
        if( para[i] == typed[i] ) correct++;
    }
    double accuracy = ( (double) correct / typed.size() * 100 );

    // Counting the total words per minute to calculate WPM
    int words = 1;
    for( auto ch : typed ){
        if( ch == ' ' ) words++;
    }
    double wpm = ( words / time_taken ) * 60.0;

    // RESULTS
    cout << endl;
    cout << "Time Taken :" << (int) time_taken << "sec" << endl;
    cout << "WPM:" << wpm << endl;
    cout << "Accuracy:" << accuracy << "%" <<endl;

    return 0;
}
