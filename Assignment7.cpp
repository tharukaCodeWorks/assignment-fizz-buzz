#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 
class Book
{
private:
      int bookID;
      std::string bookName;
      std::string ISBN;
public:
      int GetBookID(){
        return bookID;
      }
      std::string GetBookName(){
          return bookName;
      }
      std::string GetISBN(){
          return ISBN;
      }
      void SetBookID(int id){
          bookID = id;
      }
      void SetBookName(std::string name){
          bookName = name;
      }
      void SetBookISBN(std::string isbn){
          ISBN = isbn;
      }
Book(){} ~Book(){}
};
  
// A utility function to swap two elements  
void swap(Book* a, Book* b)  
{  
    Book t = *a;  
    *a = *b;  
    *b = t;  
}  
  
int partition (Book arr[], int low, int high)  
{  
    Book pivot = arr[high];  
    int i = (low - 1);  
  
    for (int j = low; j <= high - 1; j++)  
    {  
        
        if (arr[j].GetBookID() < pivot.GetBookID())  
        {  
            i++; 
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  
  

void quickSort(Book arr[], int low, int high)  
{  
    if (low < high)  
    {  
        
        int pi = partition(arr, low, high);  
  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  
  
void printArray(Book arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i].GetBookID() << ": "<<arr[i].GetBookName()<<" ,"<<arr[i].GetISBN()<<endl;  
    cout << endl;  
}  

Book insertNewBook(){
    int bookID;
    string bookName;
    string isbn;
    
    Book newBook;
    cout<<"Enter Book id: ";
    cin >>bookID;
    cout<<"Enter Book Name: ";
    cin >> bookName;
    cout<<"Enter Book ISBN: ";
    cin >> isbn;
    
    newBook.SetBookISBN(isbn);
    newBook.SetBookName(bookName);
    newBook.SetBookID(bookID);
    
    return newBook;
}  

int main()  
{  
    int count;
    cout<<"How Many Books do you want create? ";
    cin >>count;
    
    Book arr[count];  
    
    for(int i=0; i<count; i++){
        arr[i] = insertNewBook();
    }
    
    int n = sizeof(arr) / sizeof(arr[0]);  
    quickSort(arr, 0, n - 1);  
    cout << "Sorted array: \n";  
    printArray(arr, n); 
    return 0;  
}  
  