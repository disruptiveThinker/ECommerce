// PurchaseHistoryLibrary.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "PurchaseHistoryLibrary.h"
#include <iostream>
#include "../CoreLibrary/CoreLibrary.h"
#include "../DeliveryMgmtLibrary/DeliveryMgmtLibrary.h"
#include "../ProductsLibrary/ProductsLibrary.h"
#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;


// This is an example of an exported variable
PURCHASEHISTORYLIBRARY_API int nPurchaseHistoryLibrary=0;

// This is an example of an exported function.
PURCHASEHISTORYLIBRARY_API int fnPurchaseHistoryLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CPurchaseHistoryLibrary::CPurchaseHistoryLibrary()
{
    return;
}

void CPurchaseHistoryLibrary::callPurchaseHistoryLibrary() {
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(".");
    gen.add_messages_domain("hello");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    //locale::global(gen("."));
    cout.imbue(locale());

    std::cout << "\n";
    cout << translate("start", "Purchase History Library Calls Start") << endl;
    cout << translate("libMsg", "This is a message from the Purchase History Library") << endl;
    CCoreLibrary::callCoreLibrary();
    CDeliveryMgmtLibrary::callDeliveryMgmtLibrary();
    CProductsLibrary::callProductsLibrary();
    cout << translate("end", "Purchase History Library Calls End") << endl;
    std::cout << "\n";
}
