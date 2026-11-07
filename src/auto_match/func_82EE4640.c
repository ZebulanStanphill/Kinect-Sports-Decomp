typedef struct Obj_82EE4640 {
    int pad0[3];
    unsigned int active;        /* 0x0c */
    int pad10[14];
    char sub48[0x68];           /* 0x48 */
    unsigned int count;         /* 0xb0 */
} Obj_82EE4640;

extern void *fn_82E3C590(void *a, void *b, int c);
extern int fn_82EE3630(void *list, unsigned int idx, void ***out);

int fn_82EE4640(Obj_82EE4640 *p, unsigned short idx, void *arg)
{
    void **entry;

    if (p->active == 0) {
        return (int)0xC00D36B6;
    }
    if (idx >= p->count) {
        return (int)0xC00D36D5;
    }
    fn_82EE3630(p->sub48, idx, &entry);
    return fn_82E3C590(*entry, arg, 0) ? 0 : (int)0x8007000E;
}
