//
// Created by Frityet on 2021-12-14.
//

#ifndef FREN_C_H
#define FREN_C_H

#define registre        register
#define non_signé       unsigned
#define signé           signed
#define longue          long
#define petit           short
#define nul             NULL //might be an issue
#define variable        __auto_type

#define automatique     auto
#define constante       const
#define statique        static
#define extérieur       extern
#define explosif        volatile //yeah idk`
#define en_ligne        inline

#define immeuble        struct
#define ensemble        union
#define énumération     enum
#define typedéfini      typedef

#define interrupteur    switch
#define cas             case
#define casse           break
#define retourne        return
#define pour            for
#define défaut          default
#define va              goto
#define taille_de       sizeof
#define tantque         while
#define fais            do
#define si              if
#define sinon           else


typedéfini char         caractère;
typedéfini int          entier;
typedéfini float        nombreà_virgule;
typedéfini double       deux;
typedéfini void         vide;

//MISC

#define commence        {
#define fin             }
#define baguette        *
#define est             ==
#define plus_grand      >
#define plus_petit      <
#define égal            =
#define augmente        ++
#define décrément       --
#define plus            +
#define moins           -
#define multiplie       *
#define divise          /
#define modulo          %
#define obtiens         .
#define obtenais        ->
#define fait            ;
#define et              ,
#define sélectionne(i)  [i]

#define fonction(signature, ...)  signature (__VA_ARGS__)
#define la_entier_principal_de_programme    fonction(entier main, entier argc, caractère baguette baguette argv)

#define imprime(fmt) puts(fmt)
#define imprimef(fmt, ...) printf(fmt, __VA_ARGS__)

#endif //FREN_C_H
