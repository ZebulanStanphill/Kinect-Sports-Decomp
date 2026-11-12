// Uploads the projection scale/offset and depth constants to the device: pixel shader constants
// 123/124 (device float registers 379/380), and the vertex shader constants 16/18 unless pixelOnly.
// The two input vectors are built the way XNA Math's XMVectorSet does (lvlx loads merged with vrlimi).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, unsigned int mask, unsigned int rotate);

typedef struct Device_8254F298 {
    unsigned __int64 dirty[2];        // 0x00: one bit per 4 float registers, MSB first
    char pad10[0x770];
    float constants[512][4];          // 0x780
} Device_8254F298;

typedef struct View_8254F298 {
    char pad0[0x2c];
    float left;                       // 0x2c
    float top;                        // 0x30
    float right;                      // 0x34
    float bottom;                     // 0x38
    float nearZ;                      // 0x3c
    float farZ;                       // 0x40
} View_8254F298;

extern View_8254F298 lbl_8327FB00;
extern const float lbl_821CA45C[2];
extern void fn_826312F0(Device_8254F298 *device, unsigned int index, const void *src, int count);

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx, vy, vz, vw;

    vx = __lvlx(&x, 0);
    vy = __lvlx(&y, 0);
    vz = __lvlx(&z, 0);
    vw = __lvlx(&w, 0);
    vx = __vrlimi(vx, vy, 0x4, 3);
    vz = __vrlimi(vz, vw, 0x4, 3);
    return __vrlimi(vx, vz, 0x3, 2);
}

static __forceinline void SetConstant(Device_8254F298 *device, unsigned int reg, const float *v)
{
    float *c = device->constants[reg];

    c[0] = v[0];
    c[1] = v[1];
    c[2] = v[2];
    c[3] = v[3];
    device->dirty[reg >> 8] |= 0x8000000000000000ULL >> ((reg >> 2) & 63);
}

void fn_8254F298(char *self, Device_8254F298 *device, int pixelOnly)
{
    __vector4 a;
    __vector4 b;
    float c[4];
    float d[4];

    a = VectorSet(lbl_8327FB00.right, 0.0f, lbl_8327FB00.bottom, 0.0f);
    b = VectorSet(lbl_8327FB00.left, 0.0f, lbl_8327FB00.top, 0.0f);
    c[0] = lbl_821CA45C[1] / (a.vector4_f32[0] - b.vector4_f32[0]);
    c[1] = lbl_821CA45C[1] / (a.vector4_f32[2] - b.vector4_f32[2]);
    c[2] = -b.vector4_f32[0];
    c[3] = -b.vector4_f32[2];
    SetConstant(device, 379, c);
    if (pixelOnly == 0) {
        d[0] = c[0];
        d[1] = c[1];
        d[2] = c[2] * c[0];
        d[3] = c[3] * c[1];
        SetConstant(device, 16, d);
    }
    c[0] = 0.0f;
    c[1] = 0.0f;
    c[2] = lbl_8327FB00.nearZ;
    c[3] = lbl_8327FB00.farZ;
    SetConstant(device, 380, c);
    if (pixelOnly == 0) {
        SetConstant(device, 18, c);
    }
    fn_826312F0(device, 5, self + 0x1e8, 1);
}
