#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
namespace VECTOR {
  class Vector 
  {
  public:
    enum Mode { RECT, POL };
  private:
    double x;
    double y;
    double mag;
    double ang;
    Mode mode;
	// 값들 설정하는 private 메소드
    void set_mag();
    void set_ang();
    void set_x();
    void set_y();
  public:
    Vector();
    Vector(double n1, double n2, Mode form = RECT);
    void reset(double n1, double n2, Mode form = RECT);
    ~Vector();
    double xval() const {return x;}
    double yval() const {return y;}
    double magval() const {return mag;}
    double angval() const {return ang;}
    void polar_mode();
    void rect_mode();
	// 연산자 오버로딩
    Vector operator+(const Vector & b) const;
    Vector operator-(const Vector & b) const;
    Vector operator-() const;
		Vector operator*(double n) const;
	// 프렌드 함수
		friend Vector operator*(double n, const Vector & a);
		friend std::ostream & operator<<(std::ostream & os, const Vector & v);
  };
} // namespace VECTOR
#endif
