#include <iostream>
    using namespace std;
    bool gameOver;
    const int width = 20;
    const int height = 20;
    int x,y,fruitX, fruitY, score;
    enum eDirection {stop = 0 , left, right,up, down};
    eDirection dir;

    void setUp(){

    gameOver= false;
    dir = stop;
    x = width/2;
    y = height/2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    }
    void drow(){

        system("clear");
        for (int i = 0; i < width+2; i++)
        cout << "#";
        cout << endl;
 
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "#";
                cout << " ";
                 
 
            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }
 
    for (int i = 0; i < width+2; i++)
        cout << "#";
    cout << endl;

    }
    void input(){

    }
    void logic(){

    }
    int main(){

    setUp();
    while (!gameOver)
    {
    drow();
    input();
    logic();
    }

    return 0;
    }