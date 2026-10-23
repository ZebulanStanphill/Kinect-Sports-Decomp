// hkpSingleShapeContainer scalar deleting destructor ??_GhkpSingleShapeContainer@@UAAPAXI@Z. Its operator delete does nothing (placement allocator), so it ignores its flags. The function below only makes the compiler emit the vtable.
#include "havok/hkpShape.h"

void emitVtable_82D391E8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpSingleShapeContainer(f); }
