#include <stdio.h>
#include <string.h>

// Ödev1: Bir metni tersine çeviren fonksiyon
void reverseString(char *str) {
    int i, j;
    int len = strlen(str);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// Ödev2: Bir kelimenin palindrom olup olmadığını kontrol eden fonksiyon
int isPalindrome(char *word) {
    int i, j;
    int len = strlen(word);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            return 0;
        }
    }

    return 1;
}

// Ödev3: Bir diziyi küçükten büyüğe sıralayan fonksiyon
void sortArray(int arr[], int size) {
    int i, j;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Ödev1 testi
    char str[] = "Merhaba dunya!";
    printf("Orjinal metin: %s\n", str);
    reverseString(str);
    printf("Ters cevrilmis metin: %s\n", str);

    // Ödev2 testi
    char word[] = "kayak";
    printf("Kelime: %s\n", word);
    if (isPalindrome(word)) {
        printf("Bu kelime bir palindromdur.\n");
    } else {
        printf("Bu kelime bir palindrom degildir.\n");
    }

    // Ödev3 testi
    int arr[] = {9, 4, 6, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Orjinal dizi: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    sortArray(arr, size);
    printf("Siralanmis dizi: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}