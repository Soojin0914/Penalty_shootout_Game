#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int mygoal = 0;
	int comgoal = 0;
	//1. 0~5 사이의 난수 한개를 생성한다. (컴퓨터가 차는 경우)
	int comshoot;

	while (1) {
		comshoot = rand() % 5;
		if (rand() % 5 != 0)break;
	};
	//2. 사용자가 1개의 숫자를 입력한다. 

	int block;

	cin >> block;

	//3. 결과를 계산한다. 
	int mygoal=0;
	int comgoal=0;

	if (comshoot != block)
		comgoal++;

	comscore=
	//4. 결과를 출력한다.


	//5.  0~5 사이의 난수 한개를 생성한다. (사용자가 차는 경우)


	//6. 사용자가 1개의 숫자를 입력한다. 


	//7. 결과를 계산한다.


	//8.결과를 출력한다.


	//9. 5번씩의 기회가 끝나고 최종 결과를 출력하고 끝난다.


	//10. 무승부라면 1번씩 기회를 더 준다.


	return 0;
}