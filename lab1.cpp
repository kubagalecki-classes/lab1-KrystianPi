#include <iostream>
#include <math.h>
using namespace std;

class Wektor2D
{
public:
    Wektor2D()
    {
        setX(0);
        setY(0);
    }
    double norm(double a, double b) const
    {
        double vector_norm = sqrt(a * a + b * b);
        cout << "norm = " << vector_norm << endl;
        return vector_norm;
    }
    void print() { cout << "x = " << x << " y = " << y << endl; }
    Wektor2D(double aa, double bb)
    {
        x = aa;
        y = bb;
        print();
        norm(x, y);
    }
    double getX() { return x; }
    double getY() { return y; }
    void   setX(double f) { x = f; }
    void   setY(double h) { y = h; }
    ~Wektor2D()
    {
        cout << "tu destruktor" << endl;
        print();
    }
    Wektor2D operator+(Wektor2D& w1) const { return Wektor2D(w1.getX() + x, w1.getY() + y); }
    Wektor2D operator*(Wektor2D& w2) const { return Wektor2D(w2.getX() * x, w2.getY() * y); }
    

private:
    double x;
    double y;
};

int main()
{
    Wektor2D v1, v2{3, 5};
    v2.setX(2);
    v1.setX(3);
    v1.setY(3);
    v2.print();
    v1.print();
    Wektor2D v3 = v1 + v2;
    Wektor2D v4 = v3 * v1;
    v3.print();
    v4.print();
}
