/** @brief Breve descripción del archivo

    @file plantillaCSourceFile.c
    @author Autor1
    @author Autor2
    @copyright Reisende ...

Este archivo sirve a varios propósitos.

Es una muestra de código escrito siguiendo el estandar interno.

Al pasar este archivo por una herramienta de chequeo de estilo, no deberíamos obtener errores. De esta
manera, el archivo sirve para comprobobar que la herramienta en cuestión esté bien configurada y no arroje
falsos positivos. Por ejemplo, al pasar uncrustify el archivo generado debería ser idéntico a ese si lo
comparamos con un comparador de archivos de texto.

Al pasar este archivo por una herramienta de análisis estático, no deberíamos obtener ningún error o warning.

Al compilar este archivo con doxygen no debería haber errores ni advertencias. Sirve de ejemplo de cómo
documentar cada entidad del código y de cómo hacer títulos, subtítulos y otros formatos.
*/

#include "plantillaHeaderFile.h"

#define ESTO_ES_UN_DEFINE_SENCILLO //!< Breve comentario, si el define es muy sencillo

/** Resumen del define, si es más complicado

Cuerpo del comentario del define. Por ejemplo, se puede explicar de dónde sale el
valor numérico. ¡Hasta se puede poner una fórmula en latex!
*/
#define ESTO_ES_UN_DEFINE_COMPLICADO

/** Documentaciòn de enum de estado
*/
typedef enum {
    sNone,
    sStandBy,
} state_t;

/** Brief de la función que hace algo

Cuerpo del comentario de la función que hace algo.

Dejando un espacio en blanco se muestra como un párrafo aparte en la vista HTML.
*/
uint8_t FuncionQueHaceAlgo(uint8_t arg1, uint8_t arg2) {
    while (arg1) {}
}

/** Segunda función.

Cuerpo del comentario.
*/
void Funcion2(uint8_t arg1, uint8_t arg2) {
    FuncionQueHaceAlgo(arg1, arg2);
}

void main() {
    Funcion2(1, 2)
}
