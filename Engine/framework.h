﻿// header.h: 표준 시스템 포함 파일
// 또는 프로젝트 특정 포함 파일이 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용을 Windows 헤더에서 제외합니다.

// Windows 헤더 파일
#include <windows.h>

// C 런타임 헤더 파일입니다.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>


// 정적 라이브러리 vs 동적 라이브러리
// 정적 라이브러리
// 장점 : 시스템 환경이 변해도 애플리케이션에 영향이 없다
// 컴파일 시에 필요한 라이브러리에 적재하기 때문에 이식성이 좋다
// 런타임 시 외부를 참조할 필요가 없으므로 속도가 빠르다
// 단점
// 같은 코드를 가진 프로그램이 실행할 경우가 있다면 코드가 중복될 수 있다
// >> =메모리 낭비
// 라이브러리가 변경되면 변경된 라이브러리만 재배포가 아니라 다시 빌드해야한다



// 동적 라이브러리
// 장점 : 메모리 절약, 보다 쉽게 업그레이드 해서 배포가능
// 서로 다른 프로그램에서 동일한 함수 호출 가능

// 프로그램 변경 시, 라이브러리만 재배포하면 되니까 유지보수 쉬움

// 단점
// 외부 의존도가 높아서 이식성이 낮다
// 공유 라이브러리를 메모리 올려놓고 해당 라이브러리를 찾아서 
// 접근해야 하므로 속도가 느리다.