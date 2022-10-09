#include <stdio.h>
//Use the printf() statement to output a poem of your choice. Submit your program as a text file. 
int main(void){

    char * poem = "Once upon a midnight dreary,\n"
    "while I pondered, weak and weary,\n"
    "Over many a quaint and curious volume of forgotten lore While I nodded,\n" 
    "nearly napping,\n suddenly there came a tapping,\n"
    "As of some one gently rapping, rapping at my chamber door.\n" 
    "Tis some visitor, I muttered, tapping at my chamber door-\n Only this and nothing more.\n"
    "Ah, distinctly I remember it was in the bleak December;\n  "
    "And each separate dying ember wrought its ghost upon the floor.\n"
    "Eagerly I wished the morrow;—vainly I had sought to borrow\n"
    "From my books surcease of sorrow—sorrow for the lost Lenore—\n"
    "For the rare and radiant maiden whom the angels name Lenore—\n"
    "Nameless here for evermore.";

    printf("%s", poem);
    return 0;
}