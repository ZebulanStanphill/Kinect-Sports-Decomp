// The Xbox 360 vector type behind Havok's math classes, and the VMX128 compiler intrinsics
// their inline members are written with (Havok's Xbox 360 math types; the XDK's
// vectorintrinsics.h declares the type and the intrinsics).
#ifndef HAVOK_HKQUADREAL_H
#define HAVOK_HKQUADREAL_H

#include "havok/hkBaseTypes.h"

// One VMX register. It is passed and returned in a register, so a copy is lvx128/stvx128.
// The compiler expects a struct here (warning C4391 on the intrinsics otherwise).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    union {
        hkReal vector4_f32[4];
        hkUint32 vector4_u32[4];
    };
} __vector4;
typedef __vector4 hkQuadReal;

// The four floats of an hkQuadReal, for building one from scalars.
union hkQuadRealUnion {
    hkReal r[4];
    hkQuadReal q;
};

extern "C" {
__vector4 __lvlx(const void *, int);
void __stvewx(__vector4, void *, int);
__vector4 __vaddfp(__vector4, __vector4);
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vnmsubfp(__vector4, __vector4, __vector4);
__vector4 __vmsum3fp(__vector4, __vector4);
__vector4 __vmsum4fp(__vector4, __vector4);
__vector4 __vminfp(__vector4, __vector4);
__vector4 __vmaxfp(__vector4, __vector4);
__vector4 __vrefp(__vector4);
__vector4 __vrsqrtefp(__vector4);
__vector4 __vcmpeqfp(__vector4, __vector4);
__vector4 __vcmpgefp(__vector4, __vector4);
__vector4 __vcmpgtfp(__vector4, __vector4);
__vector4 __vcmpequwR(__vector4, __vector4, unsigned int *);
__vector4 __vand(__vector4, __vector4);
__vector4 __vor(__vector4, __vector4);
__vector4 __vxor(__vector4, __vector4);
__vector4 __vsel(__vector4, __vector4, __vector4);
__vector4 __vspltw(__vector4, unsigned int);
__vector4 __vspltisw(int);
__vector4 __vpermwi(__vector4, int);
__vector4 __vmrghw(__vector4, __vector4);
__vector4 __vmrglw(__vector4, __vector4);
__vector4 __vrlimi(__vector4, __vector4, unsigned int, unsigned int);

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
