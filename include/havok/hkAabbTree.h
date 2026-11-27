// hkAabbTree<BOUNDING_VOLUME, IDX> (Common/Internal/Collide/Tree/AabbTree), 0x80 bytes: a bounding volume tree
// whose nodes live in an array. The game instantiates it as hkAabbTree<hkAabbTreeAabb, hkUint32> (hkgpMesh's
// tree, its deleting destructor is 82D1E7C0) and hkAabbTree<hkAabbTreeAabb16, hkUint16> (the tree broad phase's,
// 82D35270). RTTI: no base class; the vtable is the deleting destructor alone.
//
// The layout is the game's: the four vector members make the class 16-byte aligned, so the members after the
// vtable start at +0x10.
//  - clear() (inline in the 16-bit tree's destructor 82D35270, out of line as 82D34CA8 for the 32-bit tree)
//    empties the two arrays of the node storage, then stores 0 at +0x10, the invalid index (0x7FFF / 0x7FFFFFFF)
//    at +0x14 and 0 at +0x18, in that order;
//  - the query (82D38600) starts its walk at the node +0x10 points to and returns at once when it is null, and
//    finds the other nodes as index * sizeof(Node) from the storage's node array (+0x1C);
//  - the constructors (82D34FF0, 82D35080) set the four vectors: offsets 0 and scales 1 for the 32-bit tree; the
//    given offsets and scale and the scale's reciprocal for the 16-bit tree.
// The names of the members at +0x14 and +0x18 and of the vectors are the units' guesses, not Havok's.
#ifndef HAVOK_HKAABBTREE_H
#define HAVOK_HKAABBTREE_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkAabbTreeData.h"

extern "C" {
void fn_82D34CA8(void *self);   // hkAabbTree<hkAabbTreeAabb, hkUint32>::clear
void fn_82D1E718(void *self);   // hkAabbTree<hkAabbTreeAabb, hkUint32>::Storage::~Storage
void fn_82D34F48(void *self);   // hkAabbTree<hkAabbTreeAabb16, hkUint16>::Storage::~Storage
}

template <typename BOUNDING_VOLUME, typename IDX>
class hkAabbTree {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkAabbTree);

    // A node: its volume, then four indices (0x30 bytes in the 32-bit tree, 0x14 in the 16-bit one). The query
    // (82D38600) reads m_indices[2]'s top bit as "is a leaf", takes m_indices[0] of an inner node as the child to
    // descend into and m_indices[3] as the next node to visit (0x7FFFFFFF: none). A leaf keeps its user data in
    // m_indices[0]: hkgpMesh's triangle tree keeps a triangle pointer there (82D229F0, 82D22B50, 82D28C88).
    struct Node {
        BOUNDING_VOLUME m_volume;   // +0x0
        IDX m_indices[4];           // +0x20 / +0xC
    };

    // The node storage: the nodes and a free list of node indices. Its destructor is out of line in the game, a
    // function for each tree (82D1E718, 82D34F48), so the arrays are declared as hkArrayBase here: the destructor
    // frees them, and the implicit destructor of an hkArray member would be inlined after it.
    struct Storage {
        ~Storage();
        void clear()
        {
            m_nodes.m_size = 0;
            m_free.m_size = 0;
        }
        hkArrayBase<Node> m_nodes;   // +0x0
        hkArrayBase<IDX> m_free;     // +0xC
    };

    // Both out of line in the game, each defined for one tree only: the default constructor of the 32-bit tree
    // (82D34FF0) and the 16-bit tree's (82D35080: offset low, offset high, scale).
    hkAabbTree();
    hkAabbTree(const hkVector4 &offsetLow, const hkVector4 &offsetHigh, const hkVector4 &scale);
    virtual ~hkAabbTree() { clear(); }

    void clear()
    {
        m_storage.clear();
        m_root = HK_NULL;
        m_firstFree = IDX(IDX(~IDX(0)) >> 1);
        m_numLeaves = 0;
    }

    Node *m_root;             // +0x10
    IDX m_firstFree;          // +0x14
    int m_numLeaves;          // +0x18
    Storage m_storage;        // +0x1C
    hkVector4 m_offsetLow;    // +0x40
    hkVector4 m_offsetHigh;   // +0x50
    hkVector4 m_scale;        // +0x60
    hkVector4 m_invScale;     // +0x70
};

// The 32-bit tree's clear() is out of line in the game (82D34CA8); its destructor calls it.
template <>
inline void hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, hkUint32>::clear()
{
    fn_82D34CA8(this);
}

template <>
inline hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, hkUint32>::Storage::~Storage()
{
    fn_82D1E718(this);
}

template <>
inline hkAabbTree<hkAabbTreeData::hkAabbTreeAabb16, hkUint16>::Storage::~Storage()
{
    fn_82D34F48(this);
}

#endif
