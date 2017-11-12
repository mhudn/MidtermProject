/*
//Name: Mohammed Mohiuddin
//Creation: November 11, 2017
//Version: MidtermProject.1(Menu Receipt)
//Description: Displays a list of Appetizers and Deserts and prompts the user to choice an item of his choice. Then calcultes the total, Gratuities and prints a receipt.



//********************************************************************************************/

#ifndef MIDTERMPROJECT_H
#define MIDTERMPROJECT_H

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;


//Name: DisplayAppetizer()
//Parameter: 0
//Returns: Appetizer
//Label        Task                                                         Goto
//01          (start)                                                        02
//02          Prints welcome messages                                        03
//03          Displays all the Appetizers                                    04
//04          Initialize varIable 'x'                                        05
//05          Prompts user to select one of the Appetizers                   06
//06          Reads in selected user entered in the variable 'x'             07
//07          Initialize a string variable name 'Appetizer'                  08
//08          Checks the the input for corresponding Appetizer selection     09
//09          Matched Appetizer stores in 'Appetizer' varibale               10
//10          Prints 'Appetizer'                                             11
//11          Retuns Appetizer                                               12
//12          (exit)

string DisplayAppetizer()
{
  cout << "Hello there!\n" << "Welcome to Applebee's\n" << "We got Two for Twenty Special (One Appetizer + Two Entr´ees) for you.\n\n" << "Here's our Appetizers:\n";


  cout << "1.Two Caesar Side Salads                              (800 Cal.)\n";

  cout << "2.Spinach + Artichoke Dip                             (960 Cal.)\n";

  cout << "3.Crunchy Onion Rings                                 (1300 Cal.)\n";

  cout << "4.Boneless Wings                                      (1160 Cal.)\n";

  cout << "5.Mozzarella Sticks                                   (910 Cal.)\n\n";



  int x;

  cout << "Now choose your Appetizer ;) :~ ";

  cin >> x;

  string Appetizer;

  if (x == 1)
  {
    Appetizer = "1.Two Caesar Side Salads                              (800 Cal.)";

    cout << Appetizer << "\n\n";
  }

  else if (x == 2)
  {

    Appetizer = "2.Spinach + Artichoke Dip                             (960 Cal.)";

    cout << Appetizer << "\n\n";
  }

  else if (x == 3)
  {
    Appetizer = "3.Crunchy Onion Rings                                 (1300 Cal.)";

    cout << Appetizer << "\n\n";
  }

  else if (x == 4)
  {

    Appetizer = "4.Boneless Wings                                      (1160 Cal.)";

    cout << Appetizer << "\n\n";
  }

  else if (x == 5)
  {

    Appetizer = "5.Mozzarella Sticks                                   (910 Cal.)";

    cout << Appetizer << "\n\n";
  }

  else
  {
    Appetizer = "1.Two Caesar Side Salads                              (800 Cal.)";

    cout << Appetizer << "\n\n";
  }

  return Appetizer;
}

//Name: EntreeNo1()
//Parameter: 0
//Returns: FirstEntree
//Label        Task                                                         Goto
//01          (start)                                                        02
//02          Displays all the Entees                                        03
//03          Prints "And here's our Entr´ees, select two of them you want"  04
//04          Initialize varIable 'y'                                        05
//05          Prompts user to select one of the Appetizers                   06
//06          Reads in selected user entered in the variable 'y'             07
//07          Initialize a string variable name 'FirstEntree'                08
//08          Checks the the input for corresponding Appetizer selection     09
//09          Matched input stores in 'FirstEntree' varibale                 10
//10          Prints 'FirstEntree'                                             11
//11          Retuns 'FirstEntree'                                             12
//12          (exit)

