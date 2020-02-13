printf "Pasando uncrustify \n"
uncrustify -c uncrustify.cfg -f plantillaCSourceFile.c -o outputPlantillaC.c
printf "Abriendo comparación de salida de uncrustify \n"
meld plantillaCSourceFile.c outputPlantillaC.c &
printf "Pasando cppcheck \n"
cppcheck --enable=all --inconclusive --std=posix -q -v plantillaCSourceFile.c
printf "Pasando cpplint \n"
cpplint --verbose=3 --linelength 120 --recursive plantillaCSourceFile.c
printf "Pasando doxygen \n"
doxygen voltuPlantillaDoxygen.Doxy 

