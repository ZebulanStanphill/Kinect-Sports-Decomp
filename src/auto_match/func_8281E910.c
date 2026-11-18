typedef struct Vector3_8281E910 {
    unsigned int x; /* 0x0: float bits */
    unsigned int y; /* 0x4: float bits */
    unsigned int z; /* 0x8: float bits */
} Vector3_8281E910;

static __forceinline int IsFinite(unsigned int bits)
{
    return (bits & 0x7f800000) != 0x7f800000;
}

/* Returns 1 when no component is an infinity or a NaN. */
int fn_8281E910(Vector3_8281E910 *v)
{
    return IsFinite(v->x) & IsFinite(v->y) & IsFinite(v->z) & 1;
}
