#include <iostream>

using namespace std;

    float v, s, e;

float velocity(){
    v = 331.3 + 0.61 * s;
    cout << "----------------------------------------------------------------------------------------------------------------------\nAt " << s << " degrees Celsius the velocity of the sound is " << v << "m/s" <<endl;
}

int main()
{ while(true){
    cout << "\n\n----------------------------------------------------------------------------------------------------------------------\nHello dear user (^-^)\n\nPlease enter a start temperature: \n";
    cin >> s;
    cout << "\n----------------------------------------------------------------------------------------------------------------------\nPlease enter an end temperature: \n";
    cin >> e;
    if(s>e){
        while(e<=s){
            velocity();
            s--;
        }
    }
    else if(s<e){
        while(s<=e){
            velocity();
            s++;

        }
    }}


}
