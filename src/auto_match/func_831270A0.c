typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);

/* The game's 1.0f pair, defined selectany as in Matching func_825BCDA8.cpp; read as lbl_821CA45C[1]. */
__declspec(selectany) const float lbl_821CA45C[2] = { 1.0f, 1.0f };
extern __vector4 lbl_832970C0[8];

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

/* Dynamic initialiser of a table of the eight 0/1 corner vectors. */
void fn_831270A0(void)
{
    lbl_832970C0[0] = VectorSet(0.0f, 0.0f, 0.0f, 0.0f);
    lbl_832970C0[1] = VectorSet(lbl_821CA45C[1], 0.0f, 0.0f, 0.0f);
    lbl_832970C0[2] = VectorSet(0.0f, lbl_821CA45C[1], 0.0f, 0.0f);
    lbl_832970C0[3] = VectorSet(0.0f, 0.0f, lbl_821CA45C[1], 0.0f);
    lbl_832970C0[4] = VectorSet(lbl_821CA45C[1], lbl_821CA45C[1], 0.0f, 0.0f);
    lbl_832970C0[5] = VectorSet(lbl_821CA45C[1], 0.0f, lbl_821CA45C[1], 0.0f);
    lbl_832970C0[6] = VectorSet(0.0f, lbl_821CA45C[1], lbl_821CA45C[1], 0.0f);
    lbl_832970C0[7] = VectorSet(lbl_821CA45C[1], lbl_821CA45C[1], lbl_821CA45C[1], 0.0f);
}
