#include"iGraphics.h"
#include<stdio.h>
#include<stdlib.h>

float balloonx1 = 50.0;
float balloony1 = 0.0;
float balloondy1 = 1.5;

float balloonx2 = 150.0;
float balloony2 = 0.0;
float balloondy2 =2.5;

float balloonx3 = 250.0;
float balloony3 = 0.0;
float balloondy3 = 3.0;

float balloonx4 = 350.0;
float balloony4 = 0.0;
float balloondy4 = 2.75;

float balloonx5 = 450.0;
float balloony5 = 0.0;
float balloondy5 = 4.00;


float balloonx6 = 550.0;
float balloony6 = 0.0;
float balloondy6 = 3.25;

float balloonx7 = 650.0;
float balloony7 = 0.0;
float balloondy7 = 2.0;

float balloonx8 = 750.0;
float balloony8 = 0.0;
float balloondy8 = 2.60;

float balloonx9 = 850.0;
float balloony9 = 0.0;
float balloondy9 = 0.75;

float balloonx10 = 950.0;
float balloony10 = 0.0;
float balloondy10 = 4.0;

float balloonx11 = 1050.0;
float balloony11 = 0.0;
float balloondy11 = 0.85;

float balloonx12 = 1150.0;
float balloony12 = 0.0;
float balloondy12 = 1.75;


int bombx1 = rand() % 1200;
int bomby1 = 0;
int bombdy1 = 4;

float bombx2 = rand() % 1280;
float bomby2 = 0.0;
float bombdy2 = 2.75;

float bombx3 = 100.0;
float bomby3 = 100.0;
float bombdy3 = 6.5;

float bombx4 = rand() % 1250;
float bomby4 = 0.0;
float bombdy4 = 5.5;


float bombx5 = rand() % 1150;
float bomby5 = 0.0;
float bombdy5 = 3.5;


float bombx6 = rand() % 1230;
float bomby6 = 0.0;
float bombdy6 = 3.75;

float bombx7 = rand() % 1200;
float bomby7 = 0.0;
float bombdy7 = 5.75;

int score = 0;
char tScore[15] = { "Score : " };
int highscore, temp;

int flag = 1;
int key = 1;
int lapseTime = 1;
int menu = 1;

char sscore[1];
char shighscore[1];
char scoreNum[100];


void iDraw(){


	iClear();
	
	if (lapseTime < 1170){
		iClear();
		iShowBMP(0, 0, "images\\vector.bmp");
		iSetColor(245, 245, 245);
		iFilledRectangle(30, 70, 1200, 20);
		iSetColor(99, 184, 255);
		iFilledRectangle(45, 75, lapseTime, 10);
	}

	else if (menu == 1){

		iShowBMP(0, 0, "images\\vector.bmp");
		iShowBMP(900, 310, "images\\new game.bmp");
		iShowBMP(900, 240, "images\\highscore.bmp");
		iShowBMP(900, 170, "images\\help.bmp");
		iShowBMP(900, 100, "images\\about.bmp");
		iShowBMP(900, 30, "images\\exit.bmp");

	}

	else if (menu == 2){

		iSetColor(202, 225, 255);
		iFilledRectangle(0, 0, 1300, 750);
		iShowBMP(balloonx1, balloony1, "images\\balloon0.bmp");
		iShowBMP(balloonx2, balloony2, "images\\balloon1.bmp");
		iShowBMP(balloonx3, balloony3, "images\\balloon2.bmp");
		iShowBMP(balloonx4, balloony4, "images\\balloon3.bmp");
		iShowBMP(balloonx5, balloony5, "images\\balloon4.bmp");
		iShowBMP(balloonx6, balloony6, "images\\balloon5.bmp");
		iShowBMP(balloonx7, balloony7, "images\\balloon6.bmp");
		iShowBMP(balloonx8, balloony8, "images\\balloon7.bmp");
		iShowBMP(balloonx9, balloony9, "images\\balloon8.bmp");
		iShowBMP(balloonx10, balloony10, "images\\balloon9.bmp");
		iShowBMP(balloonx11, balloony11, "images\\balloon10.bmp");
		iShowBMP(balloonx12, balloony12, "images\\balloon11.bmp");
		iShowBMP(bombx1, bomby1, "images\\atom1.bmp");
		iShowBMP(bombx2, bomby2, "images\\atom2.bmp");
		iShowBMP(bombx3, bomby3, "images\\atom3.bmp");
		iShowBMP(bombx4, bomby4, "images\\atom4.bmp");
		iShowBMP(bombx5, bomby5, "images\\atom4.bmp");
		iShowBMP(bombx6, bomby6, "images\\atom4.bmp");
		iShowBMP(bombx7, bomby7, "images\\atom4.bmp");

		iSetColor(0, 0, 205);
		iText(0, 700, "SCORE : ", GLUT_BITMAP_TIMES_ROMAN_24);
		_itoa_s(score, scoreNum, 10);
		iText(100, 700, scoreNum, GLUT_BITMAP_TIMES_ROMAN_24);


		if (score >= highscore&&score != 0){
			FILE *hw;
			hw = fopen("highscore.txt", "w");
			highscore = score;
			fprintf(hw, "%d", highscore);
			fclose(hw);
		}

	}

	else if (menu == 3){
		iClear();
		sprintf(shighscore, "%d", highscore);
		iShowBMP(0, 0, "images\\hscore.bmp");
		sprintf(shighscore, "%d", highscore);
		iSetColor(0, 0, 0);
		iText(615, 420, shighscore, GLUT_BITMAP_TIMES_ROMAN_24);
		iShowBMP(490, 100, "images\\back.bmp");

	}

	else if (menu == 4){

		iShowBMP(0, 0, "images\\help_show.bmp");
		iShowBMP(490, 50, "images\\back.bmp");
	}

	else if (menu==5){

		iShowBMP(0, 0, "images\\about_show.bmp");
		iShowBMP(490, 100, "images\\back.bmp");
	}

	else if (menu == 6){
		iClear();
		iShowBMP(0, 0,"images\\backm.bmp");
		iShowBMP(480, 100, "images\\back.bmp");
		iSetColor(0, 0, 0);
		iText(620, 400, scoreNum, GLUT_BITMAP_TIMES_ROMAN_24);

	}


}
void iMouseMove(int mx, int my){ 
} 

