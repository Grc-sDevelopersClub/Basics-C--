#include<iostream>
using namespace std;

// struct book
// {
//     string tittle;
//     string author;
//     string subject;
//     int id;
// };
struct book
{
    string tittle;
    string author;
    string subject;
    int id;
};
int main()
{
    //Number of books you want to enter data for;
    int number_of_books;
    cout<<"Enter the number of books you want ot enter details for :";
    cin>>number_of_books;
    struct book s[number_of_books];

    //Taking inputs from the user for book details
    for(int i=0;i<number_of_books;i++)
    {
        cout<<"Enter tittle of the book:";
        cin>>s[i].tittle;
        cout<<"Enter name of author :";
        cin>>s[i].author;
        cout<<"Enter subject of the book :";
        cin>>s[i].subject;
        cout<<"Enter Book Id :";
        cin>>s[i].id;

    }
//Displaying the details of the book from an array of structure

    for(int i=0;i<number_of_books;i++)
    {
        
        cout<<"Tittle:"<<s[i].tittle<<endl;
        cout<<"Author:"<<s[i].author<<endl;
        cout<<"Subject:"<<s[i].subject<<endl;
        cout<<"Book Id:"<<s[i].id<<endl;
    }
    return 0;

}