// hkpCdVertex (Physics/Collide/Shape/Convex/hkpCdVertex.h): a vertex of a
// convex shape as the GSK algorithm takes it, an hkVector4 whose w holds the
// vertex id. hkpConvexShape::getSupportingVertex and convertVertexIdsToVertices
// write these.
#ifndef HAVOK_HKPCDVERTEX_H
#define HAVOK_HKPCDVERTEX_H

#include "havok/hkVector4.h"

class hkpCdVertex : public hkVector4 {
};

#endif
