// The singleton creation function for hkTraceStream (HK_SINGLETON_IMPLEMENTATION, static in Havok; its hkSingletonInitNode lbl_831BCCC0 points to it): new hkTraceStream. The function name is a guess.
// hkTraceStream (Common/Base/System/Io/OStream/hkTraceStream.h? 0x1C bytes):
// hkReferencedObject and the (empty) hkSingleton<hkTraceStream> at +0x8 (RTTI).
// The list of 32-byte titles at +0x10 matches the implicit destructor shared
// with hkpMultiRayShape (fn_82D3A990). The two words at +0x8 and +0xC are
// cleared in the constructor body; their names are not known.
#include "havok/hkBase.h"
#include "havok/hkTraceStream.h"

hkReferencedObject *HK_CALL createhkTraceStream() { return new hkTraceStream(); }
