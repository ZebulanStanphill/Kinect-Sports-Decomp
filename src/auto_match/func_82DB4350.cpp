// hkpEndOfStepCallbackUtil::~hkpEndOfStepCallbackUtil, the implicit destructor emitted out of line: the three
// arrays in reverse order, then hkpWorldPostSimulationListener's and hkReferencedObject's parts. The function
// at the end only makes the compiler emit the vtable, which pulls in the deleting destructor and this
// destructor; the declared constructor is out of line, so it uses the implicit copy constructor.
#include "havok/hkBase.h"
#include "havok/hkpEndOfStepCallbackUtil.h"

void emitVtable_82DB4350(void *p, const hkpEndOfStepCallbackUtil &o) { new (p) hkpEndOfStepCallbackUtil(o); }
