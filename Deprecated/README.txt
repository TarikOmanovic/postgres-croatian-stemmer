README

Opis priloženih dokumenata:

ruleset
	sadrži formatirani ispis pojedinih sufiksa (crostemmer koristi ovaj dokument)

ruleset.txt
	sadrži c/p pravila iz rada od Ljubešić, Boras i Kubelka
	na dnu (u "komentaru") je primjer rada algoritma izvedenog iz njihovog rada
	algoritam nije isti jer njihov opisan algoritam služi za vrednovanje pravila stemmera, a ne kao uporabni stemmer

ruleset
	čisti c/p pravila iz rada od Ljubešić, Boras i Kubelka (input za ruleset.c)

ruleset.c	
	program koji od gornjeg dijela ruleset.txt-a daje formatirani ruleset

rulesetSorted
	potpuno sortirana pravila (input za crostemmer.c)

crostemmer.c
	implementacija algoritma (još ne radi kako treba)



Komentar na napredak:

Što se tiče algoritma, stvari su se malo zakomplicirale jer nisam mogao doslovno primjeniti algoritam iz onih radova, a dosta sam vremena potrošio na to. Trenutno sam na dobrom putu, imam algoritam za koji mislim da će (iako je vrlo jednostavan) biti sasvim dobar. Trenutno sama implementacija ne radi kako treba, ali to ću brzo riješiti. Onda mi po tom pitanju ostaje testiranje i optimizacija.

Što se tiče implementacije stemmera u postgresql, mislim da sam shvatio što je bio problem. Uglavnom, napredujem i na tom polju, samo malo sporije. Još uvijek nisam našao mjesto gdje bi pg-u osvjestio postojanje novog plugina, ali radim na tome.

LP
Tarik Omanović
