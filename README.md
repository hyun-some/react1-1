# react1-1



# 정현철 202030328

## 5월 22일 강의 내용

10.1 리스트와 키란 무엇인가?

- 리스트는 자바스크립트의 변수나 객체를 하나의 변수로 묶어 놓은 배열과 같은 것입니다.

- 키는 각 객체나 아이템을 구분할 수 있는 고유한 값을 의미합니다.

- 리액트에서는 배열과 키를 사용하는 반복되는 다수의 엘리먼트를 쉽게 렌더링할 수 있습니다.

10.2 여러개의 컴포넌트 렌더링하기

- 예의 에어비엔비의 화면처럼 같은 컴포넌트를 화면에 반복적으로 나타내야 할 경우 배열에 들어 있는 엘리먼트를 map()함수를 이용하여 렌더링 합니다.

- 다음은 numbers 배열에 들어있는 각각의 요소를 map()를 이요하여 하나씩 추출하여, 2를 곱한 후 doubled라는 배열에 다시 넣는 코드입니다.

- 다음은 리액트에서 map()함수를 사용한 예제입니다.

- 이 코드는 numbers의 요소에 2를 곱하는 대신 <li>태그를 결합해서 리턴하고 있습니다.

- 리턴된 listItems는 <ul> 태그와 결합하여 렌더링 됩니다.

10.3 기본적인 리스트 컴포넌트

- 앞서 작성한 코드를 별도의 컴포넌트로 분리하면 다음과 같습니다.

- 이 컴포넌트는 props로 받은 숫자를 numbers로 받아 리스트로 렌더링해 줍니다.

- 이 코드를 실행하면 "리스트 아이템에 무조건 키가 있어야한다."는 경고 문구가 나옵니다.

- 경고 문구가 나오는 이유는 각각의 아이템에 key props가 없기 때문입니다.

10.4 리스트의 키에 대해 알아보기

- 리스트에서의 키는 "리스트에서 아이템을 구별하기 위한 고유한 문자열" 입니다.

- 이 키는 리스트에서 어떤 아이템이 변경, 추가 또는 제거되었는지 구분하기 위해 사용합니다.

- 키는 같은 리스트에 있는 엘리먼트 사이에서만 고유한 값이면 됩니다.

10.6 마치며

요약

- 리스트
 - 같은 아이템을 순서대로 모아놓은 것

- 키
  - 각 객체나 아이템을 구분할 수 있는 고유한 값

- 여러개의 컴포넌트 렌더링
   - 자바스립트 배여르이 map()함수를 사용
    - 배열에 들어있는 각 변수에 어떤 처리를 한 뒤 결과(엘리먼트) 를 배열로 만들어서 리턴함

    - map()함수 안에 있는 엘리먼트는 꼭 키가 필요함

- 리스트의 키
 - 리스트에서 아이템을 구분하기 위한 고유한 문자열
 - 리스트에서 어떤 아이템이 변경, 추가 또는 제거되었는지 구분하기 위해 사용
 - 리액트에서는 키의 값은 같은 리스트에 있는 엘리먼트 사이에서만 고유한 값이면 됨

- 다양한 키값의 사용법
 - 숫자 값을 사용
  - 배열에 중복된 숫자가 들어있다면 키값도 중복되기 때문에 고유해야 한다는 키값의 조건이 충족되지 않음

 - id를 사용
  - id의 의미 자체가 고유한 값이므로 키값으로 사용하기 적합
  - id가 있는 경우에는 보통 id값을 키값으로 사용

 - 인덱스를 사용
  - 배열에서 아이템의 순서가 바뀔 수 있는 경우에는 키값으로 인덱스를 사용하는 것을 권장하지 않음
  - 리액트에서는 키를 명시적으로 넣어 주지 않으면 기본적으로 이 인덱스 값을 키값으로 사용

## 5월 8일 강의 내용
8.2 Arguments 전달하기

- 함수를 정의할 때는 파라미터 혹은 매개변수, 함수를 사용할 때는 아규먼트 혹은 인수라고 부릅니다.

Parameter, Argument

- 이벤트 핸들러에 매개변수를 전달해야 하는 경우도 많습니다.

- 위의 코드는 모두 동일한 역할을 하지만 하나는 화살표 함수를, 다른 하나는 bind를 사용했습니다.

- event라는 매개변수는 리액트의 이벤트 객체를 의미 합니다.

- 두 방법 모두 첫 번째 매개변수는 id이고 두 번째 매개변수로 event가 전달됩니다.

