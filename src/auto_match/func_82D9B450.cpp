// hkpBallSocketChainData's scalar deleting destructor: it calls the out-of-line destructor (fn_82D9B138,
// ??1hkpBallSocketChainData@@UAA@XZ) and frees through the class allocator. The function below only makes the
// compiler emit the vtable, and with it the deleting destructor; the finish constructor is out of line now, so it
// uses the implicit copy constructor.
#include "havok/hkBase.h"
#include "havok/hkpBallSocketChainData.h"

void emitVtable_82D9B450(void *p, const hkpBallSocketChainData &o) { new (p) hkpBallSocketChainData(o); }
