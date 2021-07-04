using namespace std;
namespace propgeo{
float p=0,ar=0,h=0;

float perimetro(float a,float b,float c){
  p = a+b+c;
  return p;
}

float hipotenusa(float a,float b,float c){
  if(a>b && a>c){
    h = a;

  }
    if(b>a && b>c){
    h = b;

  }
    if(c>a && c>b){
    h = c;

  }
  return h;
}

float area (float a,float b,float c){
  if(a>b && a>c){

      ar = ((b*c)/2);

  }
    if(b>a && b>c){

      ar = ((a*c)/2);
  }
    if(c>a && c>b){

      ar = ((a*b)/2);
  }

  return ar;
}
}