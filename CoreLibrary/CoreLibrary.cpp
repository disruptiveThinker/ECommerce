// CoreLibrary.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "CoreLibrary.h"
#include <iostream>
#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;


// This is an example of an exported variable
CORELIBRARY_API int nCoreLibrary=0;

// This is an example of an exported function.
CORELIBRARY_API int fnCoreLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CCoreLibrary::CCoreLibrary()
{
    return;
}

void CCoreLibrary::callCoreLibrary() {

    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(".");
    gen.add_messages_domain("hello");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    //locale::global(gen("."));
    cout.imbue(locale());

    std::cout << "\n";
    cout << translate("start", "Core Library Calls Start") << endl;
    cout << translate("libMsg", "This is a message from the Core Library") << endl;
    cout << translate("end", "Core Library Calls End") << endl;
    std::cout << "\n";
}