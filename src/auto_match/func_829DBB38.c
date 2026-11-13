typedef struct Globals_829DBB38 {
    char pad0[0x28];
    void *a;
    void *b;
    void *c;
    char pad34[0x5c - 0x34];
} Globals_829DBB38;

extern Globals_829DBB38 lbl_83217B08;

extern void fn_829E30F8(void *p);
extern void fn_829E3C08(void *p);
extern void fn_829E4C60(void *p, int size);
extern void fn_82BA02A8(void *p);
void *memset(void *dst, int c, unsigned int n);

static __forceinline void releaseA(void *p)
{
    fn_82BA02A8(p);
    fn_829E4C60(p, 0x2418);
}

static __forceinline void releaseB(void *p)
{
    fn_829E3C08(p);
    fn_829E4C60(p, 0x108);
}

static __forceinline void releaseC(void *p)
{
    fn_829E30F8(p);
    fn_829E4C60(p, 0x98);
}

void fn_829DBB38(void)
{
    if (lbl_83217B08.a != 0) {
        releaseA(lbl_83217B08.a);
        lbl_83217B08.a = 0;
    }
    if (lbl_83217B08.b != 0) {
        releaseB(lbl_83217B08.b);
        lbl_83217B08.b = 0;
    }
    if (lbl_83217B08.c != 0) {
        releaseC(lbl_83217B08.c);
        lbl_83217B08.c = 0;
    }
    memset(&lbl_83217B08, 0, 0x5c);
}
