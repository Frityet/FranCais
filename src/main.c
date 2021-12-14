#include <stdio.h>
#include "frenCh.h"

fonction(statique en_ligne vide fizzé_et_buzzé, entier maximum) commence
    pour (variable i égal 0 fait i plus_petit maximum fait augmente i) commence
        si (i modulo 15 est 0)
            imprime("Fizzé et Buzzé") fait
        sinon si (i modulo 5 est 0)
            imprime("Fizzé") fait
        sinon si (i modulo 3 est 0)
            imprime("Buzzé") fait
        sinon
            imprimef("%d\n", i) fait
    fin
fin

la_entier_principal_de_programme commence
    fizzé_et_buzzé(100) fait
fin


