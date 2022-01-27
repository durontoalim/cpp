#include <iostream>
#include <string>
#include <cmath>

using namespace std ;

int main()
{

    int a = 20;
    float b = 20.43;

    double c = 30.345;

    char d = 'A' ;

    string strng = " hewewgwegew " ;

    cout << a << " ";
    cout << b << " ";
    cout << c << " ";

    cout << d << " ";
    cout << strng;

    cout << (a> 15 && b<25);

    //String Length


    string str_length = "Hello" ;

    cout << str_length.length() << " ";

    cout << str_length.size() << " \n";

    //access string

    string my_access_string = "My access String";

    cout << my_access_string[6]<< "\n";

    my_access_string[0] = 'D';

    cout << my_access_string << " \n";

// Omitting Namespace

    std:: string omitting = "hello" ;

    std:: cout << omitting << " \n" ;


// Math

    // MIN AND MAX

    cout << max(5,6) << " \n" ;
    cout << min(5,6) << " \n" ;
    cout << sqrt(64) << " \n" ;
    cout << log(8) << " \n";

// Create refference

    string food = "Pizza";
    string &meal = food;

    string* str = &food;

    cout << food << "\n";
    cout << meal << " \n";
    cout << str << " \n";
    cout << *str << " \n";








    return 0;
}
