#include "ShapeFactory.h"

Shape* ShapeFactory::createShape(int type,const string &s)
{
    	if (x == 0)
	{
		Triangle *tg=new Triangle;
		tg->fromString(s1);
		return tg;
	}
	else if (x == 1)
	{
		Rectangle *rec = new Rectangle;
		rec->fromString(s1);
		return rec;
	}
	else if (x == 2)
	{
		Circle* cir = new Circle;
		cir->fromString(s1);
		return cir;
	}
	else if (x == 3)
	{
		Ellipse *ellip=new Ellipse;
		ellip->fromString(s1);
		return ellip;
	}
	else
	{
		cout << " data ko phu hop" << endl;
		return nullptr;
	}
}

list<Shape*> ShapeFactory::readShapesFromFile(const string &filename)
{
    std::string filename("../data/my_document.txt");
    std::list<string> lines;
    std::string line;
    ifstream input_file(filename);
    if (!input_file.is_open()) {
        cerr << "Could not open the file - '"
             << filename << "'" << endl;
        return EXIT_FAILURE;
    }

    //Đọc từng dòng trong
    while (getline(input_file, line)){
        line = line[0];
        char *c = new char[line.size() + 1];
        copy(type.begin(), line.end(), c);
        c[line.size()] = '\0';
        int line_in = stoi(c);
        Shape *temp = createShape(line_in,line);
        lines.push_back(line);//Lưu từng dòng như một phần tử vào vector lines.
    }

    //Đóng file
    input_file.close();
    return 0;
}

void  ShapeFactory::saveShapesToFile(const string &filename, const list<Shape*> &shapes)
{
    std::list<Shape*> copyListShape(shape);
	fstream f;
	f.open("../data/my_document.txt", ios::app);
	for (list<Shape*>::iterator it = copyListShape.begin(); it != copyListShape.end(); ++it)
	{
		std::cout << "---------------" << std::endl;
		std::string data = (*it)->toString();
		std::cout << (*it)->toString() << std::endl;
		data += "\n";
		f << data;
		data = "";
	}
	f.close();
	std::cout << "da ghi thanh cong" << std::endl;
}