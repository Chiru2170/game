This is a Boring Game.

Game Overview - 
There are 3 lanes - left(0) , Middle(1),Right(2)
The palyer stand int the last row
The obstacle will come from top in a randome lane and moves downward,row by row
The player moves left/result to avoid the obstacle
If obstacle reaches same lane as player then collision and game over

Variables -
x - Lane 
step - obstacle position 
obstaclePos - Lane in which obstacle appears
rand() % 3 - Generates obstacle lane 
_kbhit() - checks if key is pressed
gtech() - reads arrow key
sleep() - control speed

The left arrow and right arrow part ensures that the player doesn't cross the 3 lanes

Obstacle movement-
The obstacle generates from top with --->obstaclePos = rand() % 3;
step = 0;
Then it moves down with --->sleep++;

Animation Part -
Animation is created using --> system("cls");
Every time each loop --->
1.Clears screen 
2.Then empty rows
3.Generates obstacle in row 
4.Put the palyer at bottom

Collision -
Collisoin happen only when both the collision conditions are met.
It means that --> Obstacle at bottom row and lane is player's lane
If both row matches GAME OVER.

Limitations -
This game does not contain -->
1.Scores
2.Lives
3.Difficulty levels
4.Restart Menu
5.High scores
6.Multiple obstacle

Modifications -
1. Score System
2. Lives System
3. Game continues after collision
4. Difficulty increase
5. Interface improvement

This is the game analysis from my side that how game works internally,covering all the major points.
