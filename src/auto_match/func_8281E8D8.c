typedef struct Point_8281E8D8 {
    unsigned int x; /* 0x0: float bits */
    unsigned int y; /* 0x4: float bits */
} Point_8281E8D8;

static __forceinline int IsFinite(unsigned int bits)
{
    return (bits & 0x7f800000) != 0x7f800000;
}

/* Returns 1 when neither coordinate is an infinity or a NaN. */
int fn_8281E8D8(Point_8281E8D8 *p)
{
    return IsFinite(p->x) & IsFinite(p->y) & 1;
}
