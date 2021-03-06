2.2 문제 해결 과정
리처드 파인만
1. 칠판에 문제를 적는다.
2. 골똘히 생각한다.
3. 칠판에 답안을 적는다.

# 배울 점
1. 문제 해결 과정을 단계별로 나누었다는 것
=>과정을 세분화함으로써, 어디가 부족하고 어디를 개선해야하는지 판단할 수 있게 한다.
2. 문제를 적는 단계가 있다는 것
=> 문제를 다시 적기 위해서는 문제를 일고 이해한 뒤 자신의 언어를 이용해 재정의해야 하리 떄문에 중요함

# 문제를 풀 시 4 단계
1. 문제를 이해한다.
2. 어떻게 풀지 계획을 세운다.
3. 계획을 수행해서 문제를 해결하낟.
4. 어떻게 풀었는지 돌아보고, 개선할 방법이 있는지 찾아본다.

# 프로그래밍 대회를 위한 여섯 단계 문제 해결 알고리즘
1. 문제를 읽고 이해한다.
2. 문제를 익숙한 용어로 재정의한다.
3. 어떻게 해결할지 계획을 세운다.
4. 계획을 검증한다.
5. 프로그램으로 구현한다.
6. 어떻게 풀었는지 돌아보고, 개선할 방법이 있는지 찾아본다.

# 1단계: 문제를 읽고 이해하기
모든 프로그래밍 대회 참가자들이 공통으로 하는 실수가  문제를 잘못 읽는 것이다. 가능한 빠른 시간에 문제를 풀어내야하는 대회에서는 조급한 마음에 문제를 곁눈질한 뒤 딸려오는 그림과 입출력 예제를 보고 문제가 원하는 것을 유추하기 십상이다.
=> 성급한 행동은 큰 대가를 치루게 된다.

# 2단계: 재정의와 추상화
자신이 다루기 쉬운 개념을 이용해서, 문제를 자신의 언어로 풀어 쓰는 것입니다. 이 과정은 문제가 요구하는 바를 직관적으로 이해하기 위해 꼭 필요하며, 요구하는 바가 복잡한 문제일수록 그 중요성이 더해집니다.
추상화란 현실 세계의 개념을 우리가 다루기 쉬운 수학적/전산학적 개념으로 옮겨 표현하는 과정입니다.
=> 어려운 문제를 쉽게 만들 수도 있고, 쉽게 해결할 수 있는 문제를 오히려 어렵게 풀 수도 있습니다.(어떤 부분을 추상화할 것인지를 선택하는 작업과 문제를 재정의하는 방법들에 대한 고찰은 좋은 프로그래머가 되기 위해 필수적인 과정입니다.)

# 3단계: 계획 세우기
문제를 어떤 방식으로 해결할지 결정하고, 사용할 알고리즘과 자료구조를 선택합니다.

# 4단계: 계획 검증하기
구현을 시작하기 전에 계획을 검증하는 과정을 거쳐야합니다.
=> 설계한 알고리즘이 모든 경우에 요구 조건을 정확히 수행하는지를 증명하고, 수행에 걸리는 시간과 사용하는 메모리가 문제의 제한 내에 들어가는지 확인해야한다.

# 5단계 계획 수행하기
구현이 부정확하거나 비효율적이면 프로그램은 정확히 동작할 수 없다.

# 6단계 회고하기
장기적으로 가장 큰영향을 미치는 단계가 바로 회고이다.
=> 문제를 해결한 과정을 돌이켜 보고 개선하는 과정

# 문제를 풀지 못할 때
일정 시간이 지나도록 고민해도 답을 찾지 못할 때는 다른 사람의 소스 코드나 풀이를 참고한다는 원칙을 세우고 이를 지키자.
=> 소스코드나 풀이를 참조할 떄는 반드시 복기를 동반해야한다. 자신이 문제를 해결할 때 취했던 접근들을 되새겨 보고 자신이 왜 이 풀이를 떠올리지 못했는지를 살펴보아야한다.

2.3 문제 해결 전략
자신이 알고 있는 기술을 직접적으로 적용할 수 있는 단순한 문제의 경우에는 상관 없지만 어려운 문제일수록 다양한 방법을 시도해 보면서 답안을 찾아야한다.

# 직관과 체계적인 접근
문제 해결 전략에서 가장 먼저 강조해야 할 것은 문제와 답의 구조에 대한 직관의 중요성이다.

# 체계적인 접근을 위한 질문들
- 비슷한 문제를 풀어본 적이 있던가?
기존에 접했던 문제가 온전히 경험이 되려면 그 원리를 완전히 이해하고 변형할 수 있어야 합니다.

- 단순한 방법에서 시작할 수 있을까?
무식하게 풀 수 있을까?(시간과 공간 제약을 생각하지 않고 문제를 해결할 수 있는 가장 단순한 알고리즘을 만들어 보는 것)

- 내가 문제를 푸는 과정을 수식화할 수 있을까?

- 문제를 단순화할 수 없을까?

- 그림으로 그려볼 수 있을까?

- 수식으로 표현할 수 있을까?

- 문제를 분해할 수 있을까?

- 뒤에서부터 생각해서 문제를 풀 수 있을까?

- 순서를 강제할 수 있을까?

- 특정 형태의 답만을 고려할 수 있을까?