- 첫번째 코드는 명시적으로 event를 매개변수로 넣어 주었고, 두 번째 코드는 id이후 두번째 매개변수로 event가 자동 전달 됩니다.(이 방법은 클래스형에서 사용하는 방법입니다.)

- 함수형 컴포넌트에서 이벤트 핸드러에 매개변수를 전달할 때는 254페이지 코드와 같이 합니다.

9.1 조건부 렌더링이란?

- 여기서 조건이란 우리가 알고 있는 조건문의 조건입니다.

- props로 전달 받은 isLoggedIn 이 true이면 을 , false면 을 return 합ㄴ디ㅏ.

- 이와 같은 렌더링을 조건부 렌더링이라고 합니다.

9.2 엘리먼트 변수

- 렌더링 해야 될 컴포넌트를 변수처럼 사용하는 방법이 엘리먼트 변수입니다.

- 277페이지 코드처럼 state에 따라 button 변수에 컴포넌트의 객체를 저장하여 reutrn 문에서 사용하고 있습니다.

9.3 인라인 조건

- 필요한 곳에 조건문을 직접 넣어 사용하는 방법입니다.
인라인 if
if문을 직접 사용하지 않고, 동일한 효과를 내기 위해 && 논리 연산자를 사용합니다.

- &&는 and연자로 모든 조건이 참일땜나 참이 됩니다.

- 첫 번째 조건이 거짓이면 두번째 조건은 판단할 피룡가 없습니다. 단축평가

- 판단만 하지 않는 것이고 결과 값은 그대로 리턴됩니다.(274아래쪽코드)

- 인라인 if-else
삼항 연산자를 사용합니다.

- 문자열이나 엘리먼트를 넣어서 사용할 수도 있습니다.



## 5월 22일 강의 내용



## 5월 8일 강의 내용


8.2 Arguments 전달하기

- 함수를 정의할 때는 파라미터 혹은 매개변수, 함수를 사용할 때는 아규먼트 혹은 인수라고 부릅니다.
- Parameter, Argument

- 이벤트 핸들러에 매개변수를 전달해야 하는 경우도 많습니다.

- 위의 코드는 모두 동일한 역할을 하지만 하나는 화살표 함수를, 다른 하나는 bind를 사용했습니다.

- event라는 매개변수는 리액트의 이벤트 객체를 의미 합니다.

- 두 방법 모두 첫 번째 매개변수는 id이고 두 번째 매개변수로 event가 전달됩니다.

- 첫번째 코드는 명시적으로 event를 매개변수로 넣어 주었고, 두 번째 코드는 id이후 두번째 매개변수로 event가 자동 전달 됩니다.(이 방법은 클래스형에서 사용하는 방법입니다.)

- 함수형 컴포넌트에서 이벤트 핸드러에 매개변수를 전달할 때는 254페이지 코드와 같이 합니다.

9.1 조건부 렌더링이란?

- 여기서 조건이란 우리가 알고 있는 조건문의 조건입니다.

- props로 전달 받은 isLoggedIn 이 true이면 <UserGreeting />을 , false면 <GuestGreeting />을 return 합ㄴ디ㅏ.

- 이와 같은 렌더링을 조건부 렌더링이라고 합니다.

9.2 엘리먼트 변수

렌더링 해야 될 컴포넌트를 변수처럼 사용하는 방법이 엘리먼트 변수입니다.

277페이지 코드처럼 state에 따라 button 변수에 컴포넌트의 객체를 저장하여 reutrn 문에서 사용하고 있습니다.

9.3 인라인 조건

- 필요한 곳에 조건문을 직접 넣어 사용하는 방법입니다.

1. 인라인 if
- if문을 직접 사용하지 않고, 동일한 효과를 내기 위해 && 논리 연산자를 사용합니다.

- &&는 and연자로 모든 조건이 참일땜나 참이 됩니다.

- 첫 번째 조건이 거짓이면 두번째 조건은 판단할 피룡가 없습니다. 단축평가

* 판단만 하지 않는 것이고 결과 값은 그대로 리턴됩니다.(274아래쪽코드)

  2. 인라인 if-else

  - 삼항 연산자를 사용합니다.
 
  - 문자열이나 엘리먼트를 넣어서 사용할 수도 있습니다.

## 5월 1일 강의 내용


[훅의 두가지 규칙]

- 첫 번째 규칙은 무조건 최상위 레벨에서만 호출해야 한다는 것입니다.

- 따라서 반복분이나 조건문 또는 중첩된 함수들 안에서 훅을 호출하면 안됩니다.

- 이 규칙에 따라서 훅은 컴포넌트가 렌더링 될 때마다 같은 순서로 호출되어야 합니다.

