#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{

	string in_line;
	ifstream in("yolo_bbox_data.txt");
	while (getline(in, in_line))
	{
		cout << in_line << endl;
	}
	in.close();
}