// ProductsLibrary.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "ProductsLibrary.h"
#include <iostream>
#include "../CoreLibrary/CoreLibrary.h"
#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;


// This is an example of an exported variable
PRODUCTSLIBRARY_API int nProductsLibrary=0;

// This is an example of an exported function.
PRODUCTSLIBRARY_API int fnProductsLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CProductsLibrary::CProductsLibrary()
{
    return;
}

void CProductsLibrary::callProductsLibrary() {
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(".");
    gen.add_messages_domain("hello");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    //locale::global(gen("."));
    cout.imbue(locale());

    std::cout << "\n";
    cout << translate("start", "Products Library Calls Start") << endl;
    cout << translate("libMsg", "This is a message from the Products Library") << endl;
    CCoreLibrary::callCoreLibrary();
    cout << translate("end", "Products Library Calls End") << endl;
    std::cout << "\n";
}
