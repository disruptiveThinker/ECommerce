// DeliveryMgmtLibrary.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "DeliveryMgmtLibrary.h"
#include <iostream>
#include "../ConcessionsLibrary/ConcessionsLibrary.h"
#include "../CoreLibrary/CoreLibrary.h"
#include "../PaymentGatewayLibrary/PaymentGatewayLibrary.h"
#include "../ProductsLibrary/ProductsLibrary.h"
#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;


// This is an example of an exported variable
DELIVERYMGMTLIBRARY_API int nDeliveryMgmtLibrary=0;

// This is an example of an exported function.
DELIVERYMGMTLIBRARY_API int fnDeliveryMgmtLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CDeliveryMgmtLibrary::CDeliveryMgmtLibrary()
{
    return;
}

void CDeliveryMgmtLibrary::callDeliveryMgmtLibrary() {

    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(".");
    gen.add_messages_domain("hello");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    //locale::global(gen("."));
    cout.imbue(locale());

    std::cout << "\n";
    cout << translate("start", "Delivery Management Library Calls Start") << endl;
    cout << translate("libMsg", "This is a message from the Delivery Management Library") << endl;
    CConcessionsLibrary::callConcessionsLibrary();
    CCoreLibrary::callCoreLibrary();
    CPaymentGatewayLibrary::callPaymentsGatewayLibrary();
    CProductsLibrary::callProductsLibrary();
    cout << translate("end", "Delivery Management Library Calls End") << endl;
    std::cout << "\n";
}
