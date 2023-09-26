#include <iostream>
#include <cstdlib>

int main(){
  srand(time(NULL));
  int answer = std::rand() % 10;
  

std::cout << "Magic 8 Ball: ";
if (answer == 0) {
  std::cout << "It is certain!\n";
}
else if (answer == 2){
  std::cout << "Most Likely.\n";
}
else if (answer == 3){
  std::cout << "My sources say no.\n";
}
else if (answer == 4){
  std::cout << "Signs point to yes.\n";
}
else if (answer == 5){
  std::cout << "Ask again later.\n";
}
else if (answer == 6){
  std::cout << "Ask again later.\n";
}
else if (answer == 7){
  std::cout << "Cannot predict now.\n";
}
else if (answer == 8){
  std::cout << "Outlook Good.\n";
}
else if (answer == 9){
  std::cout << " Better not to tell you now.\n";
}
else {
  std::cout<< "Very doubtful..\n";
}




  return 0;
}