int balloonx1Click(int mx, int my)
	{
		if (mx >= balloonx1 && mx <= balloonx1 + 65 && my >= balloony1 && my <= balloony1 + 65)

			return 1;
		else
			return 0;
	}

int balloonx2Click(int mx, int my){
	if (mx >= balloonx2 && mx <= balloonx2+ 65 && my >= balloony2 && my <= balloony2 + 65)

		return 1;
	else
		return 0;

}
	

int balloonx3Click(int mx, int my) {

	if (mx >= balloonx3 && mx <= balloonx3 + 65 && my >= balloony3 && my <= balloony3 + 65)

		return 1;
	else
		return 0;
}

int balloonx4Click(int mx, int my) {

	if (mx >= balloonx4 && mx <= balloonx4 + 65 && my >= balloony4 && my <= balloony4 + 65)

		return 1;
	else
		return 0;

}


int balloonx5Click(int mx, int my) {

	if (mx >= balloonx5 && mx <= balloonx5 + 65 && my >= balloony5 && my <= balloony5 + 65)

		return 1;
	else
		return 0;

}


int balloonx6Click(int mx, int my) {
	if (mx >= balloonx6 && mx <= balloonx6 + 65 && my >= balloony6 && my <= balloony6 + 65)

		return 1;
	else
		return 0;

}


int balloonx7Click(int mx, int my) {
	if (mx >= balloonx7 && mx <= balloonx7 + 65 && my >= balloony7 && my <= balloony7 + 65)

		return 1;
	else
		return 0;

}


int balloonx8Click(int mx, int my) {

	if (mx >= balloonx8 && mx <= balloonx8 + 65 && my >= balloony8 && my <= balloony8 + 65)

		return 1;
	else
		return 0;

}

int balloonx9Click(int mx, int my) {

	if (mx >= balloonx9 && mx <= balloonx9 + 65 && my >= balloony9 && my <= balloony9 + 65)

		return 1;
	else
		return 0;

}

int balloonx10Click(int mx, int my) {

	if (mx >= balloonx10 && mx <= balloonx10 + 65 && my >= balloony10 && my <= balloony10 + 65)

		return 1;
	else
		return 0;

}


int balloonx11Click(int mx, int my) {

	if (mx >= balloonx11 && mx <= balloonx11 + 65 && my >= balloony11 && my <= balloony11 + 65)

		return 1;
	else
		return 0;

}


int balloonx12Click(int mx, int my) {

	if (mx >= balloonx12 && mx <= balloonx12 + 65 && my >= balloony12 && my <= balloony12 + 65)

		return 1;
	else
		return 0;

}


int bombx1Click(int mx, int my){
	if (mx >= bombx1 && mx <= bombx1 + 30 && my >= bomby1 && my <= bomby1 + 125)

		return 1;
	else
		return 0;

}

int bombx2Click(int mx, int my){
	if (mx >= bombx2 && mx <= bombx2 + 30 && my >= bomby2 && my <= bomby2 + 125)

		return 1;
	else
		return 0;

}

int bombx3Click(int mx, int my){
	if (mx >= bombx3 && mx <= bombx3 + 30 && my >= bomby3 && my <= bomby3 + 125)

		return 1;
	else
		return 0;

}

