class Pet:
    def __init__(self, name, hp, attack, defence, fainted):
        self._name = name
        self._hp = hp
        self._attack = attack
        self._defence = defence
        self._fainted = fainted

    # No getters and setters since it seemes to be the python way.

Pet("Pika", 5, 1, 1, False)
