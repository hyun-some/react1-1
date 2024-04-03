# react1-1



# 정현철 202030328

## 4월 3일 강의 내용

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

s## 3월 27일 강의 내용

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