int bombx4Click(int mx, int my){
	if (mx >= bombx4 && mx <= bombx4 + 30 && my >= bomby4 && my <= bomby4 + 125)

		return 1;
	else
		return 0;

}

int bombx5Click(int mx, int my){
	if (mx >= bombx5 && mx <= bombx5 + 30 && my >= bomby5 && my <= bomby5 + 125)

		return 1;
	else
		return 0;

}

int bombx6Click(int mx, int my){
	if (mx >= bombx6 && mx <= bombx6 + 30 && my >= bomby6 && my <= bomby6 + 125)

		return 1;
	else
		return 0;

}

int bombx7Click(int mx, int my){
	if (mx >= bombx7 && mx <= bombx7 + 30 && my >= bomby7 && my <= bomby7 + 125)

		return 1;
	else
		return 0;

}


void highscoreShow(){
	FILE *hr;
	hr = fopen("highscore.txt", "r");
	fscanf(hr, "%d", &highscore);
	fclose(hr);
	sprintf(shighscore, "%d", highscore);
}

void iMouse(int button, int state, int mx, int my){



	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON)
	{


		if (menu == 1 && mx > 900 && mx < 1207 && my>310 && my < 360){
			menu = 2;
		}

		if (menu == 1 && mx > 900 && mx < 1207 && my>240 && my < 290){
			menu = 3;
		}

		if (menu == 1 && mx > 900 && mx < 1207 && my>170 && my < 220){
			menu = 4;
		}

		if (menu == 1 && mx > 900 && mx < 1207 && my>100 && my < 150){
			menu = 5;
		}

		if (menu == 1 && mx > 900 && mx < 1207 && my>30 && my < 80){
			exit(0);
		}

		if (menu == 3 && mx > 490 && mx < 797 && my>100 && my < 150){
			menu = 1;
		}

		if (menu == 4 && mx > 490 && mx < 797 && my>50 && my < 100){
			menu = 1;
		}

		if (menu == 5 && mx > 490 && mx < 797 && my>100 && my < 150){
			menu = 1;
		}

		if(menu == 6 && mx > 530 && mx < 741 && my>275 && my < 530){
			menu = 2; //reload
		}

		if (menu == 6 && mx > 490 && mx < 797 && my>100 && my < 150){
			menu = 1;
		}
		

	}


	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && balloonx1Click(mx, my)) {
		score+=2; 
		PlaySound("music\\balloon", NULL, SND_ASYNC);
	}

	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && balloonx2Click(mx, my)) {
		score += 3;
		PlaySound("music\\balloon", NULL, SND_ASYNC);
	}
	
	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && balloonx3Click(mx, my)) {
		score += 4;
		PlaySound("music\\balloon", NULL, SND_ASYNC);
	}

	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && balloonx4Click(mx, my)) {
		score += 3;
		PlaySound("music\\balloon", NULL, SND_ASYNC);
	}

	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && balloonx5Click(mx, my)) {
		score += 5;
		PlaySound("music\\balloon", NULL, SND_ASYNC);
	}

	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && balloonx6Click(mx, my)) {
		score += 4;
		PlaySound("music\\balloon", NULL, SND_ASYNC);
	}

	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && balloonx7Click(mx, my)) {
		score += 3;
		PlaySound("music\\balloon", NULL, SND_ASYNC);
	}

	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && balloonx8Click(mx, my)) {
		score += 3;
		PlaySound("music\\balloon", NULL, SND_ASYNC);
	}

	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && balloonx9Click(mx, my)) {
		score += 1;
		PlaySound("music\\balloon", NULL, SND_ASYNC);
	}

	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && balloonx10Click(mx, my)) {
		score += 5;
		PlaySound("music\\balloon", NULL, SND_ASYNC);
	}

	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && balloonx11Click(mx, my)) {
		score += 1;
		PlaySound("music\\balloon", NULL, SND_ASYNC);
	}

	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && balloonx12Click(mx, my)) {
		score += 2;
		PlaySound("music\\balloon", NULL, SND_ASYNC);
	}

	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && bombx1Click(mx, my)) {
		PlaySound("music\\bomb", NULL, SND_ASYNC);
		menu = 6;
	}

	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && bombx2Click(mx, my)) {
		PlaySound("music\\bomb", NULL, SND_ASYNC);
		menu = 6;
	}

	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && bombx3Click(mx, my)) {
		PlaySound("music\\bomb", NULL, SND_ASYNC);
		menu = 6;
	}

	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && bombx4Click(mx, my)) {
		PlaySound("music\\bomb", NULL, SND_ASYNC);
		menu = 6;
	}

	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && bombx5Click(mx, my)) {
		PlaySound("music\\bomb", NULL, SND_ASYNC);
		menu = 6;
	}

	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && bombx6Click(mx, my)) {
		PlaySound("music\\bomb", NULL, SND_ASYNC);
		menu = 6;
	}

	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON && bombx7Click(mx, my)) {
		PlaySound("music\\bomb", NULL, SND_ASYNC);
		menu = 6;
	}
}



