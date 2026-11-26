// hkAabbTree<hkAabbTreeData::hkAabbTreeAabb16, hkUint16> scalar deleting destructor. hkAabbTree has no
// base class (RTTI) and Havok's non-virtual class allocator (0x80 bytes: the class is 16-byte aligned
// for its hkVector4 members, so the first member follows the vtable at +0x10). Its destructor resets the
// tree (the inlined stores; the node storage's own clear() keeps the vtable store first), then the node
// storage at +0x1c is destroyed out of line (fn_82D34F48: two hkArrays, nodes of 0x14 bytes and a free
// list of IDX). The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkAabbTree.h"

void emitVtable_82D35270(hkAabbTree<hkAabbTreeData::hkAabbTreeAabb16, hkUint16> *p)
{
    p->hkAabbTree<hkAabbTreeData::hkAabbTreeAabb16, hkUint16>::~hkAabbTree();
}
