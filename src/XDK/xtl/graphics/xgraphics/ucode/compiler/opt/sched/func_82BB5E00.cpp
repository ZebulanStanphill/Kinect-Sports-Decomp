struct Info_82BB5E00 {
    int pad0;
    unsigned char flag;
    char pad5[7];
};

struct Inst_82BB5E00 {
    char pad0[0x10];
    int f10;
    char pad14[0x50 - 0x14];
    int op;
    char pad54[0xe4 - 0x54];
    unsigned pad : 25;
    unsigned b6 : 1;
    unsigned b5 : 1;
    unsigned b2_4 : 3;
    unsigned b1 : 1;
    unsigned b0 : 1;
};

extern "C" Info_82BB5E00 lbl_820E7F98[];

static __forceinline bool HasInfo(Inst_82BB5E00 *p)
{
    return p->f10 != 0 && !(bool)p->b1 && lbl_820E7F98[p->op].flag != 0;
}

extern "C" bool fn_82BB5E00(Inst_82BB5E00 *p)
{
    return !(bool)p->b5 && !(bool)p->b6 && HasInfo(p);
}
