#include <iostream>
#include <cstring>

using namespace std;

class Articles{
    protected:
        string name;
        int rating;
    public:
        Articles(string n, int r){
            name = n;
            rating = r;
        }
        virtual void show(void){
            cout<<"Name: "<<name<<endl;
            cout<<"Rating: "<<rating<<endl;
        }
};

class ArticleVideo : public Articles{
    private:
        string video_name;
        int video_length;
    public:
        ArticleVideo(string n, int r, string vn, int vl) : Articles(n, r){
            video_name = vn;
            video_length = vl;
        }
        void show(void){
            Articles::show();
            cout<<"Video name: "<<video_name<<endl;
            cout<<"Video length: "<<video_length<<endl;
        }
};

class ArticleText : public Articles{
    private:
        string text_name;
        int text_length;
    public:
        ArticleText(string n, int r, string tn, int tl) : Articles(n, r){
            text_name = tn;
            text_length = tl;
        }
        void show(void){
            Articles::show();
            cout<<"Text name: "<<text_name<<endl;
            cout<<"Text length: "<<text_length<<endl;
        }
};

int main(){
    string name, video_name, text_name;
    float rating, vlen;
    int words;

    // for Video
    name = "Django tutorial";
    video_name = "Django tutorial by CWH";
    vlen = 4.56;
    rating = 4.89;
    ArticleVideo djVideo(name, rating,video_name , vlen);

    // for Text
    name = "Django tutorial Text";
    text_name = "Django tutorial by CWH";
    words = 433;
    rating = 4.19;
    ArticleText djText(name, rating,text_name, words);

    // This is why we did virtual classes, so that we can make an array using baseclass pointer and store different derived class objects together
    Articles* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->show();
    tuts[1]->show();

    return 0;
}
