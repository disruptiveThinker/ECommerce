// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DELIVERYMGMTLIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DELIVERYMGMTLIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DELIVERYMGMTLIBRARY_EXPORTS
#define DELIVERYMGMTLIBRARY_API __declspec(dllexport)
#else
#define DELIVERYMGMTLIBRARY_API __declspec(dllimport)
#endif

// This class is exported from the dll
class DELIVERYMGMTLIBRARY_API CDeliveryMgmtLibrary {
public:
	CDeliveryMgmtLibrary(void);
	// TODO: add your methods here.

	static void callDeliveryMgmtLibrary();
};

extern DELIVERYMGMTLIBRARY_API int nDeliveryMgmtLibrary;

DELIVERYMGMTLIBRARY_API int fnDeliveryMgmtLibrary(void);
