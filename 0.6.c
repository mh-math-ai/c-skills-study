컴퓨터 메모리의 기본구조

CPU <-캐쉬 메모리-> RAM

메모리를 주고 받는 중 자주 쓰는 것은 Cache에 저장한다 

순차 접근(sequential access)
예전 자기테입에서 쓰였다 
물리적 장치의 한계, 그래도 사람이 하는 거보다는 빨랐다 

임의 접근(random access)
RAM은 ramdom access memory이다 
램은 임의 접근을 잘 하도록 만들어진 장치이다

주소를 알면 바로 그 장소에 찾아갈 수 있다 

DRAM(Dynamic Random Access Memory)램은 트랜지스터 하나와 커패시터 하나가 셀을 형성한다 
구조가 단순해서 집적도를 높여 대량으로 만들기 유리하지만 커패시터의 전하가 방전되는 것을 막기 위해
주기적인 리프레시가 필요하다 

SRAM(Static Random Access Memory)은 트랜지스터 6개가 셀을 형성한다. 커패시터는 없는 셀이다 
플립플롭 회로 형태로 데이터가 유지되어 리프레시가 필요 없고 DRAM보다 훨씬 빠르지만,
셀 하나에 트랜지스터가 6개 필요해 면적을 많이 차지하고 가격이 비싸다 

트랜지스터 하나와 커패시터가 없는 1TOC 셀이나 트랜지스터 3개로 구성된 3TOC셀들도 연구되고 있다 

Bit란 binary digit의 약자이다 

cpu와 메모리를 연결하는 통로는 control, address와 data 통로가 나뉘어져있다(랜덤 엑세스를 위해)

c언어에선 바로 이 address bus때문에 포인터가 존제한다 