typedef struct Obj_82F52A70 Obj_82F52A70;

typedef struct {
    void *pad[8];
    unsigned int (*count)(Obj_82F52A70 *self);
    void *(*get)(Obj_82F52A70 *self, unsigned int index);
} Vtbl_82F52A70;

struct Obj_82F52A70 {
    Vtbl_82F52A70 *vt;
};

typedef struct {
    int pad0;
    int index;
    Obj_82F52A70 *obj;
} Self_82F52A70;

typedef struct {
    int pad0;
    unsigned int id;
} Key_82F52A70;

typedef struct {
    char pad0[0x34];
    unsigned int id;
    char pad1[0x1c0 - 0x38];
} Entry_82F52A70;

extern void fn_828DF3C8(void *item, int index);
extern Entry_82F52A70 *fn_82F4DA20(int kind);

void fn_82F52A70(Self_82F52A70 *self, Key_82F52A70 *key)
{
    Entry_82F52A70 *entries;
    int i;
    unsigned int j;
    void *item;

    if (key->id > 0) {
        entries = fn_82F4DA20(2);
        for (i = 0; i < 2; i++) {
            if (entries[i].id == key->id) {
                self->index = i;
                if (self->obj == 0) {
                    return;
                }
                for (j = 0; j < self->obj->vt->count(self->obj); j++) {
                    item = self->obj->vt->get(self->obj, j);
                    fn_828DF3C8(item, self->index);
                }
                return;
            }
        }
    }
}
