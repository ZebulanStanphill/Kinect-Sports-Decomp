typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
void __VMXSetReg(int n, __vector4 value);

typedef union Mask_82593180 {
    unsigned int u[4];
    __vector4 v;
} Mask_82593180;

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx, vy, vz, vw;

    vx = __lvlx(&x, 0);
    vy = __lvlx(&y, 0);
    vz = __lvlx(&z, 0);
    vw = __lvlx(&w, 0);
    vx = __vrlimi(vx, vy, 4, 3);
    vz = __vrlimi(vz, vw, 4, 3);
    return __vrlimi(vx, vz, 3, 2);
}

static __forceinline __vector4 MaskSet(unsigned int x, unsigned int y, unsigned int z, unsigned int w)
{
    Mask_82593180 m;

    m.u[0] = x;
    m.u[1] = y;
    m.u[2] = z;
    m.u[3] = w;
    return m.v;
}

/* Loads the constants that vector code reads from the reserved registers v64-v77. */
void fn_82593180(void)
{
    __VMXSetReg(77, VectorSet(0.0f, 0.0f, 0.0f, 0.0f));
    __VMXSetReg(76, VectorSet(0.0f, 0.0f, 0.0f, 1.0f));
    __VMXSetReg(75, VectorSet(1.0f, 1.0f, 1.0f, 1.0f));
    __VMXSetReg(74, VectorSet(-1.0f, -1.0f, -1.0f, 0.0f));
    __VMXSetReg(73, VectorSet(1.0f, 0.0f, 0.0f, 0.0f));
    __VMXSetReg(72, VectorSet(0.0f, 1.0f, 0.0f, 0.0f));
    __VMXSetReg(71, VectorSet(0.0f, 0.0f, 1.0f, 0.0f));
    __VMXSetReg(70, VectorSet(-1.0f, 0.0f, 0.0f, 0.0f));
    __VMXSetReg(69, VectorSet(0.0f, -1.0f, 0.0f, 0.0f));
    __VMXSetReg(68, VectorSet(0.0f, 0.0f, -1.0f, 0.0f));
    __VMXSetReg(67, MaskSet(0, 0, 0, 0xffffffff));
    __VMXSetReg(66, MaskSet(0xffffffff, 0xffffffff, 0, 0));
    __VMXSetReg(65, VectorSet(-0.0f, -0.0f, -0.0f, -0.0f));
    __VMXSetReg(64, VectorSet(0.001f, 0.001f, 0.001f, 0.001f));
}
