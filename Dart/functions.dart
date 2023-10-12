void main()
{
  perimerter(4,5);
  print(getArea(4, 6));
}

void perimerter(int l, int b)
{
  int per= 2*(l+b);
  print("Perimeter is $per");
}

int getArea(int l,int b)
{
  return l*b;       //by defaulut a function in dart returns null
}
