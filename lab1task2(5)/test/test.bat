REM ������ ��������� ��� ����������
task.exe
IF NOT ERRORLEVEL 1 GOTO err

REM ������ ��������� � ����� ���������� ����������
task.exe notANumber
IF NOT ERRORLEVEL 1 GOTO err

REM ������ ��������� � ����� ��������� �����������
task.exe 6 > output.txt
IF ERRORLEVEL 1 GOTO err
FC /B output.txt 6.txt
IF ERRORLEVEL 1 GOTO err

ECHO Program testing succeeded :-)
EXIT

:err
ECHO Program testing failed :-(
EXIT