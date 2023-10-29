class Indamon {
    #name;
    #hp;
    #attack;
    #defense;
    #fainted;

    get name() {
        return this.#name;}
    set name(newName) {
        this.#name = newName;}

    get hp() {
        return this.#hp;}
    set hp(newHp) {
        this.#hp = newHp;}
    
    get attack() {
        return this.#attack;}
    set attack(newAttack) {
        this.#attack = newAttack}

    get defense() {
        return this.#defense;}
    set defense(newDfense) {
        this.#defense = newDfense;}
    
    get fainted() {
        return this.#fainted;}
    set fainted(newFainted) {
        this.#fainted = newFainted;}

        
    constructor(name, hp, attack, defense, fainted) {
        this.name = name;
        this.hp = hp;
        this. attack = attack;
        this.defense = defense;
        this.fainted = fainted;
    }

    printInfo() {
        console.log("INFO")
        console.log("Indamon: ", this.name);
        console.log("Hp: ", this.hp);
        console.log("Attacl: ", this.attack);
        console.log("Defense: ", this.defense);
        console.log("Fainted: ", this.fainted);
    }
}

export default Indamon;