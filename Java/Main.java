import Indamon.Indamon;

class Main {
public static void main(String[] args) {
    // create a new Indamon object
    Indamon pika = new Indamon("Pika", 10, 5, 5, false);
    Indamon bulba = new Indamon("Bulba", 10, 4, 4, false);
    bulba.printInfo();
    System.out.println("Pika attacks Bulba and deals: " + pika.attack(bulba) + " damage.");
    bulba.printInfo();
    } // end main method

}