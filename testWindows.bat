@ECHO OFF
rmdir /S /Q Documentation 

ECHO Pasando uncrustify
uncrustify -c uncrustify.cfg -f plantillaCSourceFile.c -o outputPlantillaCSourceFile.c
WinMergeU /x plantillaCSourceFile.c outputPlantillaCSourceFile.c

ECHO Compilando documentación con doxygen
doxygen voltuPlantillaDoxygen.doxy

DEL output*
ECHO Comprobando CPPCheck
cppcheck --enable=all .

start "" "Documentation\html\plantilla_c_source_file_8c.html"
@pause
