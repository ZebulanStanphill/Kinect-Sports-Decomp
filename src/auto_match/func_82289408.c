typedef struct Res_82289408 {
    unsigned char pad0[0xb0];
    void *handle;
    int busy;
} Res_82289408;

typedef struct Entry_82289408 {
    Res_82289408 *res;
    unsigned char rest[0x14];
} Entry_82289408;

typedef struct Slot_82289408 {
    int state;
    void *id;
    unsigned char pad8[0x10];
    void *obj;
    unsigned char pad1c[0x24];
} Slot_82289408;

typedef struct Cfg_82289408 {
    unsigned char pad0[0x18b8];
    int mode;
} Cfg_82289408;

typedef struct Obj_82289408 {
    unsigned char pad0[0x604];
    int dirty;
    unsigned char pad608[0x14];
    Entry_82289408 entries[4];
    unsigned char pad67c[0x2c];
    Slot_82289408 slots[4];
    unsigned char pad7a8[0x11f0 - 0x7a8];
    Cfg_82289408 *cfg;
} Obj_82289408;

extern int fn_82289670(Obj_82289408 *self, int i);
extern void *fn_8225C590(void);
extern void *fn_8225DA18(void *mgr, void *id);
extern void fn_8225D8B8(void *mgr, void *p);
extern void fn_82278950(void *handle);
extern void fn_82529320(void *obj, int flag);
extern void fn_82A1DD38(void *dst, void *src, unsigned int size);
extern void fn_8228A5F0(Obj_82289408 *self);
void fn_82289408(Obj_82289408 *self, int i, int shift, int check)
{
    int busy;
    void *mgr;
    Res_82289408 *res;
    Entry_82289408 tmp;
    int j;

    if (check != 0) {
        busy = fn_82289670(self, i);
        if (self->slots[i].state == 0) {
            if (busy != 0) {
                return;
            }
            mgr = fn_8225C590();
            fn_8225D8B8(mgr, fn_8225DA18(mgr, self->slots[i].id));
        }
        if (busy != 0) {
            return;
        }
    }
    self->slots[i].state = 4;
    res = self->entries[i].res;
    res->busy = 0;
    fn_82278950(res->handle);
    if (self->slots[i].obj != 0) {
        fn_82529320(self->slots[i].obj, 0);
        self->slots[i].obj = 0;
    }
    if (shift != 0) {
        for (j = i; j < 3; j++) {
            if (self->slots[j].state == 4) {
                tmp = self->entries[j];
                self->entries[j] = self->entries[j + 1];
                self->entries[j + 1] = tmp;
                fn_82A1DD38(&self->slots[j], &self->slots[j + 1], 0x40);
                self->slots[j + 1].state = 4;
                self->slots[j + 1].obj = 0;
            }
        }
    }
    if (self->cfg->mode == 1 && i == 1) {
        res = self->entries[3].res;
        res->busy = 0;
        fn_82278950(res->handle);
    }
    fn_8228A5F0(self);
    self->dirty = 1;
}
