
cd .

if "%1"=="" ("C:\PROGRA~1\MATLAB\R2021a\bin\win64\gmake"  -j3  -f final_project.mk all) else ("C:\PROGRA~1\MATLAB\R2021a\bin\win64\gmake"  -j3  -f final_project.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1