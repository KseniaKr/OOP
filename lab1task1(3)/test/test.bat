REM ������ ��������� ��� ����������
task.exe
IF NOT ERRORLEVEL 1 GOTO err�

REM ������ ��������� � ����� ���������� ����������
task.exe notANumber
IF NOT ERRORLEVEL 1 GOTO err

REM ������ ��������� � ����� �������� ���������� (� ��������� ���������)
task.exe input-test.txt 123456789 > output.txt
IF ERRORLEVEL 1 GOTO err
FC /B output.txt output1.txt
IF ERRORLEVEL 1 GOTO err

ECHO Program testing succeeded :-)
EXIT

:err
ECHO Program testing failed :-(
EXIT