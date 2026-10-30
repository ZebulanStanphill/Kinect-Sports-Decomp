extern int fn_82D9AB30(unsigned short *, unsigned int, void *);

typedef struct Vec3_82DA00E0 {
    int a;
    int x;
    int y;
    int z;
} Vec3_82DA00E0;

typedef struct Out_82DA00E0 {
    int pad0;
    int x;
    int y;
    int z;
} Out_82DA00E0;

int fn_82DA00E0(unsigned short *p, Out_82DA00E0 *out)
{
    struct { Vec3_82DA00E0 v; int pad[4]; } L;
    unsigned int t = 0;
    unsigned short ty = *p;
    while (ty >= 0x17) {
        t = p[9];
        p = *(unsigned short **)(p + 10);
        ty = *p;
    }
    if (*p != 0x16 && *p != 1) {
        fn_82D9AB30(p, t, &L.v);
        out->z = out->z - L.v.z;
        out->y = out->y - L.v.y;
        out->x = out->x - L.v.x;
    }
    return 0;
}
