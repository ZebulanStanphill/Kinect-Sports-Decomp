typedef struct E { char d[0x1c]; } E;
extern E lbl_83263258[];
extern void fn_82F63AC8(E *e);

int *fn_82F62680(int *p, int i)
{
    *p = i;
    if (i < 4)
        fn_82F63AC8(&lbl_83263258[i]);
    return p;
}
