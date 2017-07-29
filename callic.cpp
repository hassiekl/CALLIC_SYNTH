#include <iostream>
using namespace std;

void _SynthReverb()
{
    for (int index = 0; index < 27; ++index){
        int string[27] = {'\0', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
                      'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
                      'w', 'x', 'y', 'z'};
        cout << string[index] << endl;
    }
}
void _SynthRecontructor()
{
    for (int i = 0; i < 27; ++i){
        int string[27] = {'\0', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
                          'M' , 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        cout << string[i] << endl;
    }
}
void _SynthDIAL()
{
    for (int j = 0; j < 27; ++j){
        int string[27] = {'\0', 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
                          18, 19, 20, 21, 22, 23, 24, 25, 26};
        cout << string[j] << endl;
    }
}
void _SynthInput()
{
    for (int k = 13; k > 0; --k){
        int string[13] = {'\0', '+', '-', ')', '(', '*', '&', '^', '%', '$', '#', '@', '!'};

        cout << string[k] << endl;
    }
}
void Convert_Synth(string catalyst)
{
    char app = '\0';

    for (int index = 0; index < catalyst.length(); ++index){
        app = catalyst[index];
        cout << app;
    }

}
int main()
{

    string input;

    int record = 0;
    int string;

    string;

    while (input != "exit")
    {
     input = string;
     cin >> input;
     Convert_Synth(input);
    }






    return 0;
}
