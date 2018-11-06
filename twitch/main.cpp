#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    bool on = true;
    do{
    system("phantomjs C:\\Users\\Roger\\Desktop\\twitch\\obj\\Debug\\test.js > C:\\Users\\Roger\\Desktop\\twitch\\bin\\Debug\\twitch.txt");
    ifstream input;
    size_t pos;
    string line;
    int position;
    string user = "";
    int start;
    string site;

    input.open("C:\\Users\\Roger\\Desktop\\twitch\\bin\\Debug\\twitch.txt");
    if(input.is_open()){
        while(getline(input,line)){
            pos = line.find("class=\"js-channel-link ember-view\">            ");
            if(pos!=string::npos){
                break;
            }
        }
    }
    for(int i = line.length(); i <= line.length(); i--){
        if(line[i] == ' '){
            position = i+1;
            break;
        }
    }
    for(int i = position; i < line.length(); i++){
        user += line[i];
    }

    site = "start https://www.twitch.tv/" + user;
    if(site == "start https://www.twitch.tv/"){
        site = "start https://www.twitch.tv/HiRezTV";
    }
    cout << site << endl;
    system("taskkill /F /IM iexplore.exe > catch.txt");
    system(site.c_str());
    Sleep(400000);
    user = "";
    input.open("C:\\Users\\Roger\\Desktop\\twitch\\bin\\Debug\\twitch.txt");
    if(input.is_open()){
        while(getline(input,line)){
            pos = line.find("class=\"js-channel-link ember-view\">            ");
            if(pos!=string::npos){
                break;
            }
        }
    }
    for(int i = line.length(); i <= line.length(); i--){
        if(line[i] == ' '){
            position = i+1;
            break;
        }
    }
    for(int i = position; i < line.length(); i++){
        user += line[i];
    }
    site = "start iexplore https://www.twitch.tv/" + user;
    if(site == "start iexplore https://www.twitch.tv/"){
        site = "start iexplore https://www.twitch.tv/HiRezTV";
    }
    cout << site << endl;
    system(site.c_str());
    system("taskkill /F /IM chrome.exe > catch.txt");
    Sleep(400000);
    }while(on != false);
    return 0;
}
