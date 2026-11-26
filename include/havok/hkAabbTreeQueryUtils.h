// hkAabbTreeQueryUtils<BOUNDING_VOLUME, IDX> (Common/Internal/Collide/Tree/AabbTree): the queries over an
// hkAabbTree and the collector interfaces they report to. The game has the interfaces for all four trees
// (hkAabbTreeAabb or hkAabbTreeAabb16 volumes, unsigned int or unsigned short indices: ??_7Collector@...), and
// TreeTreeCollector and the two concrete collectors only for <hkAabbTreeAabb, unsigned int>.
//
// The interfaces have no base class (RTTI), so their deleting destructors free through the global operator
// delete, fn_8265CA20. Each vtable is the deleting destructor and one pure slot (_purecall); the concrete
// collectors fill it:
//  - Collector's slot is called by the query (82D38600) for each leaf whose volume overlaps, with the leaf
//    node; it returns a real, and the query stops when it returns 0. AllHitsNodeCollector's (82D2B7D0)
//    appends the node to its array and returns 1.
//  - TreeTreeCollector's slot gets two nodes; TreeTreeNodePairCollector's (82D2B850) appends the pair.
// The two slots are pure in the game; they are plain virtual functions here so that a unit can construct a
// subclass without declaring them (the units' code is the same; only the interfaces' own vtables would name the
// functions instead of _purecall). ClosestPointCollector (abstract in the game: its vtable keeps the pure slot)
// is not declared: no unit needs it.
// The names of the slots are the units' guesses; the class names are the game's (all four are structs).
#ifndef HAVOK_HKAABBTREEQUERYUTILS_H
#define HAVOK_HKAABBTREEQUERYUTILS_H

#include "havok/hkAabbTree.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

template <typename BOUNDING_VOLUME, typename IDX>
class hkAabbTreeQueryUtils {
public:
    typedef typename hkAabbTree<BOUNDING_VOLUME, IDX>::Node Node;

    struct NodePair {
        const Node *m_a;   // +0x0
        const Node *m_b;   // +0x4
    };

    struct Collector {
        static void operator delete(void *p) { fn_8265CA20(p); }
        virtual ~Collector() {}
        virtual hkReal processLeaf(const Node *leaf);
    };

    struct TreeTreeCollector {
        static void operator delete(void *p) { fn_8265CA20(p); }
        virtual ~TreeTreeCollector() {}
        virtual void processPair(const Node *a, const Node *b);
    };

    // Collects every leaf the query reports (vtable: Collector's deleting destructor, then 82D2B7D0).
    struct AllHitsNodeCollector : public Collector {
        HK_FORCE_INLINE AllHitsNodeCollector(hkArray<const Node *> &hits) : m_hits(&hits) {}
        virtual hkReal processLeaf(const Node *leaf);

        hkArray<const Node *> *m_hits;   // +0x4
    };

    // Collects every pair of nodes (vtable: TreeTreeCollector's deleting destructor, then 82D2B850).
    struct TreeTreeNodePairCollector : public TreeTreeCollector {
        HK_FORCE_INLINE TreeTreeNodePairCollector(hkArray<NodePair> &pairs) : m_pairs(&pairs) {}
        virtual void processPair(const Node *a, const Node *b);

        hkArray<NodePair> *m_pairs;   // +0x4
    };
};

#endif
