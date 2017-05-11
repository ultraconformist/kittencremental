# Kittencremental

This is a clicker game/idling game/incremental game, in the
vein of games like Cookie Clicker and their ilk. It is designed
to be played within a CLI, and uses the ncurses library to
do so. It is written in C, and is a learning project for me.

The subject of this game is cats. Very much a work-in-progress,
this should nonetheless compile through a simple make command.

### Mechanics

Thus far, the mechanics are simplistic. You type the full word
"meow" in order to increase the number of kittens you have in
your kitten supply; when you collect a sufficient quantity of
kittens, you may spend those kittens to acquire cans of food
and tuna with the buttons c and f respectively. 

A can of food will generate 2 kittens per second, whereas a 
pool of tuna will generate 10 kittens per second. Their cost 
will increase with each subsequent purchase.

In the future, I will likely substitute the kittens variable
with "kibble," and make kibble an item that can be spent to
purchase things that will lure kittens. As of now, this is
what I've got. Enjoy!
