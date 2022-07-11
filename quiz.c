#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void ans1(char, int *);
void ans2(char, int *);
void ans3(char, int *);
void ans4(char, int *);
void Rules();
void resetScore();
void help();
void mainmenu();

void main()
{
    int score=0, *ptr;
    char choice, option, next, name[10];
    FILE *fp;
    //Main menu
    printf("\t\t\t_____________________________________________________________________________\n");
    printf("\t\t\t_____________________________________________________________________________\n");
    printf("\n");
    printf("\t\t\t\t   Welcome to the Quiz Game!!\n");
    printf("\t\t\t_____________________________________________________________________________\n");
    printf("\t\t\t_____________________________________________________________________________\n");
    printf("\t\t\t> Press S to start the game\n");
    printf("\t\t\t> Press I to see the rules and instructions\n");
    printf("\t\t\t> Press V to view the highest score\n");
    printf("\t\t\t> Press R to reset score\n");
    printf("\t\t\t> Press H for help\n");
    printf("\t\t\t> Press Q to quit\n");
    printf("\t\t\t_____________________________________________________________________________\n");
    printf("\t\t\t_____________________________________________________________________________\n");
    printf("\t\t\tEnter your choice: ");
    scanf("%c", &choice);
    
    if(choice=='S' || choice=='s')
    {
        printf("\t\t\tEnter your name: ");
        scanf("%s", &name[10]);
        printf("\t\t\t_____________________________________________________________________________\n");
        printf("\t\t\t_____________________________________________________________________________\n");
        printf("\t\t\t\tLet's start the game!! \n");
        printf("\t\t\t_____________________________________________________________________________\n");
        printf("\t\t\t_____________________________________________________________________________\n");
        printf("\n\t\t\t\t\tRound 1\n");
        printf("\t\t\t_____________________________________________________________________________\n");
        printf("\t\t\t_____________________________________________________________________________\n");
        
        
        printf("\n\t\t\t Question 1: Which crop is sown on the largest area in India?\n");
        printf("\t\t\t a. Rice \tb. Wheat \tc. Sugarcane \td. Maize\n");
        ans1(option,&score);
        
        printf("\n\t\t\t_____________________________________________________________________________\n");
        printf("\n\t\t\t Question 2: Which state has the largest area?\n");
        printf("\t\t\t a. Maharashtra \tb. Madhya Pradesh \tc. Uttar Pradesh \td. Rajasthan\n");
        ans4(option,&score);
        
        printf("\n\t\t\t_____________________________________________________________________________\n");
        printf("\n\t\t\t Question 3: When did the World Trade Organization come into existence?\n");
        printf("\t\t\t a. 1992 \tb. 1993 \tc. 1994 \td. 1995\n");
        ans4(option,&score);
        
        printf("\n\t\t\t_____________________________________________________________________________\n");
        printf("\n\t\t\t Question 4: Panchayati Raj belongs to…\n");
        printf("\t\t\t a. Residual list \tb. Concurrent list \tc. State list \td. Union list\n");
        ans3(option,&score);
        
        printf("\n\t\t\t_____________________________________________________________________________\n");
        printf("\n\t\t\t Question 5: Which of the following is the world’s largest and deepest ocean?\n");
        printf("\t\t\t a. Pacific \tb. Atlantic \tc. Indian \td. None of these\n");
        ans1(option,&score);
        
        printf("\n\t\t\t_____________________________________________________________________________\n");
        printf("\n\t\t\t Question 6: In which state is the Elephant Falls located?\n");
        printf("\t\t\t a. Mizoram \tb. Orissa \tc. Manipur \td. Meghalaya\n");
        ans4(option,&score);
        
        printf("\n\t\t\t_____________________________________________________________________________\n");
        printf("\n\t\t\t Question 7: Friction can be reduced by changing from\n");
        printf("\t\t\t a. sliding to rolling \tb. rolling to sliding \tc. potential to kinetic energy \td. dynamic to static\n");
        ans1(option,&score);
        
        printf("\n\t\t\t_____________________________________________________________________________\n");
        printf("\n\t\t\t Question 8: This river is also called Ganga of South?\n");
        printf("\t\t\t a. Godavari \tb. Krishna \tc. Cauvery \td. None of these\n");
        ans3(option,&score);
        
        printf("\n\t\t\t_____________________________________________________________________________\n");
        printf("\n\t\t\t Question 9: During World War II, when did Germany attack France?\n");
        printf("\t\t\t a. 1940 \tb. 1941 \tc. 1942 \td. 1943\n");
        ans1(option,&score);
        
        printf("\n\t\t\t_____________________________________________________________________________\n");
        printf("\n\t\t\t Question 10:  When India national football team was established?\n");
        printf("\t\t\t a. 1937 \tb. 1938 \tc. 1940 \td. 1952\n");
        ans1(option,&score);
        
        printf("\n\t\t\t_____________________________________________________________________________\n");
        printf("\t\t\t_____________________________________________________________________________\n");
        if(score>=8)
        {
            printf("\n\t\t\tCongratulations!! You are eligible for round 2.\n");
            printf("\t\t\t_____________________________________________________________________________\n");
            printf("\t\t\t_____________________________________________________________________________\n");
            printf("\n\t\t\t\t\tRound 2\n");
            printf("\t\t\t_______________________________________________________________________________\n");
            printf("\t\t\t_______________________________________________________________________________\n");
            
            printf("\n\t\t\t_____________________________________________________________________________\n");
            printf("\n\t\t\t Question 1: Ozone layer prohibits\n");
            printf("\t\t\t a. Visible light \tb. Infrared radiation \tc. X-rays and gamma rays \td. Ultraviolet radiation\n");
            ans4(option,&score);
            
            printf("\n\t\t\t_____________________________________________________________________________\n");
            printf("\n\t\t\t Question 2: Mount Etna is a famous volcano which is located?\n");
            printf("\t\t\t a. Argentina \tb. Italy \tc. Mexico \td. Phillipies\n");
            ans2(option,&score);
            
            printf("\n\t\t\t_____________________________________________________________________________\n");
            printf("\n\t\t\t Question 3: Which is the largest coffee producing state of India?\n");
            printf("\t\t\t a. Kerala \tb. Tamil Nadu \tc. Karnataka \td. Arunachal Pradesh\n");
            ans3(option,&score);
            
            printf("\n\t\t\t_____________________________________________________________________________\n");
            printf("\n\t\t\t Question 4: The headquarters of Reserve Bank of India is in \n");
            printf("\t\t\t a. Kolkata \tb. New Delhi \tc. Mumbai \td. Chennai\n");
            ans3(option,&score);
            
            printf("\n\t\t\t_____________________________________________________________________________\n");
            printf("\n\t\t\t Question 5: When did Mother Teresa win the Nobel Peace Prize?\n");
            printf("\t\t\t a. 1975 \tb. 1979 \tc. 1981 \td. 1982\n");
            ans2(option,&score);
            
            printf("\n\t\t\t_____________________________________________________________________________\n");
            printf("\n\t\t\t Question 6: Which Indian state has its maximum area under the forest cover?\n");
            printf("\t\t\t a. Maharashtra \tb. Madhya Pradesh \tc. Arunachal Pradesh \td. Kerala\n");
            ans3(option,&score);
            
            printf("\n\t\t\t_____________________________________________________________________________\n");
            printf("\n\t\t\t Question 7: Where is the Tungabhadra sanctuary located?\n");
            printf("\t\t\t a. Madhya Pradesh \tb. Uttar Pradesh \tc. Karnataka \td. West Bengal\n");
            ans3(option,&score);
            
            printf("\n\t\t\t_____________________________________________________________________________\n");
            printf("\n\t\t\t Question 8: What causes filariasis?\n");
            printf("\t\t\t a. Bacteria \tb. Mosquito \tc. Protozoa \td. Virus\n");
            ans2(option,&score);
            
        }
        else
        {
            printf("try again");
        }
    }
    
    else if(choice=='I' || choice=='i')
    {
        Rules();
    }
    else if(choice=='V' || choice=='v')
    {
        fp=fopen("HighestScore.txt", "a");
        fprintf(fp, "%d\n", score);
        fclose(fp);
    }
    else if(choice=='R' || choice=='r')
    {
        resetScore();
    }
    else if(choice=='H' || choice=='h')
    {
        help();
    }
    else if(choice=='Q' || choice=='q')
    {
        printf("\n\t\t\t______________________________________________________\n");
        printf("\t\t\t______________________________________________________\n");
        printf("\n\t\t\tThank you for playing!!\n");
        printf("\n\t\t\t______________________________________________________\n");
        printf("\t\t\t______________________________________________________\n");
    }
    else
    {
        printf("\n\t\t\t______________________________________________________\n");
        printf("\t\t\t______________________________________________________\n");
        printf("\n\t\t\tPlease Enter a valid option.\n");
        printf("\n\t\t\t______________________________________________________\n");
        printf("\t\t\t______________________________________________________\n");
        
    }
    
    printf("\n\t\t\tYour score: %d", score);
    if(score>=15)
    {
        printf("\n\t\t\tCongratulations!! You Won!!");
    }
    else
    {
        printf("\n\t\t\tPlease try again");
    }
    
    getch();
    
}
//Answer selection and score calculation
void ans2(char option, int *score)
{
    printf("\t\t\tEnter your choice: ");
        scanf("%s", &option);
        if(option=='b')
        {
            printf("\t\t\t\t Correct answer!!\n");
            (*score)++;
            printf("\t\t\tYour score is: %d", *score);
        }
        else
        {
            printf("\t\t\tWrong Answer\n");
        }
}
void ans1(char option, int *score)
{
    printf("\t\t\tEnter your choice: ");
        scanf("%s", &option);
        if(option=='a')
        {
            printf("\t\t\t\t Correct answer!!\n");
            (*score)++;
            printf("\t\t\tYour score is: %d", *score);
        }
        else
        {
            printf("\t\t\tWrong Answer\n");
        }
}
void ans3(char option, int *score)
{
    printf("\t\t\tEnter your choice: ");
        scanf("%s", &option);
        if(option=='c')
        {
            printf("\t\t\t\t Correct answer!!\n");
            (*score)++;
            printf("\t\t\tYour score is: %d", *score);
        }
        else
        {
            printf("\t\t\tWrong Answer\n");
        }
}
void ans4(char option, int *score)
{
    printf("\t\t\tEnter your choice: ");
        scanf("%s", &option);
        if(option=='d')
        {
            printf("\t\t\t\t Correct answer!!\n");
            (*score)++;
            printf("\t\t\tYour score is: %d", *score);
        }
        else
        {
            printf("\t\t\tWrong Answer\n");
        }
}

void Rules()
{
    
    printf("\n\t\t\t1. There are two rounds in this game.\n");
    printf("\n\t\t\t2. If you qualify Round-1 you are eligible for Round-2.\n");
    printf("\n\t\t\t3. Each correct answer is awarded 1 marks.\n");
    printf("\n\t\t\t4. No marks are awarded for wrong answers.\n");
    printf("\n\t\t\t5. Follow the directions given.\n");
}


void resetScore()
{
    FILE *fp;
    printf("\n\t\t\tReset score");
    fp=fopen("HighestScore.txt", "w");
}

void help()
{
    printf("\n\t\t\tHelp");
    printf("\n\t\t\t1. There are two rounds in this game.\n");
    printf("\n\t\t\t2. If you qualify Round-1 you are eligible for Round-2.\n");
    printf("\n\t\t\t3. Each correct answer is awarded 1 marks.\n");
    printf("\n\t\t\t4. No marks are awarded for wrong answers.\n");
    printf("\n\t\t\t5. Follow the directions given.\n");
}

