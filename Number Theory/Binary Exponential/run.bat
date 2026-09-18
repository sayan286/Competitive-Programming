@echo off
g++ "%~1" -o main.exe
main.exe < input.txt > output.txt