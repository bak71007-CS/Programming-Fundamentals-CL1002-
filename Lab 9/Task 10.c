#include <stdio.h>

//Basic attack
int basicAttack(int dmg, int hp){
    printf("Basic Attack used\n");
    hp = hp - dmg;
    return hp;
}

//Power strike
int powerStrike(int dmg, int hp){
    printf("Power Strike used\n");
    hp = hp - (int)(dmg * 2.5);  
    return hp;
}

//Heal
int heal(int dmg, int hp){
    printf("Heal used\n");
    hp = hp + 20;
    return hp;
}

//Poison attack
int poisonAttack(int dmg, int hp){
    printf("Poison Attack used\n");
    hp = hp - (dmg / 2);
    printf("Enemy is poisoned!\n");
    return hp;
}

int main(){
    int hp = 100;
    int dmg = 25;
    int choice;

    int (*action)(int, int); 

    for (int i = 1; i <= 3; i++){
        
        printf("\nTurn %d\n", i);
        printf("1 Basic\n2 Power\n3 Heal\n4 Poison\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1){
            action = basicAttack;
        }
        else if (choice == 2){
            action = powerStrike;
        }
        else if (choice == 3){
            action = heal;
        }
        else
        action = poisonAttack;
        
        hp = action(dmg, hp);
        printf("HP now = %d\n", hp);
    }

    return 0;
}