#include <stdio.h>
#include <stdlib.h>

struct Book
{
    char* author;
    char* title;
    int year;



};

void print_book(struct Book book);
void read_book(struct Book* book);




int main()
{
    struct Book book1;
    read_book(&book1);

    book1.author = "Heavy Karoly";
    book1.title = "Heavy C++";
//    sscanf("Heavy Karoly","%s", book.author);
//    sscanf("Heavy c++","%s",book1.title);

    book1.year = 1973;

    print_book(book1);

    free(book1.author);
    free(book1.title);


    return 0;
}
void print_book(struct Book book)
{
    printf("Title: %s\nAuthor: %s\nYear: %d", book.title, book.author, book.year);

}
void read_book(struct Book* book)
{


    book->author = (char)* malloc(sizeof(char) * 100);
    book->title = (char)* malloc(sizeof(char) * 100);

    scanf("%99[^,],%99[^,],%d", book->author, book->title, &book->year);
}
