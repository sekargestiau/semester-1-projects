/*
***** FINAL PROJECT : SNAKE GAME *****

Kelompok : 3 
Kelas	 : C
Prodi	 : Informatika 
Nama Anggota Kelompok :
1. Nabilla Nurulita Dewi		(M0521058)
2. Ronny Chalvin Pamungkas		(M0521067)
3. Sekar Gesti Amalia Utami		(M0521071)
4. Tulus Toto Raharjo			(M0521078)
*/

#include <SFML/Graphics.hpp>
#include <Windows.h>

using namespace sf;

int game = 1, dir = 0, speed = 750, size = 1;
int randomx = 0, randomy = 0;
bool playGame = true;

struct Point {
	int x = 0;
	int y = 0;
}p[100];

int main() {

	RenderWindow appWindow(sf::VideoMode(500, 500), "Snake Game");
	Event appEvent;

	Texture square, refresht, background;
	square.loadFromFile("whitesquare.png");
	refresht.loadFromFile("refreshmark.png");
	background.loadFromFile("blackbg.png");

	Sprite red(square), refresh(refresht), blue(square), fondo(background);
	red.setPosition(0, 0);
	red.setColor(Color(255, 0, 0, 255));
	blue.setPosition(1000, 0);
	blue.setColor(Color(0, 0, 250, 255));

	srand(time(NULL));
	randomx = 1 + rand() % (450);
	randomy = 1 + rand() % (450);
	for (int i = 0; i < 9; i++) {
		if (randomx <= (i + 1) * 50 && randomx > i * 50) randomx = (i + 1) * 50;
		if (randomy <= (i + 1) * 50 && randomy > i * 50) randomy = (i + 1) * 50;
	}

	while (appWindow.isOpen()) {
		Vector2i pos = Mouse::getPosition(appWindow);
		while (appWindow.pollEvent(appEvent)) {
			if (appEvent.type == Event::Closed) {
				appWindow.close();
			}
			if (appEvent.type == Event::MouseButtonReleased) {
				if (appEvent.key.code == Mouse::Left) {
					if (refresh.getGlobalBounds().contains(pos.x, pos.y)) {
						if (game == 2) {
							game = 1;
							refresh.setPosition(1000, 0);
							size = 1;
							p[0].x = 0;
							p[0].y = 0;
							dir = 0;
							while (playGame) {
								randomx = 1 + rand() % (450);
								randomy = 1 + rand() % (450);
								for (int i = 0; i < 9; i++) {
									if (randomx <= (i + 1) * 50 && randomx > i * 50) randomx = (i + 1) * 50;
									if (randomy <= (i + 1) * 50 && randomy > i * 50) randomy = (i + 1) * 50;
								}
								for (int i = 0; i < size; i++) {
									if (randomx != p[i].x || randomy != p[i].y) playGame = false;
								}
							}
						}
					}
				}
			}
			if (appEvent.type == Event::KeyPressed) {
				if (game == 1) {
					if (appEvent.key.code == Keyboard::Right && dir != 1) dir = 0;
					else if (appEvent.key.code == Keyboard::Left && dir != 0) dir = 1;
					else if (appEvent.key.code == Keyboard::Down && dir != 3) dir = 2;
					else if (appEvent.key.code == Keyboard::Up && dir != 2) dir = 3;
				}
			}
		}
		appWindow.clear(Color(26, 28, 36));

		if (game == 1) {
			refresh.setPosition(1000, 0);
			appWindow.draw(fondo);
			for (int i = size; i > 0; i--) {
				p[i].x = p[i - 1].x;
				p[i].y = p[i - 1].y;
			}
			if (dir == 0) p[0].x += 50; 
			if (dir == 1) p[0].x -= 50;
			if (dir == 2) p[0].y += 50;
			if (dir == 3) p[0].y -= 50;
			if (p[0].x == 500 || p[0].x == -50 || p[0].y == 500 || p[0].y == -50) game = 2;
			for (int i = 1; i < size; i++) {
				if (p[0].x == p[i].x && p[0].y == p[i].y) game = 2;
			}
			if (p[0].x == blue.getPosition().x && p[0].y == blue.getPosition().y) {
				size += 1;
				if (speed > 100) speed -= 20;
				playGame = true;
				while (playGame) {
					randomx = 1 + rand() % (450);
					randomy = 1 + rand() % (450);
					for (int i = 0; i < 9; i++) {
						if (randomx <= (i + 1) * 50 && randomx > i * 50) randomx = (i + 1) * 50;
						if (randomy <= (i + 1) * 50 && randomy > i * 50) randomy = (i + 1) * 50;
					}
					for (int i = 0; i < size; i++) {
						if (randomx == p[i].x && randomy == p[i].y) {
							break;
						}
						else if ((randomx != p[i].x || randomy != p[i].y) && i == size - 1) {
							playGame = false;
						}
					}
				}
			}

			blue.setPosition(randomx, randomy);
			appWindow.draw(blue);

			for (int i = 0; i < size; i++) {
				red.setPosition(p[i].x, p[i].y);
				appWindow.draw(red);
			}

			appWindow.display();
			Sleep(speed);
		}
		else if (game == 2) {
			appWindow.draw(fondo);
			refresh.setPosition(100, 100);
			appWindow.draw(refresh);
			appWindow.display();
		}
	}
	return 0;
}
