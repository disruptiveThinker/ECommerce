// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the PURCHASEHISTORYLIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// PURCHASEHISTORYLIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef PURCHASEHISTORYLIBRARY_EXPORTS
#define PURCHASEHISTORYLIBRARY_API __declspec(dllexport)
#else
#define PURCHASEHISTORYLIBRARY_API __declspec(dllimport)
#endif

// This class is exported from the dll
class PURCHASEHISTORYLIBRARY_API CPurchaseHistoryLibrary {
public:
	CPurchaseHistoryLibrary(void);
	// TODO: add your methods here.

	static void callPurchaseHistoryLibrary();
};

extern PURCHASEHISTORYLIBRARY_API int nPurchaseHistoryLibrary;

PURCHASEHISTORYLIBRARY_API int fnPurchaseHistoryLibrary(void);
