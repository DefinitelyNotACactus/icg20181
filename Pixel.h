#ifndef PIXEL_H
#define PIXEL_H

class Pixel{

private:
    int x, y; //coordinate variables    
    int r, g, b, a; //color variables
    
public:
    Pixel(int x, int y, int r, int g, int b, int a){
        this->x = x;
        this->y = y;
        this->r = r;
        this->g = g;
        this->b = b;
        this->a = a;
    }
    
    int getX(){
        return x;
    }
    
    int getY(){
        return y;
    }
    
    void incrementX(){
        x++;
    }
    
    void decrementX(){
        x--;
    }
    
    void incrementR(){
        r++;
    }
    
    void decrementR(){
        r--;
    }
    
    void incrementG(){
        g++;
    }
    
    void decrementG(){
        g--;
    }
    
    void incrementB(){
        b++;
    }
    
    void decrementB(){
        b--;
    }
    
    void incrementA(){
        a++;
    }
    
    void decrementA(){
        a--;
    }
    
    void setX(int newX){
        x = newX;
    }
    
    void incrementY(){
        y++;
    }
    
    void decrementY(){
        y--;
    }
    
    void setY(int newY){
        y = newY;
    }
    
    int getR(){
        return r;
    }
    
    void setR(int newR){
        r = newR;
    }
    
    int getG(){
        return g;
    }
    
    void setG(int newG){
        g = newG;
    }
    
    int getB(){
        return b;
    }
    
    void setB(int newB){
        b = newB;
    }
    
    int getA(){
        return a;
    }
    
    void setA(int newA){
        a = newA;
    }
};
#endif // PIXEL_H

