#include "itkImage.h" 
#include <iostream>
int main( int argc, char **argv ) { typedef itk::Image<unsigned short,3>
ImageType;
ImageType::Pointer image = ImageType::New(); std::cout<< “ITK Hello World!” << std::endl; return 0;
}