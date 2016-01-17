REM запуск программы без параметров
task.exe
IF NOT ERRORLEVEL 1 GOTO err

REM запуск программы с одним нечисловым параметром
task.exe notANumber
IF NOT ERRORLEVEL 1 GOTO err

REM запуск программы с тремя числовыми параметрами
task.exe 6 > output.txt
IF ERRORLEVEL 1 GOTO err
FC /B output.txt 6.txt
IF ERRORLEVEL 1 GOTO err

ECHO Program testing succeeded :-)
EXIT

:err
ECHO Program testing failed :-(
EXIT