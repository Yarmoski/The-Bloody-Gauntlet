# The-Bloody-Gauntlet
An unfair duel between you and evil vampires. You will be pitted in an enclosed box full of VAMPIRES. Use your bottomless pockets full of anti-vampire vials to destroy them all and be victorious! Or die an extremely dissatisfying death. 

# How to play
Download the .exe and run it!

# Description
At each turn, the user will select an action for the player to take: either move one step or drop a poisoned blood vial without moving. The player will take the action, and then each vampire will move one step in a random direction. If a vampire moves onto the grid point occupied by the player, the player dies from the vampire's bite. 

If a vampire lands on a grid point with a poisoned blood vial, it drinks all the blood in the vial. The first time a vampire drinks a vial of poisoned blood, it slows down: it doesn't move on its next turn, but it moves on the turn after that, then on the next turn it doesn't move, then it moves on the turn after that, etc., moving only every other turn. The second time a vampire drinks a vial of poisoned blood, it dies and is taken out of the game.

At each turn the player may take one of these actions:
Move one step north, east, south, or west, and do not drop a poisoned blood vial. If the player attempts to move out of the arena (e.g., south, when on the bottom row), the player does not move, and does not drop a vial. If the player moves to a grid point currently occupied by a vampire, the player dies.

After the player moves, it's the vampires' turn. Each vampire has an opportunity to move. A vampire that has previously drunk a vial of poisoned blood will not move if it attempted to move on the previous turn. Otherwise, it will pick a random direction (north, east, south, west) with equal probability. The vampire moves one step in that direction if it can; if the vampire attempts to move off the grid, however, it does not move (but this still counts as a poisoned vampire's attempt to move, so it won't move on the next turn). More than one vampire may occupy the same grid point; in that case, instead of V, the display will show a digit character indicating the number of vampires at that point (where 9 indicates 9 or more).

If after a vampire moves, it occupies the same grid point as the player (whether or not there's a vial of poisoned blood at that point), the player dies. If the vampire lands on a grid point with a poisoned blood vial on it, it drinks all the blood in the vial. If this is the second vial of poisoned blood the vampire has drunk, it dies. If more than one vampire lands on a spot that started the turn with a poisoned blood vial on it, only one of them drinks the vial of poisoned blood.

#### Thank you
Thank you to Professor Smallberg at UCLA for the starter code and description!
