/* Created By: Chris Eheler
 * Created On: 10/24/2017
 * This program will create the Temperature Converter class
 */
 
#include<iostream>
using namespace std;

class TemperatureConverter{
    
    public:
    void SetTempFromKelvin( double kelvin_);
    void SetTempFromCelsius(double celsius_);
    void SetTempFromFahrenheit(double farenheit_);
    void PrintTemperatures() const;
    double GetTempFromKelvin() const;
    double GetTempAsFahrenheit() const;
    double GetTempAsCelsius() const;
    
    TemperatureConverter();
    TemperatureConverter(double kelvin_in);
    
    private:
    double kelvin_;
    
};

TemperatureConverter::TemperatureConverter()
{
    kelvin_ = 0.0;
    return;
}

TemperatureConverter::TemperatureConverter(double kelvin_in)
{
    if (kelvin_in >= 0){
    kelvin_ = kelvin_in;
    }
    else {
        cout << "Please enter a vaild temperature above 0 degrees";
    }
    return;
}

void TemperatureConverter::SetTempFromKelvin(double kelvin_in){
    kelvin_ = kelvin_in;
    return;
}

void TemperatureConverter::SetTempFromCelsius(double celsius_in){
    kelvin_ = celsius_in +273.15;
    return;
}

void TemperatureConverter::SetTempFromFahrenheit(double farenheit_in){
    kelvin_ = (5 * ((farenheit_in - 32)/9)) + 273.15;
    return;
}

double TemperatureConverter::GetTempFromKelvin() const {
    return kelvin_;
}

double TemperatureConverter::GetTempAsCelsius() const {
    return kelvin_ - 273.15;
}


double TemperatureConverter::GetTempAsFahrenheit() const {
    return ((9 * GetTempAsCelsius() / 5) + 32 );
}

void TemperatureConverter::PrintTemperatures() const {
    cout << "The temperature in kelvin is: " << GetTempFromKelvin() << endl;
    cout << "The temperature in Celsius is: " << GetTempAsCelsius() << endl;
    cout << "The temperature in Farenheiet is: " << GetTempAsFahrenheit() << endl;
}

int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}
