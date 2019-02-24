#include <iostream>

int linjer_tegnet = 0;
int character_pos_x = 8;
int character_pos_y = 50;
int blanks_drawn = 0;
std::string character_line;





class character{
    int x,y;
public:
};

int main() {
    
    
    std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";

    
    while(linjer_tegnet < (character_pos_x - 1)){
    std::cout << "+                                                                              +\n";
    linjer_tegnet += 1;
    }
    
    character_line += "+";
    
    while (blanks_drawn < (character_pos_y - 1)) {
    character_line += " ";
    blanks_drawn += 1;
    }
    
    character_line += "x";
    
    while (blanks_drawn < 77) {
        character_line += " ";
        blanks_drawn += 1;
    }
    
    character_line += "+\n";
    
    std::cout << character_line;
    
    while(linjer_tegnet < 21){
        std::cout << "+                                                                              +\n";
        linjer_tegnet += 1;
    }
    


    std::cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    

    
    return 0;
}