- 페이지 230의 코드는 조건에 따라 호출되기 때문에 잘못된 코드입니다.

- 두 번째 규칙은 함수형 컴포넌트에서만 훅을 호출해야 한다는 것입니다.

- 따라서 일반 자바스크립트 함수에서 훅을 호출하면 안 됩니다.

- 훅은 함수형 컴포넌트 훅은 직접 만든 커스텀 훅에서만 호출할 수 있습니다.

7.8 나만의 훅 만들기

- 필요 하다면 직접 훅을 만들어 쓸 수도 있습니다. 이것을 커스텀 훅이라고 합니다.

1. 커스텀 훅을 만들어야 하는 상황

예제 UserStatus 컴포넌트는 isOnline이라는 state에 따라서 사용자의 상태가 온라인인지 아닌지를 텍스트로 보여주는 컴포넌트입니다.

2. 커스텀 훅 추출하기

- use로 시작하는 훅을 만들고, 내부에서 다른 훅을 호출하면 됩니다.

- 아래 코드는 중복된느 로직을 useUserStatus()라는 커스텀 훅으로 추출해낸 것입니다.

- 한가지 주의할 점은 일반 컴포넌트와 마찬가지로 다른 훅을 호출하는 것은 무조건 커스텀 혹의 최상위 레벨에서만 해야 합니다.

- 이름은 use로 시작하도록 합니다. 그렇지 않으면 다른 훅을 불러올 수 없습니다.

- useUserStatus()훅의 목적은 사용자의 온라인/오프라인으로 상태를 구독하는 것입니다.

- 파라메터로 userId를 받아, 사용자의 온라인 상태를 반환하고 있습니다.


8.1 이벤트 처리하기

- DOM에서 클릭 이벤트를 처리하는 예제코드

- REACT에서 클릭 이벤트를 처리하는 예제코드

- 둘의 차이점은
1) 이벤트 이름이 onclick에서 onClick으로 변경.(Camel case)
2) 전달하려는 함수는 문자열에서 함수 그대로 전달.

- 이벤트가 발생했을 때 해당 이벤트를 처리하는 함수를 "이벤트 핸들러(Event Handler)"라고 합니다. 또는 이벤트가 발생하는 것을 계속 듣고 있다는 의미로 "이벤트 리스너(Event Listener)"라고 부르기도 합니다.

- 이벤트 핸들러 추가하는 방법은?

- 버튼을 클릭하면 이벤트 핸들러 함수인 handleClick()홤수를 호출하도록 되어 있습니다.

- bind를 사용하지 않으면 this.handleClick은 글로벌 스코프에서 호출되어, undefined으로 사용할 수 없기 때문입니다.

bind를 사용하지 않으려면 화살표 함수를 사용하는 방법도 있습니다.

- 하지만 클래스 컴포넌트는 이제 거의 사용하지 않기 때문에 이 내용은 참고만 합니다.


## 4월 17일 강의 내용

//node.js설치f

7.1 훅이란 무엇인가?

- 클래스형 컴포넌트에서는 생성자(constructor)에서 state를 정의하고, setState() 함수를 통해 state를 업데이트합니다.

- 예전에 사용하던 함수형 컴포넌트는 별도로 state를 정의하거나, 컴포넌트의 생명주기에 맞춰서 어떤 코드가 실행되도록 할 수 없었습니다.

- 함수형 컴포넌트에서도 state나 생명주기 함수의 기능을 사용하게 해주기 위해 추가된 기능이 바로 훅(Hook) 입니다.

- 함수형 컴포넌트도 훅을 사용하여 클래스형 컴포넌트의 기능을 모두 통일하게 구현할 수 있게 되었습니다.

- Hook이란 'state와 생명주기 기능에 갈고리를 걸어 원하는 시점에 정해진 함수를 실행되도록 만든 함수'를 의미합니다.

- 훅의 이름은 모두 'use'로 시작합니다.

- 사용자 정의 훅(custom hook) 을 만들 수 있으며, 이 경우에 이름은 자유롭게 할 수 있으나 'use'로 시작할 것을 권장합니다.


7.2 useState

- useState는 함수형 컴포넌트에서 state를 사용하기 위한 Hook 입니다.

- 다음 예제는 버튼을 클릭할 때마다 카운트가 증가하는 함수형 컴포넌트 입니다.

- 하지만 증가는 시킬 수 있지만 증가할 때마다 재 렌더링은 일어나지 않습니다.

- 이럴 때 state를 사용해야 하지만 함수형에는 없기 때문에 useState()를 사용합니다.

- useState() 함수의 사용법은 다음과 같습니다.

