import Indamon.Indamon;

class Main {
public static void main(String[] args) {
    // create a new Indamon object
    Indamon pika = new Indamon("Pika", 10, 5, 5, false);

  

    // pika.get the information of the assigned values
    System.out.println("Name: " + pika.getName());
    System.out.println("HP: " + pika.getHp());
    System.out.println("Attack value: " + pika.getAttack());
    System.out.println("Defense value: " + pika.getDefense());
  } // end main method

}