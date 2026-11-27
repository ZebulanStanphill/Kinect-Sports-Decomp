// The Xbox 360 vector type behind Havok's math classes. Their inline members are written
// with the VMX128 compiler intrinsics of the XDK's vectorintrinsics.h.
#ifndef HAVOK_HKQUADREAL_H
#define HAVOK_HKQUADREAL_H

#include "havok/hkBaseTypes.h"
#include "xdk/vectorintrinsics.h"

// One VMX register (xdk/vectorintrinsics.h).
typedef __vector4 hkQuadReal;

// The four floats of an hkQuadReal, for building one from scalars.
union hkQuadRealUnion {
    hkReal r[4];
    hkQuadReal q;
};

extern "C" {
// Havok's vector constants. Their names in the game are not known.
extern const hkQuadReal lbl_82132D00;   // (0, 0, 0, 0)
extern const hkQuadReal lbl_82132D10;   // (1, 1, 1, 1)
extern const hkQuadReal lbl_82132D70;   // (0.5, 0.5, 0.5, 0.5)
extern const hkQuadReal lbl_8209AB20;   // the sign bit of every lane
extern const hkQuadReal lbl_821CA820;   // every bit but the sign bit of every lane
extern hkQuadReal lbl_8323B330[16];     // one vector per hkVector4Comparison::Mask: all ones in
                                        // the lanes the mask leaves out (.data, filled at run time)
}

#endif