- 첫번째 항목은 state의 이름 (변수명) 이고,



useEffect

- useState와 함께 가장 많이 사용하는 Hook입니다.

- 이 함수는 사이드 이펙트를 수행하기 위한 것입니다.

- 영어로 side effect는 부작용을 의미합니다. 일반적으로 프로그래밍에서 사이트 이펙트는 '개발자가 의도하지 않은 코드가 실행되면서 버그가 발생하는 것'을 말합니다.

- 하지만 리액트에서는 효과 또는 영향을 뜻하는 effect의 의미에 가깝습니다.

- 예를 들면 서버에서 데이터를 받아오거나 수동으로 DOM을 변경하는 등의 작업을 의미합니다.

- 이 작업을 이펙트라고 부르는 이유는 이 작업들이 다른 컴포넌트에 영향을 미칠 수 있으며, 렌더링 중에는 작업이 완료될 수 없기 때문입니다. 렌더링이 끝난 이후에 실행되어야 하는 작업들입니다.

- 클래스 컴포넌트의 생명주기 함수와 같은 기능을 하나로 통합한 기능을 제공합니다.

* 저자는 useEffect가 side effect가 아니라 effect에 가깝다고 설명하고 있지만, 이것은 부작용의 의미를 잘못 해석해서 생긴 오해이다. 부작용의 부를 (한자)로 생각했기 때문입니다.

* Side effect는 (한자)으로 '원래의 용도 혹은 목적의 효과외에, 부수적으로 다른 효과가 있는 것'을 뜻하는 것입니다.

* 결국 sideEffect는 렌더링 외에 실행해야 하는 부수적인 코드를 말합니다.

* 예를 들면 네트워크 리퀘스트, DOM 수동 조작, 로깅 등은 정리(clean-up) 가 필요 없는 경우들입니다.

- useEffect()함수는 다음과 같이 사용합니다.

- 첫 번째 파라미터는 이펙트 함수가 들어가고, 두 번째 파라미터로는 의존성 배열이 들어갑니다.

useEffect(이펙트 함수, 의존성 배열)

- 의존성 배열은 이펙트가 의존하고 있는 배열로, 배열 안에 있는 변수 중에 하나라도 값이 변경되었을 때 이펙트 함수가 실행됩니다.

- 이펙트 함수는 처음 컴포넌트가 렌더링 된 이후, 그리고 재 렌더링 이후에 실행됩니다.

- 만약 이펙트 함수가 마운트와 언마운트 될 때만 한 번씩 실행되게 하고 싶으면 빈 배열을 넣으면 됩ㄴ디ㅏ. 이 경우 props나 state에 있는 어떤 값에도 의존하지 않기 때문에 여러 번 실행되지 않습니다.

7.4 useMemo

- useMemo() 훅은 Memoizde value를 리턴하는 훅입니다.

- 이전 계산값을 갖고 있기 때문에 연산량이 많은 작업의 반복을 피할 수 있습니다.

- 이 훅은 렌더링이 일어나는 동안 실행됩니다.

- 따라서 렌더링이 일어나는 동안 실행돼서는 안될 작업을 넣으면 안됩니다.

- 예를 들면 useEffect에서 실행되어야 할 사이드 이펙트 같은 것입니다.

- 다음 코드와 같이 의존성 배열을 넣지 않을 경우, 렌더링이 일어날 때마다 매번 함수가 실행됩니다.

- 따라서 의존성 배열을 넣지 않는 것은 의미가 없습니다.

- 만약 빈 배열을 넣게 되면 컴포넌트 마운트 시에만 함수가 실행됩니다.

//const memoizedValue = useMemo(
    () => computeExpensiveValue(a,b)
);

7.5 useCallback

- useCallback() 훅은 useMemo()와 유사한 역할을 합니다.

- 차이점은 값이 아닌 함수를 반환한다는 점입니다.

- 의존성 배열을 파라미터로 받는 것은 useMemo와 동일 합니다.

- 파라미터로 받은 함수를 콜백이라고 부릅니다.

- useMemo와 마찬가지로 의존성 배열 중 하나라도 변경되면 콜백함수를 반환합니다.

//const memoizedCallback = useCallback(
    () => {
        doSomething(의존성 변수1, 의존성 변수2);
    },
    [의존성 변수1, 의존성 변수2]
);

7.6 useRef

- useRef() 훅은 레퍼런스를 사용하기 위한 훅입니다.

- 레퍼런스란 특정 컴포넌트에 접근할 수 있는 객체를 의미합니다.

- useRef() 훅은 바로 이 레퍼런스 객체를 반환합니다.

