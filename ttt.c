#include <stdio.h>

char field[3][3];
void test(char field[3][3]); //Test, if some one has won
void set(char field[3][3]); //Set a character into the field, inserted from player
void show(char field[3][3]);//Show the ttt field on the console
int beginner();
int won;                    //O is player 0 and X is player 1
int *w_ptr = &won;



int main(void){

    return 0;
}

int beginner(){
    //print the beginner (player 0 or 1) randomly and start the game
}

void test(char field[3][3]){
    int i = 0;
    int j = 0;
    if(field[0][0] == 'O' && field[1][0] == 'O' && field[2][0] == 'O')
        *w_ptr = 0;
    if(field[0][1] == 'O' && field[1][1] == 'O' && field[2][1] == 'O')
        *w_ptr = 0;
    if(field[0][2] == 'O' && field[1][2] == 'O' && field[2][2] == 'O')
        *w_ptr = 0;
    if(field[0][0] == 'O' && field[0][1] == 'O' && field[0][2] == 'O')
        *w_ptr = 0;
    if(field[1][0] == 'O' && field[1][1] == 'O' && field[1][2] == 'O')
        *w_ptr = 0;
    if(field[2][0] == 'O' && field[2][1] == 'O' && field[2][2] == 'O')
        *w_ptr = 0;
    if(field[0][0] == 'O' && field[1][1] == 'O' && field[2][2] == 'O')
        *w_ptr = 0;



}

void set(char field[3][3]){

}

void show(char field[3][3]){

}
