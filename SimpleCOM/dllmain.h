// dllmain.h : Declaration of module class.

class CSimpleCOMModule : public CAtlDllModuleT< CSimpleCOMModule >
{
public :
	DECLARE_LIBID(LIBID_SimpleCOMLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SIMPLECOM, "{43C4E396-B23D-44C4-94E2-619152624EBF}")
};

extern class CSimpleCOMModule _AtlModule;