- 레퍼런스 객체에는 .current라는 속성이 있는데, 이것은 현재 참조하고 있는 엘리먼트를 의미합니다.

//const refContainer = useRef(초깃값);

- 이렇게 반환된 레퍼런스 객체는 컴포넌트의 라이프타임 전체에 걸쳐서 유지됩니다.

- 즉, 컴포넌트가 마운트 해제 전까지는 계속 유지된다는 의미입니다.

7.7 훅의 규칙

- 첫 번째 규칙은 무조건 최사으이 레벨에서만 호출해야 한다는 것입니다. 여기서는 최상위는 컴포넌트의 최상위 레벨을 의미합니다.

- 따라서 반복문이나 조건문 또는 중첩된 함수들 안에서 훅을 호출하면 안됩니다.

- 이 규칙에 따라서 훅은 컴포넌트가 렌더링 될 때마다 같은 순서로 호출되어야 합니다.

- 페이지 224의 코든느 조건에 따라 호출됨으로 잘못된 코드입니다.

- 두번째 규칙은 리액트 함수형 컴포넌트에서만 훅을 호출해야 한다는 것입니다.

- 따라서 일반 자바스크립트 함수에서 훅을 호출하면 안됩니다.

- 훅은 리액트의 함수형 컴포넌트 훅은 직접 만든 커스텀 훅에서만 호출할 수 있습니다.


## 4월 3일 강의 내용

https://github.com/soaple/first-met-react-practice-v18
6장 실습의 코드를 클래스형으로 되어있으니까 function 함수로 바꾸기 집가서

5.1 컴포넌트에 대해 알아보기

- 2장에서 설명한 바와 같이 리액트는 컴포넌트 기반의 구조를 같습니다.

- 컴포넌트 구조라는 것은 작은 컴포넌트가 모여 큰 컴포넌트를 구성하고, 다시 이런 컴포넌트들이 모여서 전체 페이지를 구성한다는 것을 의미합니다.

- 컴포넌트는 재사용이 가능하기 때문에 전체 코드의 양을 줄일 수 있어 개발 시간과 유지 보수 비용도 줄일 수 있습니다.

- 컴포넌트는 자바스크립트 함수처럼 입력과 출력이 있다는 면에서는 유사합니다.

- 다만 입력은 Props가 담당하고, 출력은 리액트 엘리먼트의 형태로 출력됩니다.

- 엘리먼트를 필요한 만큼 만들어 사용한다는 면에서는 객체 지향의 개념과 비슷합니다.


5.2 Props에 대해 알아보기

1. Props의 개념

 - props는 prop(property:속성, 특징)의 준말입니다.

 - 이 props가 바로 컴포넌트의 속성입니다.

 - 컴포넌트에 어떤 속성, props를 넣느냐에 따라서 속성이 다른 엘리먼트가 출력됩니다.

 - props는 컴포넌트에 전달 할 다양한 저옵르 담고 있는 자바스크립트 객체입니다.

 - 에어비앤비의 예도 마찬가지 입니다.

2. Props의 특징

- 읽기 전용입니다. 변경할 수 없다는 의미입니다.

- 속성이 다른 엘리먼트를 생성하려면 새로운 props를 컴포넌트에 전달하면 됩니다.

Pure 함수 vs. Impure 함수

- Pure함수는 인수로 받은 정보가 함수 내부에서도 변하지 않는 함수입니다.

- Impure함수는 인수로 받은 정보가 함수 내부에서 변하는 함수입니다.

- 리액트 공식 문서에는 컴포넌트의 특징을 다음과 같이 설명하고 있습니다.

All React components must act like pure functions with respect to their props.

몯느 리액트 컴포넌트는 그들의 props에 관해서는 Pure함수 같은 역할을 해야 한다.

- 다시 말해 " 모든 리액트 컴포넌트는 props를 직접 바꿀 수 없고, 같은 props에 대해서는 항상 같은 결과를 보여준다. " 는 이야기입니다.

3. Props 사용법

- JSX에서는 key-value쌍으로 props를 구성합니다.

위의 코드는 

1. App 컴포넌트에서 props를 인자로 받아,
2. 내부의 Profile 컴포넌트로 전달해서 name, introduction, viewCount에 각각 속성을 할당하는,
3. 이때 전달되는 props는 다음과 같은 자바스크립트 객체입니다.

- JSX에서는 중괄호를 사용하면 JS코드를 넣을 수 있다고 배웠습니다.

- 다음 코드처럼 props를 통해서 value를 할당 할 수도  있고, 직접 중괄호를 사용하여 할당할 수도 있습니다.

