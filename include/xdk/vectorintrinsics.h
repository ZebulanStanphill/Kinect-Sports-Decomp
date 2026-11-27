// The Xbox 360 vector register type and the VMX128 compiler intrinsics, as the XDK's
// vectorintrinsics.h gives them to C and C++ code. The compiler knows every function below
// by name and emits the instruction of the same name (lvlx, vmaddfp, vpermwi128, ...); none
// of them exists as a function in the game.
//
// The prototypes are the ones the game's units were written against. The compiler accepts
// signed and unsigned spellings of the immediate operands alike, so those are not evidence
// of the XDK's exact parameter types.
#ifndef XDK_VECTORINTRINSICS_H
#define XDK_VECTORINTRINSICS_H

#ifdef __cplusplus
extern "C" {
#endif

// One VMX register. It is passed and returned in a register, so a copy is lvx128/stvx128.
// The compiler expects a struct here (warning C4391 on the intrinsics otherwise).
// vector4_f32 and vector4_u32 are the XDK's names for the lanes; v/u and x..w are the
// other views its union has.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    union {
        float vector4_f32[4];
        unsigned int vector4_u32[4];
        struct {
            float x;
            float y;
            float z;
            float w;
        };
        float v[4];
        unsigned int u[4];
    };
} __vector4;

// Loads and stores. The address is base + offset; lvlx/lvrx and stvlx/stvrx are the
// unaligned left and right halves.
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __lvsl(const void *base, int offset);
__vector4 __lvsr(const void *base, int offset);
void __stvlx(__vector4 v, void *base, int offset);
void __stvrx(__vector4 v, void *base, int offset);
void __stvewx(__vector4 v, void *base, int offset);
void __stvehx(__vector4 v, void *base, int offset);

// Float arithmetic. vmaddfp is a * c + b and vnmsubfp is -(a * c - b), operands in the
// instruction's order.
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vminfp(__vector4 a, __vector4 b);
__vector4 __vmaxfp(__vector4 a, __vector4 b);
__vector4 __vrefp(__vector4 v);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vexptefp(__vector4 v);
__vector4 __vrfin(__vector4 v);
__vector4 __vrfiz(__vector4 v);

// Conversions between float and fixed point (shift is the number of fraction bits).
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vcfux(__vector4 v, int shift);
__vector4 __vctsxs(__vector4 v, int shift);
__vector4 __vctuxs(__vector4 v, int shift);

// Comparisons. The R forms also write condition register field 6 to *cr.
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vcmpgefp(__vector4 a, __vector4 b);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);
__vector4 __vcmpequw(__vector4 a, __vector4 b);
__vector4 __vcmpgtuh(__vector4 a, __vector4 b);
__vector4 __vcmpeqfpR(__vector4 a, __vector4 b, unsigned int *cr);
__vector4 __vcmpgtfpR(__vector4 a, __vector4 b, unsigned int *cr);
__vector4 __vcmpbfpR(__vector4 a, __vector4 b, unsigned int *cr);
__vector4 __vcmpequwR(__vector4 a, __vector4 b, unsigned int *cr);
__vector4 __vcmpgtuhR(__vector4 a, __vector4 b, unsigned int *cr);

// Bitwise operations and select (bits of c choose b over a).
__vector4 __vand(__vector4 a, __vector4 b);
__vector4 __vandc(__vector4 a, __vector4 b);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vnor(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

// Integer arithmetic and shifts.
__vector4 __vadduhm(__vector4 a, __vector4 b);
__vector4 __vaddshs(__vector4 a, __vector4 b);
__vector4 __vaddsbs(__vector4 a, __vector4 b);
__vector4 __vaddubs(__vector4 a, __vector4 b);
__vector4 __vsubuhm(__vector4 a, __vector4 b);
__vector4 __vsubuwm(__vector4 a, __vector4 b);
__vector4 __vsubshs(__vector4 a, __vector4 b);
__vector4 __vsl(__vector4 a, __vector4 b);
__vector4 __vslb(__vector4 a, __vector4 b);
__vector4 __vslh(__vector4 a, __vector4 b);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vslo(__vector4 a, __vector4 b);
__vector4 __vsr(__vector4 a, __vector4 b);
__vector4 __vsrb(__vector4 a, __vector4 b);
__vector4 __vsrh(__vector4 a, __vector4 b);
__vector4 __vsrah(__vector4 a, __vector4 b);

// Splats, merges, permutes and packs. vpermwi, vrlimi, vupkd3d and vpkd3d are VMX128 only.
__vector4 __vspltb(__vector4 v, unsigned int i);
__vector4 __vsplth(__vector4 v, unsigned int i);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisb(int value);
__vector4 __vspltish(int value);
__vector4 __vspltisw(int value);
__vector4 __vmrghb(__vector4 a, __vector4 b);
__vector4 __vmrglb(__vector4 a, __vector4 b);
__vector4 __vmrghh(__vector4 a, __vector4 b);
__vector4 __vmrglh(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vmrglw(__vector4 a, __vector4 b);
__vector4 __vperm(__vector4 a, __vector4 b, __vector4 control);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vpkshus(__vector4 a, __vector4 b);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vpkd3d(__vector4 a, __vector4 b, int type, int mask, int shift);

// A named VMX register as a value: reads and writes compile to a use of that register,
// which is how a unit reaches a vector argument or result the C prototype cannot express.
__vector4 __VMXGetReg(int reg);
void __VMXSetReg(int reg, __vector4 v);

#ifdef __cplusplus
}
#endif

#endif
