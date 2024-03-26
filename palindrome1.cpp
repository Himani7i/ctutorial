#include <iostream>

int main() {
    const int maxSize = 100;
    char word[maxSize];

    // Input
    std::cout << "Enter a word: ";
    std::cin >> word;

    // Check if the word is a palindrome
    int length = 0;
    while (word[length] != '\0') {
        length++;
    }

    bool isPalindrome = true;
    for (int i = 0; i < length / 2; ++i) {
        if (word[i] != word[length - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    // Output
    if (isPalindrome) {
        std::cout << "\"" << word << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << word << "\" is not a palindrome." << std::endl;
    }

    return 0;
}

int main() {
    char word[100];
    std::cout << "Enter a word: ";
    std::cin.getline(word, 100);

    if (isPalindrome(word)) {
        std::cout << "\"" << word << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << word << "\" is not a palindrome." << std::endl;
    }

    return 0;
}






#include <iostream>
using namsespace std;

int main(){
    int arr1[10];
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        cin>>arr[i];
        }
        int arr2[10];
        
        for(int j=0;j<=n;j++){
            arr2[j]=arr[i];
        }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
    if(arr2[j]==arr[i]){
        cout<<arr[i]<<arr2[j]
    }
        }
    }



}