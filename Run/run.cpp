#include <iostream>
#include "../Shape/Shape.h"
#include "../Triangle/Triangle.h"
#include "../Ellipse/Ellipse.h"
#include "../Circle/Circle.h"
#include "../Rectangle/Rectangle.h"
#include "../ShapeFactory/ShapeFactory.h"
#include <list>

std::string createShape(int);
int main()
{
    ShapeFactory mFac;
    Shape *ptrr;
    int sh;
    std::string stmp = "";
    std::list<Shape *> myListShape;

    do
    {
        do
        {
            std::cout << "Ban muon tao Hinh nao:\n0.Hinh tam giac\n1.Hinh chu nhat\n2.Hinh tron\n3.Hinh ellip\nNhap: ";
            std::cin >> sh;
            if (sh < 0 || sh > 3)
                std::cout << "loi cu phap. Moi nhap lai" << std::endl;
        } while (sh < 0 || sh > 3);

        std::string ss = createShape(sh);
        ptrr = mFac.creatShape(sh, ss);
        myListShape.push_back(ptrr);
        std::cout << "Ban co muon tiep tuc ?? Y/N\nNhap: ";
        std::cin >> stmp;
        if (stmp != "Y" && stmp != "y" && stmp != "N" && stmp != "n")
            std::cout << "loi cu phap...." << std::endl;
    } while (stmp == "Y" || stmp == "y");

    std::cout << "Tien hanh write list ra file" << std::endl;
    mFac.saveShapesToFile("../data/my_document.txt", myListShape);

    std::cout << "Tien hanh doc file ghi ra list<<>> moi" << std::endl;
    std::list<Shape *> testList(mFac.readShapesFromFile("../data/my_document.txt"));
    std::cout << "da doc ra tu file" << std::endl;
    std::list<int>::iterator it;
    for (it = testList.begin(); it != testList.end(); ++it)
    {
        std::cout << "----------------------------------------------------------------------" << std::endl;
        std::cout << (*it)->toString() << std::endl;
        std::cout << "Dien tich:" << (*it)->getArea() << std::endl;
        std::cout << "Chu vi:" << (*it)->getPerimeter() << std::endl;
    }

    return 0;
}

string createShape(int sh)
{
    Point_t a, b, c;

    int tmp, len, wit;
    switch (sh)
    {
    case 0: // hinh tam giac
        std::cout << "Nhap toa do diem a:"; 
        inp_point(a);
        std::cout << "Nhap toa do diem b:"; 
        inp_point(b);
        std::cout << "Nhap toa do diem c:";
        inp_point(c); 
        break;
    case 1: // hinh chu nhat
        std::cout << "Nhap toa do diem a:"; 
        inp_point(a);
        std::cout << "Nhap toa do diem b:"; 
        inp_point(b);
        std::cout << "Nhap chieu rong:"; 
        std::cin >> wit;
        std::cout << "Nhap chieu dai:";
        std::cin >> len;
        break;
    case 2: // hinh tron
        std::cout << "Nhap toa do diem a: "; 
        inp_point(a);
        std::cout << "Nhap ban kinh: "; 
        std::cin >> tmp;
        break;
    case 3:
        std::cout << "Nhap toa do diem a: "; 
        inp_point(a);      
        cout << "Nhap ban kinh truc x: ";  
        std::cin >> tmp; 
        std::cout << "Nhap ban kinh truc y: ";  
        std::cin >> tmp; 
        break;
    default:
        break;
    }
    string ss = js.dump();
    return ss;
}