- JSX를 사용하지 않는 경우 props의 전달 방법은 createElement()함수를 사용하는 것입니다.

- createElement()함수의 두번째 매개변수가 바로 props입니다.

- JSX를 사용하지 않으면 다음과 같이 코드를 작성할 수 있습니다.



5.3 컴포넌트 만들기

1. 컴포넌트의 종류

- 리액트 초기 버전을 사용할 때는 클래스형 컴포넌트를 주로 사용했습니다.

- 이후 Hook이라는 개념이 나오면서 최근에는 함수형 컴포넌트를 주로 사용합니다.

- 예전에 작성된 코드나 문서들이 클래스형 컴포넌트를 사용하고 있기 때문에, 

- 클래스형 컴포넌트와 컴포넌트의 생명주기에 관해서도 공부해 두어야 합니다.

2. 함수형 컴포넌트

- Welcome컴포넌트는 props를 받아, 받은 props중 name키의 값을 "안녕,"뒤에 넣어 반환합니다.

3. 클래스형 컴포넌트

- Welcome컴포넌트는 React.Component class로 부터 상속을 받아 선언합니다.

4. 컴포넌트 이름 짓기

- 이름은 항상 대문자로 시작합니다.
- 왜냐하면 리액트는 소문자로 시작하는 컴포넌트를 DOM태그로 인식하기 때문입니다. html tag, 
- 컴포넌트 파일 이름과 같은 컴포넌트 이름은 같게 합니다.

5. 컴포넌트의 렌더링

- 렌더링의 과정은 다음 코드와 같습니다.

<!-- function Welcome(props) {
    return <h1>안녕, {props.name}</h1>;
}

const element = <WWelcome name="인제" />;
ReactDOM.render(
    element,
    document.getElementById('root')
); -->

5.4 컴포넌트 합성

- 컴포넌트 합성은 여러 개의 컴포넌트를 합쳐서 하나의 컴포넌트를 만드는 것입니다.

- 리액트에서는 컴포넌트 안에 또 다른 컴포넌트를 사용할 수 있기 때문에, 복잡한 화면을 여러 개의 컴포넌트로 나누어 구현할 수 있습니다.

- 다음 코드에서는 props의 값을 다르게 해서 Welcome 컴포넌틀르 여러 번 사용합니다.

<!-- function Welcome(props) {
    return <h1>Hello, {props.name}</h1>;
}

function App(props) {
    return ( 
        <div>
            <Welcomd name="Mike" />
            <Welcomd name="Steve" />
            <Welcomd name="Jane" />
        </div>
    )
}

ReactDOM.render(
    <App />,
    document.getElementById('root')
); -->


5.5 컴포넌트 추출

- 복잡한 컴포넌트를 쪼개서 여러 개의 컴포넌트로 나눌 수도 있습니다.

- 큰 컴포넌트에서 일부를 추출해서 새로운 컴포넌트를 만드는 것입니다.

- 실무에서는 처음부터 1개의 컴포넌트에 하나의 기능만 사용하도록 설계하는 것이 좋습니다.

- Comment는 댓글 표시 컴포넌트입니다.

- 내부에는 이미지, 이름, 댓글과 작성일이 포함되어 있습니다.

- 첫 번째로 이미지 부분을 Avatar 컴포넌트로 추출해보겠습니다.

- 두 번째로 사용자 정보 부분을 추출합니다.

- 컴포넌트 이름은 UserInfo로 합니다. React 컴포넌트 이름은 Camel notatio을 사용합니다.

- UserInfo 안에 Avatar 컴포넌트를 넣어서 완성시킵니다.

<!-- function UserInfo(props) {
    return (
        <div className="user-info">
            <Avatar user={props.user} />
            <div className="user-info-name">
                {props.user.name}
            </div>
        </div>    
    );
} -->

- 추출 후 다시 결합한 UserInfo를 Comment 컴포넌트 반영하면 다음과 같은 모습이 됩니다.

- 처음에 비해서 가독성이 높아진 것을 확인할 수 있습니다.

<!-- function Comment(props) {
    return (
        <div className="comment">
            <UserInfo user={props.author} />
            <div className="comment=text">
                {props.text}
            </div>
            <div className="comment-date">
                {formatDate(props.date)}
            </div>
        </div>
    );
} -->

5.6 (실습) 댓글 컴포넌트 만들기

- 프로젝튿 디렉토리에서 /src/chapter_05

Chapter6. state와 생명주기

6.1 state
1. state란?

- State는 리액트 컴포넌트의 상태를 의미합니다.

