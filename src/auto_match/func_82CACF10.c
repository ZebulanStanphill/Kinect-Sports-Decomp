typedef struct Entry_82CACF10 {
    char pad0[0x28];
    void *f28; /* 0x28 */
    void *f2c; /* 0x2c */
    void *f30; /* 0x30 */
} Entry_82CACF10;

typedef struct Set_82CACF10 {
    int kind;                   /* 0x0 */
    int f4;                     /* 0x4 */
    int pad8;                   /* 0x8 */
    Entry_82CACF10 *entries[8]; /* 0xc */
    char pad2c[0x3c - 0x2c];
    int f3c;   /* 0x3c */
    int count; /* 0x40 */
    int pad44; /* 0x44 */
    int f48;   /* 0x48 */
    int pad4c; /* 0x4c */
} Set_82CACF10;

typedef struct Obj_82CACF10 {
    char pad0[0x6070];
    char *pool; /* 0x6070 */
} Obj_82CACF10;

extern char lbl_82196582[];
extern void *memset(void *dst, int value, unsigned int size);
extern void *fn_82C562F0(void *heap, unsigned int size, char *tag);
extern void fn_82C563B0(void *heap, void *block);
extern Entry_82CACF10 *fn_82CAC118(Obj_82CACF10 *self, int index, Set_82CACF10 *set);
extern void fn_82CAD2B0(Obj_82CACF10 *self, void *item);

Set_82CACF10 *fn_82CACF10(Obj_82CACF10 *self, int kind)
{
    char *setPool;
    char *pool;
    Set_82CACF10 *set;
    Entry_82CACF10 *e;
    int i;

    setPool = self->pool + 8;
    set = (Set_82CACF10 *)fn_82C562F0(setPool, 0x50, lbl_82196582);
    if (set == 0) {
        return 0;
    }
    memset(set, 0, 0x50);
    set->kind = kind;
    set->f3c = 0;
    set->f4 = 0;
    set->f48 = 1;
    set->count = 8;
    for (i = 0; i < set->count; i++) {
        set->entries[i] = fn_82CAC118(self, i, set);
        if (set->entries[i] == 0) {
            for (i = i - 1; i >= 0; i--) {
                e = set->entries[i];
                pool = self->pool + 8;
                if (e != 0) {
                    fn_82CAD2B0(self, e->f2c);
                    if (e->f2c != 0) {
                        fn_82C563B0(pool, e->f2c);
                    }
                    if (e->f30 != 0) {
                        fn_82C563B0(pool, e->f30);
                    }
                    if (e->f28 != 0) {
                        fn_82C563B0(pool, e->f28);
                    }
                    fn_82C563B0(pool, e);
                }
            }
            fn_82C563B0(setPool, set);
            return 0;
        }
    }
    return set;
}