string EntreeNo1()
{

  cout << "\n\nAnd here's our Entr´ees, select two of them you want.\n";

  cout << "1.Chicken Tenders Basket                              (1150 Cal.)\n";

  cout << "2.Oriental Chicken Salad                              (1420 Cal.)\n";

  cout << "3.Firecracker Shrimp Cavatappi                        (1970 Cal.)     [Plus 3.50]\n";

  cout << "4.The American Standard                               (1010 Cal.)\n";

  cout << "5.Blackened Tilapia                                   (510 Cal.)\n";

  cout << "6.Whisky Bacon Burger                                 (1240 Cal.)\n";

  cout << "7.Double-Glazed Baby Back Ribs - Half Rack            (550 Cal.)      [Plus 3.50]\n";

  cout << "8.Cedar Grilled Lemon Chicken                         (580 Cal.)\n";

  cout << "9.Fiesta Lime Chicken                                 (1140 Cal.)\n";

  cout << "10.Three-Cheese Chicken Cavatappi                     (1280 Cal.)\n\n";


  int y;

  cout << "Choose your first Entree: ";

  cin >> y;


  string FirstEntree;

  if (y == 1)
  {
    FirstEntree = "1.Chicken Tenders Basket                              (1150 Cal.)";

    cout << FirstEntree << "\n\n";
  }

  else if (y == 2)
  {

    FirstEntree = "2.Oriental Chicken Salad                              (1420 Cal.)";

    cout << FirstEntree << "\n\n";
  }

  else if (y == 3)
  {

    FirstEntree = "3.Firecracker Shrimp Cavatappi                        (1970 Cal.)     [Plus 3.50]";

    cout << FirstEntree << "\n\n";
  }

  else if (y == 4)
  {

    FirstEntree = "4.The American Standard                               (1010 Cal.)";

    cout << FirstEntree << "\n\n";
  }
  else if (y == 5)
  {

    FirstEntree = "5.Blackened Tilapia                                   (510 Cal.)";

    cout << FirstEntree << "\n\n";
  }

  else if (y == 6)
  {

    FirstEntree = "6.Whisky Bacon Burger                                 (1240 Cal.)";

    cout << FirstEntree << "\n\n";
  }

  else if (y == 7)
  {

    FirstEntree = "7.Double-Glazed Baby Back Ribs - Half Rack            (550 Cal.)      [Plus 3.50]";

    cout << FirstEntree << "\n\n";
  }

  else if (y == 8)
  {

    FirstEntree = "8.Cedar Grilled Lemon Chicken                         (580 Cal.)";

    cout << FirstEntree << "\n\n";
  }

  else if (y == 9)
  {

    FirstEntree = "9.Fiesta Lime Chicken                                 (1140 Cal.)";

    cout << FirstEntree << "\n\n";
  }

  else if (y == 10)
  {

    FirstEntree = "10.Three-Cheese Chicken Cavatappi                     (1280 Cal.)";

    cout << FirstEntree << "\n\n";
  }

  else
  {

    FirstEntree = "1.Chicken Tenders Basket                              (1150 Cal.)";

    cout << FirstEntree << "\n\n";
  }
  return FirstEntree;
}

//Name: EntreeNo2()
//Parameter: 0
//Returns: FirstEntree
//Label        Task                                                         Goto
//01          (start)                                                        02
//02          Initialize varIable 'z'                                        03
//03          Prompts user to select one of the Entrees                      04
//04          Reads in selected user entered in the variable 'z'             05
//05          Initialize a string variable name 'SecondEntree'               06
//06          Checks the the input for corresponding Appetizer selection     07
//07          Matched input stores in 'SecondEntree' varibale                08
//08          Prints 'SecondEntree'                                          09
//09          Retuns 'SecondEntree'                                          10
//10          (exit)

