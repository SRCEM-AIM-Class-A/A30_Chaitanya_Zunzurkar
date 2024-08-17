// Create a Business Name Generator 

/*  
    Adjectives :- 
    1. Crazy
    2. Amazing
    3. Fire

    Shop Name :-
    1. Engine
    2. Foods
    3. Garments

    Another Words :- 
    1. Brows
    2. Limited
    3. Hub
*/

let Adjectives = {
    Adj1 : "Crazy",
    Adj2 : "Amazing",
    Adj3 : "Fire",
};

let ShopName = {
    ShopName1 : "Engine",
    ShopName2 : "Foods",
    ShopName3 : "Garments",
};

let AnothreName = {
    AnothreName1 : "Brows",
    AnothreName2 : "Amazing",
    AnothreName3 : "Fire",
};

let rand1 = ((Math.random() * 3) + 1);
let rand2 = ((Math.random() * 3) + 1);
let rand3 = ((Math.random() * 3) + 1);

console.log(Adjectives[rand1] + "" +  ShopName[rand2] + "" +  AnothreName[rand3]);