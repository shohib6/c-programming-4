#include <stdio.h>
#include <string.h>

struct book {
    char title[100];
    char author[100];
    int publication_year;
    float price;
};

void display_recent_books(struct book books[], int num_books) {
    printf("Books published after 2010:\n");
    for (int i = 0; i < num_books; i++) {
        if (books[i].publication_year > 2010) {
            printf("%s by %s, published in %d, price: %.2f\n",
                books[i].title, books[i].author, books[i].publication_year, books[i].price);
        }
    }
}

int main() {
    
    struct book books[5];

    
    for (int i = 0; i < 5; i++) {
        printf("Enter information for book %d:\n", i+1);
        printf("Title: ");
        fgets(books[i].title, 100, stdin);
        books[i].title[strcspn(books[i].title, "\n")] = 0; 
        printf("Author: ");
        fgets(books[i].author, 100, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0; 
        printf("Publication year: ");
        scanf("%d", &books[i].publication_year);
        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar(); 
    }

    
    display_recent_books(books, 5);

    return 0;
}
