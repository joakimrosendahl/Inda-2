package Indamon;


public class Indamon {
      // Feilds
    private String name;
    private int hp;
    private int attack;
    private int defense;
    private boolean fainted;

    public String getName() {
        return this.name;} 
    public void setName(String newName) {
        name = newName;}

    public int getHp() {
        return this.hp;}
    public void setHp(int newHp) {
        hp = newHp;}

    public int getAttack() {
        return attack;}
    public void setAttack(int newAttack) {
        attack = newAttack;}

    public int getDefense() {
        return defense;}
    public void setDefense(int newDefense) {
        defense = newDefense;}
    
    public boolean getFainted() {
        return fainted;}
    public void setFainted(boolean newFainted) {
        fainted = newFainted;}

    
    public Indamon(String name, int hp, int attack, int defense, boolean fainted) {
        this.setName(name);
        this.setHp(hp);
        this.setAttack(attack);
        this.setDefense(defense);
        this.setFainted(fainted);
    }

    public void printInfo() {
        System.out.println("Name: " + this.getName());
        System.out.println("HP: " + this.getHp());
        System.out.println("Attack value: " + this.getAttack());
        System.out.println("Defense value: " + this.getDefense());
        }
    
    public int attack(Indamon defender) {
        defender.setHp(hp - this.getAttack() / defender.getDefense());
        return this.getAttack() / defender.getDefense();
    }
}

  


    
    
