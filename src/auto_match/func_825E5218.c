// Stores a view description (0xa8 bytes, six planes at +0x48) in one view slot, rebuilds the
// slot's six planes as vectors with the distance negated, and passes them to the three
// culling targets together with each target's dimensions.
// Layout: a 0x60-byte header, then four 0x110-byte slots {six plane vectors, view copy}. The
// code addresses all of it as one array of vectors (slot * 17 + 6 + i), which is how it is
// declared here: slot k's planes are vectors[k * 17 + 6 ...], its view starts at vectors[k * 17 + 12].
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, unsigned int mask, unsigned int rotate);

typedef struct Plane_825E5218 {
    float x, y, z, d;
} Plane_825E5218;

typedef struct View_825E5218 {
    char head[0x48];
    Plane_825E5218 planes[6];      // 0x48
} View_825E5218;                   // 0xa8

typedef struct Target_825E5218 {
    char pad00[0x44];
    int width;                     // 0x44
    int height;                    // 0x48
    int depth;                     // 0x4c
} Target_825E5218;

typedef struct Culler_825E5218 {
    __vector4 vectors[0x4a];       // 0x000
    int pad4a0;
    Target_825E5218 *targets[3];   // 0x4a4
} Culler_825E5218;

extern void fn_825E61E8(Target_825E5218 *target, int slot, __vector4 *planes, int x, int width, int y,
                        int height, int z, int depth);

// XNA Math XMVectorSet on VMX128: four lvlx loads merged with vrlimi.
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

void fn_825E5218(Culler_825E5218 *self, int slot, const View_825E5218 *view)
{
    int i;
    __vector4 *base = &self->vectors[slot * 17];

    *(View_825E5218 *)(base + 12) = *view;
    for (i = 0; i < 6; i++) {
        self->vectors[slot * 17 + 6 + i] =
            VectorSet(view->planes[i].x, view->planes[i].y, view->planes[i].z, -view->planes[i].d);
    }
    for (i = 0; i < 3; i++) {
        Target_825E5218 *target = self->targets[i];
        fn_825E61E8(target, slot, base + 6, 0, target->width, 0, target->height, 0, target->depth);
    }
}
