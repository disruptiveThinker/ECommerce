// ConcessionsLibrary.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "ConcessionsLibrary.h"
#include <iostream>
#include "../CoreLibrary/CoreLibrary.h"
#include "../ProductsLibrary/ProductsLibrary.h"
#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;

// This is an example of an exported variable
CONCESSIONSLIBRARY_API int nConcessionsLibrary=0;

// This is an example of an exported function.
CONCESSIONSLIBRARY_API int fnConcessionsLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CConcessionsLibrary::CConcessionsLibrary()
{
    return;
}

void CConcessionsLibrary::callConcessionsLibrary() {
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(".");
    gen.add_messages_domain("hello");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    //locale::global(gen("."));
    cout.imbue(locale());

    std::cout << "\n";
    cout << translate("start", "Concessions Library Calls Start") << endl;
    cout << translate("libMsg", "This is a message from the Concessions Library") << endl;
    CCoreLibrary::callCoreLibrary();
    CProductsLibrary::callProductsLibrary();
    cout << translate("end", "Concessions Library Calls End") << endl;
    std::cout << "\n";
}
