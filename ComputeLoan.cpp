#include <iostream>
#include <math>

using namespace std;

int main()
{
  double loana = 0; // 대출액
  double ai = 0; // 연간 이자율
  double noy = 0;; // 대출 연수
  double mi = 0; // 월간 이자율
  double denominator = 0; //분모
  double montlyfee = 0; // 매월 납입금

  std::cout << "대출액을 입력 해주십시오\n";
  std::cin >> lona;
  std::cout << "연간 이자율을 입력해 주십시오" << '\n';
  std::cin >> ai;
  std::cout << "대출연수를 입력해 주십시오" << '\n';
  std::cin >> noy;

  mi = ai/12;
  denominator = pow((1+mi), noy*12);



  return 0;
}
 
