#include "havok/hkVector4.h"

// Havok: a point lies inside a triangle (within the tolerance) when the cross products of the
// point's corner vectors all point along the triangle normal.
extern "C" bool fn_82D1D378(const hkVector4 &p, const hkVector4 &a, const hkVector4 &b, const hkVector4 &c,
                            float tolerance)
{
    hkVector4 ab;
    hkVector4 ac;
    hkVector4 normal;

    ab.setSub4(b, a);
    ac.setSub4(c, a);
    normal.setCross(ab, ac);
    {
        hkVector4 pa;
        hkVector4 pb;
        hkVector4 cross;
        pa.setSub4(a, p);
        pb.setSub4(b, p);
        cross.setCross(pa, pb);
        if (cross.dot3(normal) < tolerance) {
            return false;
        }
    }
    {
        hkVector4 pb;
        hkVector4 pc;
        hkVector4 cross;
        pb.setSub4(b, p);
        pc.setSub4(c, p);
        cross.setCross(pb, pc);
        if (cross.dot3(normal) < tolerance) {
            return false;
        }
    }
    {
        hkVector4 pc;
        hkVector4 pa;
        hkVector4 cross;
        pc.setSub4(c, p);
        pa.setSub4(a, p);
        cross.setCross(pc, pa);
        if (cross.dot3(normal) < tolerance) {
            return false;
        }
    }
    return true;
}
