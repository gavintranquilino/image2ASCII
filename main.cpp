#include <iostream>
#include <fstream>

char pixelToChar(int pixelVal);

void image2Ascii(const std::ifstream &input, std::ostream &output); 

int main()
{
  std::ifstream fin("input.jpg");
	
	if (!fin.is_open())
	{
	    std::cout << "Unable to open file";
	    fin.close();
	    return 1;
	}
	
	return 0;	
}
