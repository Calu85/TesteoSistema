@ECHO OFF
rmdir /S /Q Documentation 
DEL Output*

ECHO Pasando uncrustify
uncrustify -c uncrustify.cfg -f plantillaCSourceFile.c -o outputPlantillaCSourceFile.c
WinMergeU /x plantillaCSourceFile.c outputPlantillaCSourceFile.c

ECHO Compilando documentación con doxygen
doxygen voltuPlantillaDoxygen.doxy

DEL output*
ECHO Comprobando CPPCheck
cppcheck --enable=all .

start "" "Documentation\html\index.html"
@pause
