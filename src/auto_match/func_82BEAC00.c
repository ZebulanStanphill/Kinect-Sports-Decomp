typedef struct Zone_82BEAC00 {
    char pad00[0x10];
    int ok;                 /* 0x10 */
    char pad14[0x38 - 0x14];
    const char *name;       /* 0x38 */
    char pad3c[0x40 - 0x3c];
    void *maoList;          /* 0x40 */
} Zone_82BEAC00;

extern void fn_82BE5240(Zone_82BEAC00 *self, int code, const char *format, ...);
extern int fn_82BE52B8(void *list, void *node);
extern void *fn_82BE56B0(unsigned int size);
extern void *fn_82BEB628(void *mem, void *item);

int fn_82BEAC00(Zone_82BEAC00 *self, void *mao)
{
    void *mem;
    void *node;

    if (mao != 0 && self->maoList != 0) {
        mem = fn_82BE56B0(0xc);
        if (mem != 0) {
            node = fn_82BEB628(mem, mao);
        } else {
            node = 0;
        }
        if (node == 0) {
            fn_82BE5240(self, 0x65, "CMassiveListNode in AddMAO()");
            self->ok = 0;
            return 0;
        }
        if (fn_82BE52B8(self->maoList, node) == 0) {
            fn_82BE5240(self, 0x64, "Could not append list node to MAO list");
            self->ok = 0;
            return 0;
        }
        return 1;
    }
    fn_82BE5240(self, 0x130, "Could not add MAO to zone \"%s\" because the zone's MAO list is NULL", self->name);
    self->ok = 0;
    return 0;
}