- 상태의 의미는 정상인지 비정상인지가 아니라 컴포넌트의 데이터를 의미합니다.

- 정확히는 컴포넌트의 변경가능한 데이터를 의미합니다.

- State가 변하면 다시 렌더링이 되기 때문에 렌더링과 관련된 값만 state에 포함시켜야 합니다.

2. state의 특징

- 리액트 만의 특별한 형태가 아닌 ㄷ나지 자바스크립트 객체일 뿐입니다.

- 예의 LikeButton은 class 컴포넌트입니다.

- constructor는 생성자이고 그 안에 있는 

- this.state가 현 컴포넌트의 state입니다.

- 함수형에서는 useState()라는 함수 사용합니다.

- state는 변경은 가능하다고 했지만 직접 수정해서는 안됩니다.

- 불가능하다고 생각하는 것이 좋습니다.

- state를 변경하고자 할 때는 setstate()함수를 사용합니다.

//state를 직접 수정(잘못된 사용법)
this.stae = {
    name: 'Inje'
};

// setState 함수를 통한 수정 (정상적인 사용법)
this. setState({
    name: 'Inje'
});


[component vs. element vs. instance]
교재에는 나와 있지 않지만 여기서 component, element, instance의 의미에 대해 확인해 보도록 하겠습니다.

element : 재료 
component : 빵 틀 
instance : 재료를 빵 틀에 넣고 만든 빵

6.2 생명주기에 대해 알아보기

- 생명주기는 컴포넌트의 생성 시점, 사용 시점, 종료 시점을 나타내는 것입니다.

- constructor 가 실행 되면서 컴포넌트가 생성됩니다

- 생성 직후 componentDidMount()함수가 호출됩니다.

- 컴포넌트가 소멸하기 전까지 여러번 렌더링 합니다.

- 렌더링은 props, setState(), forceUpdate()에 의해 상태가 변경되면 이루어집니다.

- 그리고 렌더링이 끝나면 componentDinUpdate() 함수가 호출됩니다.

- 마지막으로 컴포넌트가 언마운트 되면 compomentWillUnmount() 함수가 호출됩니다.

## 3월 27일 강의 내용

4.1 엘리먼트에 대해 알아보기

    1. 엘리먼트의 정의

   - 엘리먼트는 리액트 앱을 구성하는 요소를 의미합니다.

   - 공식페이지에는 "엘리먼트는 리액트 앱의 가장 작은 빌딩 블록들"이라고 설명하고 있습니다.

   - 웹사이트의 경우는 DOM 엘리먼트이며 HTML요소를 의미합니다.

    그렇다면 리액트 엘리먼트와 DOM엘리먼트는 어떤 차이가 있을까요?

   - 리액트 엘리먼트는 Virtual DOM의 형태를 취하고 있습니다.

   - DOM 엘리먼트는 페이지의 모든 정보를 갖고 있어 무겁습ㄴ디ㅏ.

   - 반면 리액트 엘리먼트는 변화한 부분만 갖고 있어 가볍습니다.

    2.엘리먼트의 생김새
    
   - 리액트 엘리먼트는 자바스크립트 객체의 형태로 존재합니다.

   - 컴포넌트(Button 등), 속성(color 등) 및 내부의 몯느 children을 포함하는 일반 JS객체입니다.

   - 이 객체는 마음대로 변경할 숭 없는 불변성을 갖고 있습니다.

    3. 엘리먼트의 특징

   - 리액트 엘리먼트의 가장 큰 특징은 불변성입니다.

   - 즉, 한 번 생성된 엘리먼트의 children이나 속성 (attributes)ㅇ르 바꿀 수 없습니다.

    만일 내용이 바뀌면 어떻게 해야 할까요?

   - 이 때는 컴포넌트를 통해 새로운 엘리먼트를 생성하면 됩니다.

   - 그 다음 이전 엘리먼트와 교체를 하는 방법으로 내용르 바꾸는 것입니다.

   - 이렇게 교체하는 작업을 하기위해 Virtual DOM 을 사용합니다.

4.2 엘리먼트 렌더링하기

Root DOM node

다음 html 코드는 id값이 root인 div태그로 단순하지만 리액트에 필수로 들어가는 아주 중요한 코드입니다.

이 div태그 안에 리액트 엘리먼트가 렌더링 되며, 이 것을 Root DOM node라고 합니다.

엘리먼트를 렌더링하기 위해서는 다음과 같은 코드가 필요합니다.

이때 render()함수를 사용하게 되니다.

이 함수의 첫 번째 파라메터 출력할 리액트 엘리먼트이고, 두 번째 파라메터는 출력할 타겟을 나타냅니다.

