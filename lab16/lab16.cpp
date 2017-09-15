//Created By: Chris Eheler
//Created On: 9/12/2017
//This program is designed to take user input and create a stock portfolio
 
 #include <iostream>
 #include <string>
 using namespace std;
 
 struct Stock{                                                                     // Creating my struct for Stocks
  string stock_name;
  string sector;
  double current_price;                                                            //Double for costs as they are a decimal number
  int number_owned;                                                                //Integer because you can only own whole numbers of stocks

 };                                                    
 
 
 
 int main()
 {
   Stock stockA;                                                                   //Initializing all of the stock variables indidually
   stockA.stock_name = "";
   stockA.sector = "";
   stockA.current_price = 0.0;
   stockA.number_owned = 0;
  
   Stock stockC;
   stockC.stock_name = "";
   stockC.sector = "";
   stockC.current_price = 0.0;
   stockC.number_owned = 0;
   
   Stock stockF;
   stockF.stock_name = "";
   stockF.sector = "";
   stockF.current_price = 0.0;
   stockF.number_owned = 0;
   
   Stock stockI;
   stockI.stock_name = "";
   stockI.sector = "";
   stockI.current_price = 0.0;
   stockI.number_owned = 0;
   
   Stock stockT;
   stockT.stock_name = "";
   stockT.sector = "";
   stockT.current_price = 0.0;
   stockT.number_owned = 0;
   
   Stock stockM;
   stockM.stock_name = "";
   stockM.sector = "";
   stockM.current_price = 0.0;
   stockM.number_owned = 0;
   
   cout << "On all input use NO spaces lest you enjoy nonsensical output!" << endl;              //Getting my users info about their stocks
   cout << "Please input the name of your first stock: ";
   cin >> stockA.stock_name;
   cout << "Please input the sector of your " << stockA.stock_name << " stock: ";
   cin >> stockA.sector;
   cout << "Please input the current price of your " << stockA.stock_name << " stock: ";
   cin >> stockA.current_price;
   cout << "Please input the number of " << stockA.stock_name << " stock that you own: ";
   cin >> stockA.number_owned;
   
   cout << "Please input the name of your next stock: ";
   cin >> stockC.stock_name;
   cout << "Please input the sector of your " << stockC.stock_name << " stock: ";
   cin >> stockC.sector;
   cout << "Please input the current price of your " << stockC.stock_name << " stock: ";
   cin >> stockC.current_price;
   cout << "Please input the number of " << stockC.stock_name << " stock that you own: ";
   cin >> stockC.number_owned;
   
   cout << "Please input the name of your next stock: ";
   cin >> stockF.stock_name;
   cout << "Please input the sector of your " << stockF.stock_name << " stock: ";
   cin >> stockF.sector;
   cout << "Please input the current price of your " << stockF.stock_name << " stock: ";
   cin >> stockF.current_price;
   cout << "Please input the number of " << stockF.stock_name << " stock that you own: ";
   cin >> stockF.number_owned;
   
   cout << "Please input the name of your next stock: ";
   cin >> stockI.stock_name;
   cout << "Please input the sector of your " << stockI.stock_name << " stock: ";
   cin >> stockI.sector;
   cout << "Please input the current price of your " << stockI.stock_name << " stock: ";
   cin >> stockI.current_price;
   cout << "Please input the number of " << stockI.stock_name << " stock that you own: ";
   cin >> stockI.number_owned;
   
   cout << "Please input the name of your next stock: ";
   cin >> stockT.stock_name;
   cout << "Please input the sector of your " << stockT.stock_name << " stock: ";
   cin >> stockT.sector;
   cout << "Please input the current price of your " << stockT.stock_name << " stock: ";
   cin >> stockT.current_price;
   cout << "Please input the number of " << stockT.stock_name << " stock that you own: ";
   cin >> stockT.number_owned;
   
   cout << "Please input the name of your next stock: ";
   cin >> stockM.stock_name;
   cout << "Please input the sector of your " << stockM.stock_name << " stock: ";
   cin >> stockM.sector;
   cout << "Please input the current price of your " << stockM.stock_name << " stock: ";
   cin >> stockM.current_price;
   cout << "Please input the number of " << stockM.stock_name << " stock that you own: ";
   cin >> stockM.number_owned;
   
   cout <<"Stock Name          No of Shares          Current Value          Total Value" << endl;                         //Creating an output table
   cout <<"----------          -------------         -------------          -----------" << endl;
   cout << stockA.stock_name << "                " << stockA.number_owned << "                ";
   cout << stockA.current_price << "                " << stockA.current_price * stockA.number_owned << endl;
   cout << stockC.stock_name << "                " << stockC.number_owned << "                ";
   cout << stockC.current_price << "                " << stockC.current_price * stockC.number_owned << endl;
   cout << stockF.stock_name << "                " << stockF.number_owned << "                ";
   cout << stockF.current_price << "                " << stockF.current_price * stockF.number_owned << endl;
   cout << stockI.stock_name << "                " << stockI.number_owned << "                ";
   cout << stockI.current_price << "                " << stockI.current_price * stockI.number_owned << endl;
   cout << stockT.stock_name << "                " << stockT.number_owned << "                ";
   cout << stockT.current_price << "                " << stockT.current_price * stockT.number_owned << endl;
   cout << stockM.stock_name << "                " << stockM.number_owned << "                ";
   cout << stockM.current_price << "                " << stockM.current_price * stockM.number_owned << endl;
   cout << "Total portfolio: $" << (stockA.current_price * stockA.number_owned) + (stockC.current_price * stockC.number_owned)
   + (stockF.current_price * stockF.number_owned) + (stockI.current_price * stockI.number_owned) + (stockT.current_price * stockT.number_owned)
   + (stockM.current_price * stockM.number_owned);                                                                       //Creating a total
   
 }