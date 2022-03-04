// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the PRODUCTSLIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// PRODUCTSLIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef PRODUCTSLIBRARY_EXPORTS
#define PRODUCTSLIBRARY_API __declspec(dllexport)
#else
#define PRODUCTSLIBRARY_API __declspec(dllimport)
#endif

// This class is exported from the dll
class PRODUCTSLIBRARY_API CProductsLibrary {
public:
	CProductsLibrary(void);
	// TODO: add your methods here.

	static void callProductsLibrary();
};

extern PRODUCTSLIBRARY_API int nProductsLibrary;

PRODUCTSLIBRARY_API int fnProductsLibrary(void);
