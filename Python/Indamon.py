class Pet:
    # Constructor
    def __init__(self, name, hp, attack, defence, fainted):
        self._self = self
        self._name = name
        self._hp = hp
        self._attack = attack
        self._defence = defence
        self._fainted = fainted

    # No getters and setters since it seemes to be the python way.
     

    # Print info

    def printInfo(Pet):
        print("INFO")
        print("Name: ", Pet._name)
        print("Hp: ", Pet._hp)
        print("Attack: ", Pet._attack)
        print("Defence: ", Pet._defence)
        print("Fainted: ", Pet._fainted)

    def attack(self, defender):
        damage = self._attack/defender._defence
        print(damage, "damage has been dealt")
        print(defender._name, "have", (defender._hp - damage), "hp left")




