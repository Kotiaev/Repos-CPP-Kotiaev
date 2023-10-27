#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#define target_value random_value 
#define attempts_count trying 



int main() {

	const std::string high_scores_filename = "high_grades.txt";

	// Ask about name
	std::cout << "Hi! Enter your name, please:" << std::endl;
    std::string user_name;
    int trying;
    std::cin >> user_name;
    if (user_name == "-table") {
        // Read the high score file and print all results
	{
		std::ifstream in_file{high_scores_filename};
		if (!in_file.is_open()) {
			std::cout << "Failed to open file for read: " << high_scores_filename << "!" << std::endl;
			return -1;
		}

		std::cout << "High scores table:" << std::endl;

		std::string username;
		
		while (true) {
			// Read the username first
			in_file >> username;
			// Read the high score next
			in_file >> trying;
			// Ignore the end of line symbol
			in_file.ignore();

			if (in_file.fail()) {
				break;
			}

			// Print the information to the screen
			std::cout << username << '\t' << trying << std::endl;

		    } }

    return 1;
    }



std::cout << "Hi " << user_name << std::endl ;

std:: cout << "Would you like to choose either MAX NUMBER (1) or Level of the Game (2 ).Respectively write 1 or 2   " << std::endl ;
int mood_choose ;
std::cin >> mood_choose ;
while (std::cin.fail()|| mood_choose > 2 ||mood_choose <= 0  ) {
		std::cout << "Please write numbers from 1 to 2 " << std::endl;
        std:: cin  >> mood_choose ; }

int max_vRC ;
switch ( mood_choose ) { 
case 1 : 
std::cout << "What is maximum number ? " << std::endl;
std::cin >> max_vRC ; 
while (std::cin.fail()|| max_vRC > 32000 ||mood_choose <= 0) {
		std::cout << "Please write numbers from 0 to 32000 " << std::endl;
        std:: cin  >> max_vRC ; }
		
break;
case 2 :  
    std::cout << "choose the level of the game from 1 to 5" << std::endl ;

int game_level ;
 std:: cin  >> game_level ;
  while (std::cin.fail()|| game_level > 5||game_level <= 0) {
		std::cout << "Please write numbers from 1 to 5 " << std::endl;
        std:: cin  >> game_level ;
		
	}  

std::cout << "You choosed the level number " << game_level  << std::endl; 
std::cout << "Good luck , Dear "  << user_name << " !!!" << std::endl;

switch (game_level) {
    case 1 : max_vRC= 20 ; break ;
    case 2 : max_vRC= 40 ; break ;
    case 3 : max_vRC= 100 ; break ;
    case 4 : max_vRC= 200 ; break ;
    case 5 : max_vRC= 500 ; break ; 
}

 }




const int max_vR = max_vRC;




	std::srand(std::time(nullptr)); // use current time as seed for random generator

	const int random_value = std::rand() % max_vR;
	std::cout << random_value << std::endl; 

   
   
   
    
    int current_value = 0;
	
    trying = 0;

	std::cout << "Enter your guess:" << std::endl;

	do {
		std::cin >> current_value;
        trying ++ ;

        if (std::cin.fail()) {
		std::cout << "Bad value!" << std::endl;
		
	}

		if (current_value > target_value) {
			std::cout << "less than " << current_value << std::endl;
		}
		else if (current_value < target_value) {
			std::cout << "greater than " << current_value << std::endl;
		}
		else {
			std::cout << "you win!" << std::endl;
			break;
		}

	} while(true);








	// Get the last high score
	std::cout << "Your highest score:" <<trying << std::endl;
	
	

	// Write new high score to the records table
	{
		// We should open the output file in the append mode - we don't want
		// to erase previous results.
		std::ofstream out_file{high_scores_filename, std::ios_base::app};
		if (!out_file.is_open()) {
			std::cout << "Failed to open file for write: " << high_scores_filename << "!" << std::endl;
			return -1;
		}

		// Append new results to the table:
		out_file << user_name << ' ';
		out_file << trying;
		out_file << std::endl;
	} // end of score here just to mark end of the logic block of code

	// Read the high score file and print all results
	{
		std::ifstream in_file{high_scores_filename};
		if (!in_file.is_open()) {
			std::cout << "Failed to open file for read: " << high_scores_filename << "!" << std::endl;
			return -1;
		}

		std::cout << "High scores table:" << std::endl;

		std::string username;
		
		while (true) {
			// Read the username first
			in_file >> username;
			// Read the high score next
			in_file >> trying;
			// Ignore the end of line symbol
			in_file.ignore();

			if (in_file.fail()) {
				break;
			}

			// Print the information to the screen
			std::cout << username << '\t' << trying << std::endl;
		}
	}

	return 0;
} 