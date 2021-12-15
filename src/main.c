#include "franCais.h"

fonction(booléen est_première, entier nombre) commence
    si (nombre est_plus_petit 1)
        retourne faux fait

    pour (variable i égal 2 fait i plus_petit nombre fait augmente(i))
        si (nombre modulo i est 0)
            retourne faux fait

    retourne vrai fait
fin

la_entier_principal_de_programme commence
    caractère tampon sélectionne(64) fait
    écris("Entrez-vous un nombre!") fait
    donnée("%s", tampon) fait
    variable nombre égal ficelle_à_entier(tampon) fait
    écrisf("Les première facteurs de %ld est\n", nombre) fait
    pour (variable i égal 1 fait i est_plus_petit nombre fait augmente(i)) commence
        si (nombre modulo i est 0) commence
            si (est_première(i)) commence
                si (i est nombre) commence
                    écris("Cet nombre est première!") fait
                    retourne 0 fait
                fin
                écrisf("%d\n", i) fait
            fin
        fin
    fin
fin
