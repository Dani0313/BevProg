#include "../std_lib_facilities.h"

int main()
{
         cout << "Enter the name of the person you want to write to.(followed by 'enter'):\n";
         string first_name;
         cin >> first_name;
         cout << "Enter the name of another friend (followe by 'enter').\n";
         string friend_name;
         cin >> friend_name;
         cout << "Friend's sex ('m' for male, 'f' for female):\n";
         char friend_sex = 0;
         cin >> friend_sex;
         cout << "Enter your friend's age:\n";
         int age;
         cin >> age;

         if(age < 1 || age > 109)
            simple_error("You're kidding!");


         cout << "Dear, " << first_name << "!\n" << "\tHow are you? I'm fine.\n";
         cout << "Have you seen " << friend_name << " lately?\n";
         if(friend_sex == 'f')         
                cout << "If you see " << friend_name << " please ask her to call me.\n";

         if(friend_sex == 'm')
                cout << "If you see " << friend_name << " please ask him to call me.\n";

        cout << "I hear you just had a birthday an you are " << age << " years old.\n";

        if(age < 12)
            cout << "Next year you will be " << age+1 << ".\n";
        else if(age == 17)
            cout << "Next year you will be able to vote.\n";
        else if(age > 70)
            cout << "I hope you are enjoying retirement.\n";

        cout << "Yours sincerely\n\n\n" << "Name" << "\n";

        return 0;
}