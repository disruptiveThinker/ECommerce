// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the PAYMENTGATEWAYLIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// PAYMENTGATEWAYLIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef PAYMENTGATEWAYLIBRARY_EXPORTS
#define PAYMENTGATEWAYLIBRARY_API __declspec(dllexport)
#else
#define PAYMENTGATEWAYLIBRARY_API __declspec(dllimport)
#endif

// This class is exported from the dll
class PAYMENTGATEWAYLIBRARY_API CPaymentGatewayLibrary {
public:
	CPaymentGatewayLibrary(void);
	// TODO: add your methods here.

	static void callPaymentsGatewayLibrary();
};

extern PAYMENTGATEWAYLIBRARY_API int nPaymentGatewayLibrary;

PAYMENTGATEWAYLIBRARY_API int fnPaymentGatewayLibrary(void);
