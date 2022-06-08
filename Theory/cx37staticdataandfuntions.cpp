#include <iostream>
using namespace std;

class employee
{
  int id;
  int count;

public:
  void setdata(void)
  {
    cin >> id;
  }
  void getdata(void)
  {
    cout << id << "\n";
  }
};
int main()
{
  employee parishkar;
  return 0;
}