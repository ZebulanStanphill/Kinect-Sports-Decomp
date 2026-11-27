// hkpGskManifold (Physics/Internal/Collide/Gjk/GskManifold/hkpGskManifold.h, Havok's path): the contact points
// that a GSK agent keeps between frames. hkpGskfAgent holds one at +0x30 (to the end of the agent, 0x50 bytes);
// the convex list agent3 keeps one after its hkpGskCache in the agent data (82D5B3B0 reads m_numContactPoints at
// +0xE of the data).
// The layout is the game's: four counts, then the contact points, 8 bytes each (hkpGskfAgent's removePoint
// 82D75710, commitPotential 82D75758 and createZombie 82D757A0 search the ids at +0x6 + 8 * i of the manifold,
// up to m_numContactPoints; createZombie clears the two dimensions in front of the id). The vertex ids of the
// points follow the used contact points in the rest of the storage: fn_82DD8618 (removing point i) moves the
// last point into slot i and moves the (m_numVertsA + m_numVertsB + 1) / 2 words of vertex ids down by 8. So
// m_contactPoints is the first part of a variable-length buffer, and only its size (to the end of the agent) is
// known. The member names follow Havok's header.
// The counts are cleared with one word store: hkpGskfAgent's constructor (82D757E8) constructs the manifold
// with it after the vtable store (a scalar initialiser or a store in the agent's constructor body is
// scheduled before the vtable store), and the convex list agent3 (82D5B3B0) calls init().
#ifndef HAVOK_HKPGSKMANIFOLD_H
#define HAVOK_HKPGSKMANIFOLD_H

#include "havok/hkBase.h"

typedef hkUint16 hkContactPointId;   // as in hkpCollisionAgent.h, which a manifold does not need

struct hkpGskManifold {
    struct ContactPoint {
        hkUint8 m_dimA;             // +0x0
        hkUint8 m_dimB;             // +0x1
        hkContactPointId m_id;      // +0x2
        hkUint32 m_data4;           // +0x4, not known (fn_82DD8618 moves it with the point)
    };

    HK_FORCE_INLINE hkpGskManifold() : m_header(0) {}
    HK_FORCE_INLINE void init() { m_header = 0; }

    union {
        struct {
            hkUint8 m_numVertsA;          // +0x0
            hkUint8 m_numVertsB;          // +0x1
            hkUint8 m_numContactPoints;   // +0x2
            hkUint8 m_marker;             // +0x3
        };
        hkUint32 m_header;   // the four counts as one word
    };
    ContactPoint m_contactPoints[4];   // +0x4
    hkUint32 m_storage[11];            // +0x24: the rest of the vertex id buffer (to +0x50, the end of hkpGskfAgent)
};

#endif
