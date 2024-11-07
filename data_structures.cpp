
#include <iostream>
#include <vector>
#include <list>
#include <map>

int main() {
    // vector is a dynamic array that can grow and shrink in size.
    std::vector<int> numbers = {1,2,3,4,5};
    numbers.push_back(6); // add 6 to the end
    numbers.pop_back(); // removes the last element 

    for (int num: numbers) {
        std::cout << num <<  " ";
    }
    std::cout << std::endl;
    
    // A doubly linked list that allows efficient insertion and deletion of elements from both ends but has slower random access compared to vector
    std::list<int> num_b = {1,2,4};
    num_b.push_front(3); 
    num_b.push_back(4);


    // map: A key-value store where each key is unique. It’s useful when you need to associate values with unique keys.
    std::map<std:string, int> age;
    age['someone_a'] = 25;
    age['someone_b'] = 43;

    for (const auto& pair : age) {
        std::cout << pair.first << ": " < pair.second << std::endl;
        std: cout << age << std::endl;
    }
    int find = age.find(43);

    // iterators
    // Iterators are objects that allow you to traverse elements in a container. They work similarly to pointers.
    std::vector<int> num_c = {12,3,42,34,7};
    std::vector<int>::iterator it;

    for (it = num_c.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}