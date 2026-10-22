typedef struct A { int pad0; int pad4; int state; } A;
typedef struct B { int pad0; unsigned char flag; } B;

extern B *fn_82250A18(void);
extern A *fn_8225F160(void);
extern B *lbl_832975B0;

static B *getB(void) { return lbl_832975B0 ? lbl_832975B0 : fn_82250A18(); }

unsigned char fn_824CCD80(int p)
{
    if (fn_8225F160()->state == 2) return 0;
    if (getB()->flag) return 0;
    if (fn_8225F160()->state == 0) return 0;
    return *(int *)(p + 0x30) != 0;
}