void animateBalloonandBomb()
{
	if (flag == 1){

		balloony1 += balloondy1;
		balloony2 += balloondy2;
		balloony3 += balloondy3;
		balloony4 += balloondy4;
		balloony5 += balloondy5;
		balloony6 += balloondy6;
		balloony7 += balloondy7;
		balloony8 += balloondy8;
		balloony9 += balloondy9;
		balloony10 += balloondy10;
		balloony11 += balloondy11;
		balloony12 += balloondy12;

		bomby1 += bombdy1;
		bomby2 += bombdy2;
		bomby3 += bombdy3;
		bomby4 += bombdy4;
		bomby5 += bombdy5;
		bomby6 += bombdy6;
		bomby7 += bombdy7;

		if (balloony1 > 720){

			balloony1 = 0.0;
			flag = 0;
		}

		if (balloony2 > 720){

			balloony2 = 0.0;
			flag = 0;
		}

		if (balloony3 > 720){

			balloony3 = 0.0;
			flag = 0;
		}

		if (balloony4 > 720){

			balloony4 = 0.0;
			flag = 0;

		}

		if (balloony5 > 720){

			balloony5 = 0.0;
			flag = 0;
		}

		if (balloony6 > 720){

			balloony6 = 0.0;
			flag = 0;
		}

		if (balloony7 > 720){

			balloony7 = 0.0;
			flag = 0;
		}

		if (balloony8 > 720){

			balloony8 = 0.0;
			flag = 0;
		}

		if (balloony9 > 720){

			balloony9 = 0.0;
			flag = 0;
		}

		if (balloony10 > 720){

			balloony10 = 0.0;
			flag = 0;
		}

		if (balloony11 > 720){

			balloony11 = 0.0;
			flag = 0;
		}

		if (balloony12 > 720){

			balloony12 = 0.0;
			flag = 0;
		}

		if (bomby1 > 720){

			bomby1 = 0.0;
			bombx1 = rand() % 1200;
			flag = 0;
		}

		if (bomby2 > 720){

			bomby2 = 0.0;
			bombx2 = rand() % 1200;
			flag = 0;
		}

		if (bomby3 > 720){

			bomby3 = 0.0;
			bombx3 = rand() % 1200;
			flag = 0;
		}

		if (bomby4 > 720){

			bomby4 = 0.0;
			bombx4 = rand() % 1200;
			flag = 0;

		}

		if (bomby5 > 720){

			bomby5 = 0.0;
			bombx5 = rand() % 1200;
			flag = 0;

		}

		if (bomby6 > 720){

			bomby6 = 0.0;
			bombx6 = rand() % 1200;
			flag = 0;

		}

		if (bomby7 > 720){

			bomby7 = 0.0;
			bombx7 = rand() % 1200;
			flag = 0;

		}

	}

	if (flag == 0){

		if (balloony1 == 0){
			flag = 1;
		}

		if (balloony2 == 0){
			flag = 1;
		}

		if (balloony3 == 0){
			flag = 1;
		}

		if (balloony4 == 0){
			flag = 1;
		}

		if (balloony5 == 0){
			flag = 1;
		}

		if (balloony6 == 0){
			flag = 1;
		}

		if (balloony7 == 0){
			flag = 1;
		}

		if (balloony8 == 0){
			flag = 1;
		}

		if (balloony9 == 0){
			flag = 1;
		}

		if (balloony10 == 0){
			flag = 1;
		}

		if (balloony11 == 0){
			flag = 1;
		}

		if (balloony12 == 0){
			flag = 1;
		}


		if (bomby1 == 0){
			flag = 1;
		}

		if (bomby2 == 0){
			flag = 1;
		}

		if (bomby3 == 0){
			flag = 1;
		}

		if (bomby4 == 0){
			flag = 1;
		}

		if (bomby5 == 0){
			flag = 1;
		}

		if (bomby6 == 0){
			flag = 1;
		}

		if (bomby7 == 0){
			flag = 1;
		}
	}

}


void loadingGame(){

	if (lapseTime < 1270){
		lapseTime += 5;
	}

}


/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if (key == 'p')
	{
		iPauseTimer(0);
	}

	if (key == 'r'){
		iResumeTimer(0);
	}

}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}

	if (key == GLUT_KEY_HOME){
		menu = 1;
	}

	//place your codes for other keys here
}



int main()
{ 

	iSetTimer(15, animateBalloonandBomb);
	iSetTimer(10, loadingGame);
	iInitialize(1280, 720, "Balloon Pop"); 
	return 0;

}

