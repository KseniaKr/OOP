REM запуск программы без параметров
task.exe
IF NOT ERRORLEVEL 1 GOTO errэ

REM запуск программы с одним нечисловым параметром
task.exe notANumber
IF NOT ERRORLEVEL 1 GOTO err

REM запуск программы с одним числовым параметром (и проверяем результат)
task.exe input-test.txt 123456789 > output.txt
IF ERRORLEVEL 1 GOTO err
FC /B output.txt output1.txt
IF ERRORLEVEL 1 GOTO err

ECHO Program testing succeeded :-)
EXIT

:err
ECHO Program testing failed :-(
EXIT