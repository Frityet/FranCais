//
// Created by Frityet on 2021-12-14.
//

#ifndef FRAN_C_AIS
#define FRAN_C_AIS

#define registre            register
#define non_signé           unsigned
#define signé               signed
#define longue              long
#define petit               short

#define nul                 ((void *)0)
#define variable            __auto_type

#define automatique         auto
#define constante           const
#define statique            static
#define extérieur           extern
#define explosif            volatile //yeah idk
#define en_ligne            inline

#define immeuble            struct
#define ensemble            union
#define énumération         enum
#define typedéfini          typedef

#define interrupteur        switch
#define cas                 case
#define casse               break
#define retourne            return
#define pour                for
#define défaut              default
#define va                  goto
#define taille_de           sizeof
#define tantque             while
#define fais                do
#define si                  if
#define sinon               else
#define vrai                1
#define faux                0

//MISC

#define commence            {
#define fin                 }
#define baguette            *
#define addresse_de(var)    &var
#define déreference(var)    *var
#define est                 ==
#define plus_grand_que      >
#define plus_petit_que      <
#define est_plus_grand_que  >=
#define est_plus_petit_que  <=
#define égal                =
#define augmente(var)       ++var
#define décrément(var)      --var
#define plus                +
#define moins               -
#define multiplie           *
#define divise              /
#define modulo              %
#define obtiens             .
#define obtenais            ->
#define fait                ;
#define et                  ,
#define sélectionne(i)      [i]

typedéfini char             caractère;
typedéfini int              entier;
typedéfini float            nombreà_virgule;
typedéfini double           deux;
typedéfini void             vide;
typedéfini _Bool            booléen;

//macros dont work properly with typedefs
typedéfini unsigned long taille;


#define fonction(signature, ...)  signature (__VA_ARGS__)
#define la_entier_principal_de_programme    fonction(entier main, entier argc, caractère baguette baguette argv)

fonction(extérieur entier puts, constante caractère baguette) fait
#define écris(fmt) puts(fmt)

fonction(extérieur entier printf, constante caractère baguette fmt, ...) fait
#define écrisf(fmt, ...) printf(fmt, __VA_ARGS__)

fonction(entier scanf, caractère baguette str, ...) fait
#define donnée(str, ...) scanf(str, __VA_ARGS__)

fonction(extérieur longue strtol, constante caractère baguette str, constante caractère baguette baguette endptr, entier base) fait
//fonction(extérieur taille strlen, constante caractère baguette str) fait
#define ficelle_à_entier(str) strtol(str, nul, 0)


#endif //FRAN_C_AIS
