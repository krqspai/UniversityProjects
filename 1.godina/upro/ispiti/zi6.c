int playRollTheDice (int noOfDiceSides, int diceStartNumber, int noOfRolls){
    int a=0, b=0;
    for (int i=0; i<noOfRolls; i++){
        a = a + (rand() % noOfDiceSides + 1) * diceStartNumber;
    }
    for (int i=0; i<noOfRolls; i++){
        b = b + (rand() % noOfDiceSides + 1) * diceStartNumber;
    }
    if (a>b){
        return 1;
    } else if (a<b){
        return 2;
    } else {
        return 0;
    }
}