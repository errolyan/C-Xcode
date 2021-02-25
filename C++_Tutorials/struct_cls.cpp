# include <iostream>
# include <cstring>

using namespace std;
void printBook(struct Books book);

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
    
};
int main()
{
    Books book1;
    Books book2;

    strcpy(book1.title,"C++");
    strcpy(book1.author,"Run");
    strcpy(book1.subject,"计算机");
    book1.book_id = 1234;

    strcpy(book2.title,"python");
    strcpy(book2.author,"linux");
    strcpy(book1.subject,"计算机1");
    Book2.book_id = 1289;

    // 输出 Book1 信息
    printBook( book1 );

    // 输出 Book2 信息
    printBook( book2 );
    return 0;
}
void printBook( struct Books book )
{
   cout << "书标题 : " << book.title <<endl;
   cout << "书作者 : " << book.author <<endl;
   cout << "书类目 : " << book.subject <<endl;
   cout << "书 ID : " << book.book_id <<endl;
}
