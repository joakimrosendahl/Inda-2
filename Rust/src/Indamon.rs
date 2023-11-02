struct Indamon {
    name: String,
    hp: i32,
    attack: i32,
    defense: i32,
    fainted: bool,
}

impl Indamon {
    fn getName(&self) -> String {
        self.name
    }
    fn setName(&mut self, newName: String) {
        self.name = newName
    }
    fn getHp(&self) -> i32 {
        self.hp
    }
    fn setHp(&mut self, newHp: i32) {
        self.hp = newHp
    }
    fn getAttack(&self) -> i32 {
        self.attack
    }
    fn setAttack(&mut self, newAttack: i32) {
        self.attack = newAttack
    }
    fn getDefense(&self) -> i32 {
        self.defense
    }
    fn setDefense(&mut self, newDefense: i32) {
        self.defense = newDefense
    }
    fn getFainted(&self) -> bool {
        self.fainted
    }
    fn setFainted(&mut self, newFainted: bool) {
        self.fainted = newFainted
    }


    fn new(name: String, hp: i32, attack: i32, defense: i32, fainted: bool) -> Indamon {
        Indamon {name, hp, attack, defense, fainted}
    }

    
}