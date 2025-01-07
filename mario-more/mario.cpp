#include <iostream>
using namespace std;

int main(){
    string rawheight;
    int height;
    while (true) {
        cout << "Height: ";
        cin >> rawheight;
        try {
            height = stoi(rawheight);
        } catch (const std::invalid_argument& e){
            continue;
        } catch (const std::out_of_range& e){
            continue;
        }
        if (height >= 1 && height <= 8){
            break;
        }
    }
    for (int i = 1; i <= height; i++){
        for (int j = 0; j < height-i; j++){
            cout << " ";
        }
        for (int j = 0; j < i; j++){
            cout << "#";
        }
        for (int j = 0; j < 2; j++){
            cout << " ";
        }
        for (int j = 0; j < i; j++){
            cout << "#";
        }
        cout << "\n";
    }
}