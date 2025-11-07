# cpp_containers_test

- cpp_containers 프로젝트를 위한 테스트 리소스
- 기본 원리: namespace를 std/ft로 설정하여 출력 결과의 일치 여부를 리눅스 명령어 diff를 이용해 동일하게 동작하는지 확인
- test는 크게 stress, unit 두 가지로 나뉨
    - stress: 부하 테스트, ecole42 제공
    - unit: 출력 결과 테스트, 직접 작성
    
## How to Use

1. Makefile의 `CONTAINERS_PATH` 변수 값 설정
2. `/test` 디렉토리 내 테스트하길 희망하는 모듈의 테스트 파일의 'TODO: include your implemented header file'을 완성
2. `/script` 디렉토리 내 쉘 스크립트 파일 실행

## 특이사항

- std::enable_if는 C++11부터 존재하므로 utils unit test를 std namespace로 빌드하는 경우에만 C++11로 컴파일