즉 리액트 렌터링의 과정은 Virtual DOM 에서 실제 DOM 으로 이동하는 과정이라고 할 수 있습니다.

4.3 렌더링된 엘리먼트 업데이트하기
- 다음 코든느 tick() 함수를 정의하고 있습니다.

- 이 함수는 현재 시간을 포함한 element를 생성해서 root div에 렌더링해 줍니다.

- 그런데 라인12에 보면 setInterval()함수를 이용해서 위에서 정의한 tick()를 1초에 한번씩 호출하고 있습니다.

- 결국 1초에 한번씩 element를 새로 만들고 그것을 교체하는 것입니다.

- 다음 코드를 실행하고, 크롬 개발자도구에서 확인해 보면 시간 부분만 업데이트 되는 것을 확인할 수 있습니다.
    





3.2 JSX의 역할
    JSX는 내부적으로 XML/HTML 코들르 자바스크립트로 변환합니다.
    React가 createElement함수를 사용하여 자동으로 자바스크립트로 변환해 줍니다.
    만일 JS작업할 경우 직접 createElement함수를 사용해야 합니다.
    앞으로 설명하는 코드를 보면 알 수 있지만 결국 jsx는 가독성을 높여 주는 역할을 합니다.

3.3 JSX의 장점
    코드가 간결해 집니다.
    가독성이 향상 됩니다.
    Injection Attack이라 불리는 해킹 방법을 방어함으로써 보안에 강합니다.

3.4 JSX 사용법

    모든 자바스크립트 문법을 지원합니다.
    자바스크립트 문법에 XML과 HTML을 섞어서 사용합ㄴ디ㅏ.
    아래 코드의 2번 라인처럼 섞어서 사용하는 것입니다.
    만일 html이나 xml에서 자바스크립트 코드를 사용하고 싶으면 {} 괄호를 사용합니다.

    만일 태그의 속성값을 넣고 싶을 때는 다음과 같이 합니다.
        큰따옴표 사이에 문자열을 넣거나

        중괄호 사이에 자바스크립트 코드를 넣으면 됨!

3.5 
    create-react-app으로 만든 프로젝트를 VSCode로 엽니다.
    src 디렉토리에 'chaper_03'이라는 디렉토리를 생성합니다.
    생성한 디렉토리에 Book.jsx라는 파일을 생성합니다.
    이 파일에 다음과 같이 코딩합니다.
    

## 3월 20일 강의 내용
1.2 리액트의 장점
    
1. 빠른 업데이트와 렌더링 속도
    
    이 것을 가능하게 하는것이 바로 Virtual DOM 입니다.

    DOM(Document Object Model)이란 XML, HTML 문서의 각 항목을 계층으로 표현하여 생성, 변형, 삭제할 수 있도록 돕는 인터페이스입니다. 이 것은 W3C의 표준입니다.

    Virtual DOM 은 DOM 조작이 비효율적인 이유로 속도가 느리기 때문에 고안된 방법입니다.

    DOM은 동기식, Virtual DOM은 비동기식 방법으로 렌더링을 합니다.

2. 컴포넌트 기반 구조

    리액트의 모든 페이지는 컴포넌트로 구성됩니다.
    
    하나의 컴포넌트는 다른 여러 개의 컴포넌트의 조합으로 구성할 수 있습니다.

    그래서 리액트로 개발을 하다 보면 레고 블록을 조립하는 것처럼 컴포넌트를 조합해서 웹사이트를 개발하게 됩니다.

    아래 그림은 에어비앤비 사이트 화면의 컴포넌트 구조입니다. 재사용성이 뛰어납니다.

3. 재사용성

    반복적인 작업을 줄여주기 때문에 생산성을 높여 줍니다.

    또한 유지보수가 용이합니다.

    재사용이 가능 하려면 해당 모듈의 의존성이 없어야 합니다.

4. 든든한 지원군

    메타(구 페이스북)에서 오픈소스 프로젝트로 관리하고 있어 계속 발전하고 있습니다.

5. 활발한 지식 공유 & 커뮤니티

6. 모바일 앱 개발 가능

    리액트 네이티브라는 모바일 환경 UI 프레임워크를 사용하면 크로스 플랫폼 (cross-platform) 모바일 앱을 개발할 수 있습니다.


1.3 리액트의 단점

1. 방대한 학습량

자바스크립트를 공부한 경우 빠르게 학습할 수 있습니다.

2. 높은 상태 관리 복잡도

state, component life cycle 등의 개념이 있지만 그리 어렵지 않습니다.

## 3월13일 강의 내용
### GitHub 사용법
