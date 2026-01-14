#include <iostream>
#include <limits>

int main(void) {
    int amount_of_input;
    scanf("%d", &amount_of_input);
    amount_of_input--;

    int smallest, second_smallest;

    scanf("%d", &second_smallest); // Grab the first actual value
    smallest = second_smallest;

    for (int i = 0; i < amount_of_input; i++) {
        int input;
        scanf("%d", &input);
    
        if (input < second_smallest) {
            second_smallest = input;
        }

        if (input < smallest) {
            second_smallest = smallest;
            smallest = input;
        }
    }

    std::cout << smallest << "\n";
    std::cout << second_smallest << "\n";
    return 0;
}

