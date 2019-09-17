#The Adventures of Flavio- A Twine game
A text-based nonlinear story game.
##Playing
It takes about 25 minutes to do all the paths.
All you need to do to play is download the html file and run it in any browser.
##Contributing
If you want to make changes to it, download the html file.Download Twine (or twinery.org can be used) and import the html file. The story can be modified very easily in Twine's UI.
Twine docs: https://twinery.org/wiki
##TwineSyntaxRemover.cpp
Twine has a feature called view "proofreading copy" that shows all the text from passages except that it still comes with all the code. This program removes all the syntax and outputs the text in output.txt. In addition, it also uploads the same text in portions of 1000 words in portionX.txt. The first 1000 words will be in portion0.txt, the second 1000 words in portion1.txt, etc. The reason for this is that websites like Grammarly come with a word limit and putting in the entire output file is usually way too much. This way, one portion document at a time can be inserted into grammarly and reviewed.