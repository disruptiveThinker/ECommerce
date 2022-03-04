// PaymentGatewayLibrary.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "PaymentGatewayLibrary.h"
#include <iostream>
#include "../CoreLibrary/CoreLibrary.h"
#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;


// This is an example of an exported variable
PAYMENTGATEWAYLIBRARY_API int nPaymentGatewayLibrary=0;

// This is an example of an exported function.
PAYMENTGATEWAYLIBRARY_API int fnPaymentGatewayLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CPaymentGatewayLibrary::CPaymentGatewayLibrary()
{
    return;
}

void CPaymentGatewayLibrary::callPaymentsGatewayLibrary() {
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(".");
    gen.add_messages_domain("hello");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    //locale::global(gen("."));
    cout.imbue(locale());

    std::cout << "\n";
    cout << translate("start", "Payment Gateway Library Calls Start") << endl;
    cout << translate("libMsg", "This is a message from the Payment Gateway Library") << endl;
    CCoreLibrary::callCoreLibrary();
    cout << translate("end", "Payment Gateway Library Calls End") << endl;
    std::cout << "\n";
}
