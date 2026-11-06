extern unsigned int fn_82BD62B8(void *p);
extern int fn_82BD62B0(void *p);

struct Dev_82BD51F0;
typedef struct {
    int pad0[14];
    void (*set)(struct Dev_82BD51F0 *self, int count, float *v, int flag);
    void (*get)(struct Dev_82BD51F0 *self, int count, float *v);
} Vt_82BD51F0;
typedef struct Dev_82BD51F0 {
    Vt_82BD51F0 *vt;
} Dev_82BD51F0;

typedef struct {
    char pad0[0x40];
    Dev_82BD51F0 *dev;
} Owner_82BD51F0;

typedef struct {
    int index;
    char pad4[0xc4 - 4];
    float value;
    char padc8[0xd0 - 0xc8];
    unsigned int flags;
} Item_82BD51F0;

void fn_82BD51F0(Owner_82BD51F0 *self, Item_82BD51F0 *item)
{
    float v[4];
    int index = item->index;
    if (self->dev != 0) {
        self->dev->vt->get(self->dev, 4, v);
        if (((item->flags & 2) != 0 || fn_82BD62B8(item) == 0x70000000 || fn_82BD62B0(item) == 0) &&
            (item->flags & 0xf0000) != 0) {
            v[index] = item->value;
        } else {
            v[index] = 0.0f;
        }
        self->dev->vt->set(self->dev, 4, v, 0);
    }
}
