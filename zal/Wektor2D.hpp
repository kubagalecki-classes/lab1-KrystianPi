class Wektor2D{
    public:
    Wektor2D(){
        x = 0;
        y = 0;
    }
    Wektor2D(double aa, double bb)
    {
        x = aa;
        y = bb;
    }
    double getX(){
        return x;
    }
    double getY(){
        return y;
    }
    void setX(double a){
        x=a;
    }
    void setY(double b){
        y=b;
    }
    friend Wektor2D operator+(Wektor2D& w1 , Wektor2D& w2) { 
        return Wektor2D(w1.getX() + w2.getX(), w1.getY() + w2.getY()); 
        }
    ~Wektor2D(){
        print();
        cout << "tu destruktor" << endl;
    }
    void print(){
        cout << "x = " << x << " y = " << y << endl;
    }
    friend double operator*( Wektor2D& w1,  Wektor2D& w2) { 
        double prod = w1.x * w2.x + w1.y * w2.y;
        return prod;
    }
    private:
    double x;
    double y;
};
    