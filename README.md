FQL
===


It would be cool if instead of SQL I could do like this:

/*

A record is a vector composed of varying datatypes/domains.\n
R = integer ⊗ varchar(200) ⊗ date
R = (i,v,d)
R= (1, "Hello world!", 20131012)

R1=(1, "Hello world!", 19771012)
R2=(2, "Farewell, cruel world!", 20891012)

Records are elements. A group of records are a set:
A= {R1,R2}

A = {x | x.i=1 or x.v="Hello world!"}

{} empty set -- U+2205
NULL
A intersect B  -- ∩ U+2229
A union B     --  U+222A
x in A  -- U+2208
A cross B  -- U+2297
A left normal factor semidirect product B --  U+22C9
A right normal factor semidirect product B -- U+22CA

B minus A -- U+2216
A subset B -- U+2282

☢
*/



See:
http://en.wikibooks.org/wiki/Set_Theory/Sets
http://www.w3.org/TR/xml-entity-names/isoamsb.html