string EntreeNo2()
{

  int z;

  cout << "Choose your second Entree: ";

  cin >> z;

  string SecondEntree;

  if (z == 1)
  {
    SecondEntree = "1.Chicken Tenders Basket                              (1150 Cal.)";

    cout << SecondEntree << "\n\n";
  }

  else if (z == 2)
  {
    SecondEntree = "2.Oriental Chicken Salad                              (1420 Cal.)";

    cout << SecondEntree << "\n\n";
  }

  else if (z == 3)
  {
    SecondEntree = "3.Firecracker Shrimp Cavatappi                        (1970 Cal.)     [Plus 3.50]";

    cout << SecondEntree << "\n\n";
  }

  else if (z == 4)
  {
    SecondEntree = "4.The American Standard                               (1010 Cal.)";

    cout << SecondEntree << "\n\n";
  }

  else if (z == 5)
  {
    SecondEntree = "5.Blackened Tilapia                                   (510 Cal.)";

    cout << SecondEntree << "\n\n";
  }

  else if (z == 6)
  {
    SecondEntree = "6.Whisky Bacon Burger                                 (1240 Cal.)";

    cout << SecondEntree << "\n\n";
  }

  else if (z == 7)
  {
    SecondEntree = "7.Double-Glazed Baby Back Ribs - Half Rack            (550 Cal.)      [Plus 3.50]";

    cout << SecondEntree << "\n\n";
  }

  else if (z == 8)
  {
    SecondEntree = "8.Cedar Grilled Lemon Chicken                         (580 Cal.)";

    cout << SecondEntree << "\n\n";
  }

  else if (z == 9)
  {
    SecondEntree = "9.Fiesta Lime Chicken                                 (1140 Cal.)";

    cout << SecondEntree << "\n\n";
  }

  else if (z == 10)
  {
    SecondEntree = "10.Three-Cheese Chicken Cavatappi                     (1280 Cal.)";

    cout << SecondEntree << "\n\n";
  }

  else
  {
    SecondEntree = "1.Chicken Tenders Basket                              (1150 Cal.)";

    cout << SecondEntree << "\n\n";
  }

  return SecondEntree;
}




string a =  DisplayAppetizer(); // Assigns DisplayAppetizer() function in a string variable 'a'

string b =  EntreeNo1();  // Assigns EntreeNo1() function in a string variable 'b'

string c = EntreeNo2(); //// Assigns EntreeNo2() function in a string variable 'c'


//Name: total()
//Parameter: 0
//Returns: Nothing
//Label        Task                                                                       Goto
//01          (start)                                                                     02
//02          Initialize a float varIable 'subtotal' assigned value '20'                  03
//03          Checks the condition if user seleted no.3 or 7 to extra add $3.50 for each  04
//04          Stores subtotal with additional $3.50 or $7 in 'subtotal' variable          05
//05          Initialize two float variable named 'Total' and 'tax'                       06
//06          Assign 8.87% tax of subtotal in the 'tax' variable                          07
//07          Calcultes Total Assigning sum of 'subtotal' and 'tax' in 'Total' variable   08
//08          Initialize a file named 'receipt'                                           09
//09          Create a file named "receipt.txt"                                           10
//10          Checks condition if the "receipt.txt" file is_open                          11
//11          /fixed decimal numbers to two decimal places/ in the receipt.txt file       12
//12          Prints /~______________________Applebee's Receipt______________________~/   13
//13          Prints the values of 'a', 'b', and 'c' in receipt.txt file                  14
//14          Prints 'subtotal', 'tax', and 'Total' amount in the receipt.txt file        15
//15          Prints Gratuities messages and calculates 15%, 18% and 20% of 'Total'       16
//16          Prints"~_______________________Have Great Day!_______________________~"     17
//17          Closes the file receipt.txt                                                 18
//18          /fixed decimal numbers to two decimal places/ for the outputs               19
//19          Prints /~______________________Applebee's Receipt______________________~/   20
//20          Prints the values of 'a', 'b', and 'c' in output                            21
//21          Prints 'subtotal', 'tax', and 'Total' amount in output       22
//22          Prints Gratuities messages and calculates 15%, 18% and 20% of 'Total'       23
//23          Prints"~_______________________Have Great Day!_______________________~"     24
//24          (exit)                                                25         


