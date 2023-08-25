#include <stdio.h>
#include <string.h>
int main()
{
  int backToHome = 4;

  while(backToHome = 4){


  printf("\n WElCOME TO Library \n");
  printf("-----------------------------\n");
  printf("1. Add books \n");
  printf("2. Display book Information \n");
  printf("3. Search Books(Book Status) \n");
  printf("4. Exit \n\n");
  int options;
  printf("Enter : ");
  scanf("%d", &options);
  printf("\n\n");
  if (options == 1)
  {
    printf("You can added book information \n\n");
    printf("chose the category :  \n\n");

    printf("1. computer \n");
    printf("2. Electronics\n");
    printf("3. Mechanical \n\n");
    int category;
    printf("Choose the category: ");
    scanf("%d", &category);
    printf("\n\n");
    if (category == 1)
    {
      printf("You have selected the Computer category \n\n");

      printf("1. Introduction to C \n");
      printf("2. Introduction to Python \n");
      printf("3. Introduction to C++ \n");

      int choose_book;
      printf("Choose a book: ");
      scanf("%d", &choose_book);
      printf("\n\n");
      if (choose_book == 1)
      {
        printf("You have selected Introduction to C book. \n");
        char student_name[100];
        int student_id;
        char bookNames[100];
        char authorName[100];
        int pages;
        int prices;

        printf("Student information:\n");
        printf("==================================\n");
        printf("Student Name: ");
        scanf("%s", &student_name);
        printf("ID: ");
        scanf("%s", &student_id);
        printf("Books information \n");
         printf("==================================\n");
        printf("Book Name: ");
        scanf("%s", &bookNames);

        printf("Author Name: ");
        scanf("%s", &authorName);

        printf("Pages: ");
        scanf("%d", &pages);

        printf("Price : ");
        scanf("%d", &prices);
      }
      else if (choose_book == 2)
      {
        printf("You have choose Introduction to Python book. \n");
        char student_name[100];
        int student_id;
        char bookNamesB[100];
        char authorNameB[100];
        int pagesB;
        int pricesB;

        printf("Student information:\n");
        printf("==================================\n");
        printf("Student Name: ");
        scanf("%s", &student_name);
        printf("ID: ");
        scanf("%s", &student_id);
        printf("Books information \n");
         printf("==================================\n");
        printf("Book Name : ");
        scanf("%s", &bookNamesB);
        printf("\n");

        printf("Enter Author");
        scanf("%s", &authorNameB);
        printf("\n");

        printf("Pages: ");
        scanf("%d", &pagesB);
        printf("\n");

        printf("Prices: ");
        scanf("%d", &pricesB);
      }
      else if (choose_book == 3)
      {
        printf("You have choose Introduction to C++ book. \n");
        char student_name[100];
        int student_id;
        char bookNamesC[100];
        char authorNameC[100];
        int pagesC;
        int pricesC;

        printf("Student information:\n");
        printf("==================================\n");
        printf("Student Name: ");
        scanf("%s", &student_name);
        printf("ID: ");
        scanf("%s", &student_id);
        printf("Books information \n");
         printf("==================================\n");
        printf("Book Name : ");
        scanf("%s", &bookNamesC);
        printf("\n");

        printf("Author Name: ");
        scanf("%s", &authorNameC);
        printf("\n");

        printf("Pages : ");
        scanf("%d", &pagesC);
        printf("\n");

        printf("Prices : ");
        scanf("%d", &pagesC);
      }

    }

    else if (category == 2)
    {
      printf("You have chosen the Electronics category \n\n");
      printf("1. Practical Electronics for Inventors \n");
      printf("2. The art of Electronics \n");
      printf("3. Fundamentals of digital circuits");

      int choose_book_2;
      printf("choose a book : ");
      scanf("%d", &choose_book_2);
      printf("\n");

      if (choose_book_2 == 1)
      {
        printf("You have chosen  Practical Electronics for Inventors \n ");
        char student_name[100];
        int student_id;
        char book_namedD[100];
        char author_nameD[100];
        int pageD;
        int pricesD;

        printf("Student information:\n");
        printf("==================================\n");
        printf("Student Name: ");
        scanf("%s", &student_name);
        printf("ID: ");
        scanf("%s", &student_id);
        printf("Books information \n");
         printf("==================================\n");
        printf("Books Name : ");
        scanf("%s", &book_namedD);
        printf("\n");

        printf("Author Name: ");
        scanf("%c", &author_nameD);
        printf("\n\n");

        printf("pages : ");
        scanf("%d", &pageD);
        printf("\n");

        printf("Price");
        scanf("%d", &pricesD);
        printf("\n");
      }
      else if (choose_book_2 == 2)
      {
        printf("You have chosen The art of Electronics \n");
        char student_name[100];
        int student_id;
        char bookName_E[100];
        char authorName_E[100];
        int page_E;
        int price_E;

        printf("Student information:\n");
        printf("==================================\n");
        printf("Student Name: ");
        scanf("%s", &student_name);
        printf("ID: ");
        scanf("%s", &student_id);
        printf("Books information \n");
         printf("==================================\n");
        printf("Books Name:");
        scanf("%s", &bookName_E);
        printf("\n");

        printf("Author's Name: ");
        scanf("%s", &authorName_E);
        printf("\n");

        printf("Pages: ");
        scanf("%d", &page_E);
        printf("\n");

        printf("Price : ");
        scanf("%d", &price_E);
        printf("\n");
      }
      else if (choose_book_2 == 3)
      {
        printf("Your chosen Fundamentals of digital circuits");
        char student_name[100];
        int student_id;

        char bookName_F[100];
        char authorName_F[100];
        int price_F;
        int pages_F;
        printf("Student information:\n");
        printf("==================================\n");
        printf("Student Name: ");
        scanf("%s", &student_name);
        printf("ID: ");
        scanf("%s", &student_id);
        printf("Books information \n");
         printf("==================================\n");
        printf("Book's Name: ");
        scanf("%s", bookName_F);
        printf("\n");

        printf("Author name: ");
        scanf("%s", &authorName_F);
        printf("\n");

        printf("Page : ");
        scanf("%d", &pages_F);
        printf("\n");

        printf("Prince: ");
        scanf("%d", &price_F);
        printf("\n");
      }
    }


    else if (category == 3)
    {
      printf("You have chosen Mechanical category\n\n");
      printf("1. Introduction to Autocad \n");
      printf("2. Fundamentals of Thermodynamics\n");
      printf("3. Mechanical Engineering : Conventional and objective type \n\n");

      int choose_book_3;
      printf("Choose a book: ");
      scanf("%d,", &choose_book_3);
      printf("\n");
      if (choose_book_3 == 1)
      {
        printf("You have chosen Introduction to Autocad\n");
        char student_name[100];
        int student_id;
        char books_name[210];
        char author_name[50];
        int price;
        int page;

        printf("Student information:\n");
        printf("==================================\n");
        printf("Student Name: ");
        scanf("%s", &student_name);
        printf("ID: ");
        scanf("%s", &student_id);
        printf("Books information \n");
         printf("==================================\n");
        printf("Books Name: ");
        scanf("%s", &books_name);
        printf("\n");

        printf("Author Name: ");
        scanf("%s", &author_name);
        printf("\n\n");

        printf("Page: ");
        scanf("%d", &page);
        printf("\n");

        printf("Price: ");
        scanf("%d", &price);
        printf("\n");
      }
      else if (choose_book_3 == 2)
      {
        printf("You have chosen Fundamentals of Thermodynamics\n");
        char student_name[100];
        int student_id;
        char books_nameE[50];
        char author_nameE[50];
        int priceE;
        int pageE;

        printf("Student information:\n");
        printf("==================================\n");
        printf("Student Name: ");
        scanf("%s", &student_name);
        printf("ID: ");
        scanf("%s", &student_id);
        printf("Books information \n");
         printf("==================================\n");
        printf("Books Name: ");
        scanf("%s", &books_nameE);
        printf("\n");

        printf("Author Name: ");
        scanf("%s", &author_nameE);
        printf("\n");

        printf("Page: ");
        scanf("%d", &pageE);
        printf("\n");

        printf("Price: ");
        scanf("%d", &priceE);
        printf("\n");
      }
      else if (choose_book_3 == 3)
      {
        printf("You have chosen Mechanical Engineering : Conventional and objective type \n\n\n");
        char student_name[100];
        int student_id;
        char books_nameF[50];
        char author_nameF[50];
        int priceF;
        int pageF;

        printf("Student information:\n");
        printf("==================================\n");
        printf("Student Name: ");
        scanf("%s", &student_name);
        printf("ID: ");
        scanf("%s", &student_id);
        printf("Books information \n");
         printf("==================================\n");
        printf("Books Name: ");
        scanf("%s", &books_nameF);
        printf("\n");

        printf("Author Name: ");
        scanf("%s", &author_nameF);
        printf("\n");

        printf("Page: ");
        scanf("%d", &pageF);
        printf("\n");

        printf("Price: ");
        scanf("%d", &priceF);
        printf("\n");
      }
    }
  }
  else if(options == 2){
       printf("\n Our books  \n\n");

    printf(" Introduction to C (copy: 10)\n");
    printf(" Introduction to Python  (copy: 20)\n");
    printf(" Introduction to C++ (copy: 30) \n");
    printf(" Practical Electronics for Inventors (copy: 40) \n");
    printf(" The art of Electronics (copy: 20)\n");
    printf(" Fundamentals of digital circuits (copy: 20) \n");
    printf(" Introduction to Autocad (copy: 10) \n");
    printf(" Fundamentals of Thermodynamics (copy: 20) \n");
    printf(" Mechanical Engineering : Conventional and objective type (copy: 20) \n");
  }

else if (options == 3)
  {
    printf("\n You can search the book Status:  \n\n");

    printf("Press the code: 123 for Introduction to C \n");
    printf("Press the code: 456 for Introduction to Python \n");
    printf("Press the code: 789 for Introduction to C++ \n");
    printf("Press the code: 523 for Practical Electronics for Inventors \n");
    printf("Press the code: 759 for The art of Electronics \n");
    printf("Press the code: 157 for Fundamentals of digital circuits \n");
    printf("Press the code: 359 for Introduction to Autocad \n");
    printf("Press the code: 153 for  Fundamentals of Thermodynamics\n");
    printf("Press the code: 104 for Mechanical Engineering : Conventional and objective type \n");

    int search;
    printf("Enter the book code to search (Use The Code) : ");
    scanf("%d", &search);

    printf("\n\n");

    switch (search)
    {
    case 123:
      printf("Book Name: Introduction to C\n");
      printf("Books Status: 2 Copies left\n");
      break;

       case 456:
      printf("Book Name: Introduction to Python\n");
      printf("Books Status: 6 Copies left\n");
      break;

       case 789:
      printf("Book Name: Introduction to C++\n");
      printf("Books Status: 14 Copies left\n");
      break;

       case 759:
      printf("Book Name: The art of Electronics\n");
      printf("Books Status: 9 Copies left\n");
      break;

       case 157:
      printf("Book Name: Fundamentals of digital circuits\n");
      printf("Books Status: 11 Copies left\n\n");
      break;

       case 359:
      printf("Book Name: Introduction to Autocad\n");
      printf("Books Status: 12 Copies left\n");
      break;

       case 153:
      printf("Book Name: Fundamentals of Thermodynamics\n");
      printf("Books Status: 23 Copies left\n");
      break;

       case 104:
      printf("Book Name: Mechanical Engineering : Conventional and objective type\n");
      printf("Books Status: 19 Copies left\n");
      break;
    default:
     printf("Error! Code doesn't match any book \n\n");
    }

  }
  else if(options = 4)
   break;
  }
}
