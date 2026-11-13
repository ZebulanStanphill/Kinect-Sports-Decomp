typedef struct Inst_8242E5C0 {
    char pad0[4];
    unsigned char active;
} Inst_8242E5C0;

typedef struct Player_8242E5C0 {
    char pad0[0x168];
    void *f168;
    int f16c;
} Player_8242E5C0;

extern Inst_8242E5C0 *lbl_832975B0;
extern Inst_8242E5C0 *fn_82250A18(void);
extern Player_8242E5C0 *fn_8242C1B8(void *self);
extern int fn_8242C348(void *self);
extern Player_8242E5C0 *fn_8242C298(void *self);
extern unsigned char fn_8288B760(void *p);

static __forceinline int GetState(Player_8242E5C0 *o)
{
    int v;
    if (o->f168 != 0) {
        v = fn_8288B760(o->f168);
    } else {
        v = o->f16c;
    }
    return v;
}

int fn_8242E5C0(void *self)
{
    return (lbl_832975B0 ? lbl_832975B0 : fn_82250A18())->active != 0 &&
        GetState(fn_8242C1B8(self)) == 0 &&
        (fn_8242C348(self) == 0 || GetState(fn_8242C298(self)) == 0);
}