void total()
{

  float subtotal = 20;

  if((b == "3.Firecracker Shrimp Cavatappi                        (1970 Cal.)     [Plus 3.50]") || (b == "7.Double-Glazed Baby Back Ribs - Half Rack            (550 Cal.)      [Plus 3.50]"))
  {
    if((c == "3.Firecracker Shrimp Cavatappi                        (1970 Cal.)     [Plus 3.50]") || (c == "7.Double-Glazed Baby Back Ribs - Half Rack            (550 Cal.)      [Plus 3.50]"))
    {
      subtotal = subtotal + (3.50*2);
    }
    else if ((c != "3.Firecracker Shrimp Cavatappi                        (1970 Cal.)     [Plus 3.50]") || (c != "7.Double-Glazed Baby Back Ribs - Half Rack            (550 Cal.)      [Plus 3.50]"))
    {
      subtotal = subtotal + 3.50;
    }
  }
  else if((b != "3.Firecracker Shrimp Cavatappi                        (1970 Cal.)     [Plus 3.50]") || (b != "7.Double-Glazed Baby Back Ribs - Half Rack            (550 Cal.)      [Plus 3.50]"))
  {
    if((c == "3.Firecracker Shrimp Cavatappi                        (1970 Cal.)     [Plus 3.50]") || (c == "7.Double-Glazed Baby Back Ribs - Half Rack            (550 Cal.)      [Plus 3.50]"))
    {
      subtotal = subtotal + 3.50;
    }
    else if ((c != "3.Firecracker Shrimp Cavatappi                        (1970 Cal.)     [Plus 3.50]") || (c != "7.Double-Glazed Baby Back Ribs - Half Rack            (550 Cal.)      [Plus 3.50]"))
    {
      subtotal = subtotal;
    }
  }


  float Total, tax;

  tax = subtotal*0.0887;

  Total = subtotal + tax;

  fstream receipt;

  receipt.open("receipt.txt", fstream::out);

  if(receipt.is_open())
  {
    receipt << fixed << setprecision(2);

    receipt<<"~______________________Applebee's Receipt______________________~\n\n";

    receipt << a <<"\n" << b << "\n" << c << "\n\n\n";

    receipt << "Subtotal (without tax) is:                             $" << subtotal << "\n";

    receipt << "Tax calculated:                                        $" << tax << "\n";

    receipt << "Total amount (including 8.87% tax) is:                 $" << Total << "\n\n";

    receipt <<"~___________________________Gratuity___________________________~" << "\n|15% -------------------------------------------------- $" << subtotal*0.15 << "|\n|18% -------------------------------------------------- $" << subtotal*0.18 << "|\n|20% -------------------------------------------------- $" << subtotal*0.20 <<"|";

    receipt <<"\n~_____________________________________________________________~\n";

    receipt << "~_______________________Have Great Day!_______________________~";
  }

  receipt.close();


    cout << fixed << setprecision(2);

    cout <<"~______________________Applebee's Receipt______________________~\n\n";

    cout << a <<"\n" << b << "\n" << c << "\n\n\n";

    cout << "Subtotal (without tax) is:                             $" << subtotal << "\n";

    cout << "Tax calculated:                                        $" << tax << "\n";

    cout << "Total amount (including 8.87% tax) is:                 $" << Total << "\n\n";

    cout <<"#___________________________Gratuity__________________________#" << "\n|15% -------------------------------------------------- $" << subtotal*0.15 << "|\n|18% -------------------------------------------------- $" << subtotal*0.18 << "|\n|20% -------------------------------------------------- $" << subtotal*0.20 << "|";

    cout <<"\n#_____________________________________________________________#\n";

    cout << "~_______________________Have Great Day!_______________________~";
}


#endif
