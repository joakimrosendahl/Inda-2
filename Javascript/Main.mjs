import Indamon from "./Indamon.mjs";


    
let pika = new Indamon("Pika", 10, 5, 5, false);
let bulba = new Indamon("Bulba", 10, 5, 5, false);
bulba.printInfo();
pika.performAttack(bulba);
bulba.printInfo();