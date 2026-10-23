// hkAabbTree<hkAabbTreeData::hkAabbTreeAabb16, hkUint16> scalar deleting destructor. hkAabbTree has no
// base class (RTTI) and Havok's non-virtual class allocator (0x80 bytes: the class is 16-byte aligned
// for its hkVector4 members, so the first member follows the vtable at +0x10). Its destructor resets the
// tree (the inlined stores; the node storage's own clear() keeps the vtable store first), then the node
// storage at +0x1c is destroyed out of line (fn_82D34F48: two hkArrays, nodes of 0x14 bytes and a free
// list of IDX). The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    hkQuadReal m_quad;
};

extern "C" void fn_82D34F48(void *self);   // destructor of the node storage (two hkArrays)

struct hkAabbTreeData {
    struct hkAabbTreeAabb16 {
        hkUint16 m_min[3];
        hkUint16 m_max[3];
        hkUint32 m_pad;
    };
};

template <typename BOUNDING_VOLUME, typename IDX>
class hkAabbTree {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkAabbTree);

    struct Node {
        BOUNDING_VOLUME m_volume;
        IDX m_children[2];
    };
    struct Storage {
        void clear()
        {
            m_nodes.m_size = 0;
            m_free.m_size = 0;
        }
        ~Storage() { fn_82D34F48(this); }
        hkArrayBase<Node> m_nodes;   // +0x0
        hkArrayBase<IDX> m_free;     // +0xC
    };

    virtual ~hkAabbTree() { clear(); }

    void clear()
    {
        m_storage.clear();
        m_numLeaves = 0;
        m_root = IDX(0x7fff);
        m_depth = 0;
    }

    int m_numLeaves;          // +0x10
    IDX m_root;               // +0x14
    int m_depth;              // +0x18
    Storage m_storage;        // +0x1C
    hkVector4 m_vectors[4];   // +0x40
};

void emitVtable_82D35270(hkAabbTree<hkAabbTreeData::hkAabbTreeAabb16, hkUint16> *p)
{
    p->hkAabbTree<hkAabbTreeData::hkAabbTreeAabb16, hkUint16>::~hkAabbTree();
}
