// hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, hkUint32> scalar deleting destructor (the one slot of
// ??_7?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@I@@6B@). hkAabbTree has no base class (RTTI) and Havok's
// non-virtual class allocator (0x80 bytes). Its inline destructor calls the 32-bit tree's out-of-line clear
// (fn_82D34CA8), then the node storage at +0x1c is destroyed out of line (fn_82D1E718); both are explicit
// specialisations in havok/hkAabbTree.h. The function below only makes the compiler emit the vtable, and with
// it the deleting destructor, as for the 16-bit tree (func_82D35270).
#include "havok/hkBase.h"
#include "havok/hkAabbTree.h"

void emitVtable_82D1E7C0(hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, hkUint32> *p)
{
    p->hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, hkUint32>::~hkAabbTree();
}
