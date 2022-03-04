// UILibrary.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "UILibrary.h"
#include <iostream>
#include "../PaymentGatewayLibrary/PaymentGatewayLibrary.h"
#include "../PurchaseHistoryLibrary/PurchaseHistoryLibrary.h"
#include "../ProductsLibrary/ProductsLibrary.h"
#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;


// This is an example of an exported variable
UILIBRARY_API int nUILibrary=0;

// This is an example of an exported function.
UILIBRARY_API int fnUILibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CUILibrary::CUILibrary()
{
    return;
}

void CUILibrary::callUILibrary() {
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(".");
    gen.add_messages_domain("hello");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    //locale::global(gen("."));
    cout.imbue(locale());

    std::cout << "\n";
    cout << translate("start", "UI Library Calls Start") << endl;
    cout << translate("libMsg", "This is a message from the UI Library") << endl;
    CPaymentGatewayLibrary::callPaymentsGatewayLibrary();
    CPurchaseHistoryLibrary::callPurchaseHistoryLibrary();
    CProductsLibrary::callProductsLibrary();
    cout << translate("end", "UI Library Calls End") << endl;
    std::cout << "\n";
}
