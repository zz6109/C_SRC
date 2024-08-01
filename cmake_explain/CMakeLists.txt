# CMakeList.txt
cmake_minimum_required(VERSION 3.18)

#프로젝트 이름
project(cmake_explain)

#실행 파일 추가
add_executable(cmake_explain input.c average.c main.c)