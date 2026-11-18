typedef struct Item_82BDA238 Item_82BDA238;

typedef struct ItemVtbl_82BDA238 {
    void *slot0;
    void *slot4;
    void *slot8;
    void (*update)(Item_82BDA238 *self); /* 0xc */
} ItemVtbl_82BDA238;

struct Item_82BDA238 {
    ItemVtbl_82BDA238 *vt;
};

typedef struct Value_82BDA238 {
    int kind;  /* 0x0 */
    int value; /* 0x4 */
} Value_82BDA238;

typedef struct Desc_82BDA238 {
    int type;              /* 0x0 */
    Value_82BDA238 *value; /* 0x4 */
} Desc_82BDA238;

typedef struct Target_82BDA238 Target_82BDA238;

typedef struct TargetVtbl_82BDA238 {
    void *slot0;
    int (*apply)(Target_82BDA238 *self, Desc_82BDA238 *desc); /* 0x4 */
    int (*reset)(Target_82BDA238 *self, int arg);             /* 0x8 */
    void *slots[9];
    int (*setLevel)(Target_82BDA238 *self, float level, int arg); /* 0x30 */
} TargetVtbl_82BDA238;

struct Target_82BDA238 {
    TargetVtbl_82BDA238 *vt;
};

typedef struct Owner_82BDA238 {
    char pad[0x114];
    int dirty; /* 0x114 */
} Owner_82BDA238;

typedef struct Self_82BDA238 {
    char pad[0x8];
    Owner_82BDA238 *owner;   /* 0x8 */
    Item_82BDA238 *items[2]; /* 0xc */
    unsigned int itemCount;  /* 0x14 */
    char pad2[0x30];
    Target_82BDA238 *target; /* 0x48 */
    unsigned int pending;    /* 0x4c */
    int pendingValue;        /* 0x50 */
} Self_82BDA238;

extern void *XMemSet(void *dst, int value, unsigned int size);

int fn_82BDA238(Self_82BDA238 *self)
{
    Value_82BDA238 value = {0};
    Desc_82BDA238 desc = {1, &value};
    unsigned int i;
    int hr;
    hr = 0;
    XMemSet(self, 0, 8);
    for (i = 0; i < self->itemCount; i++) {
        self->items[i]->vt->update(self->items[i]);
    }
    if (self->pending != 0) {
        if (self->target != 0) {
            hr = self->target->vt->setLevel(self->target, 0.0f, 0);
            if (hr >= 0) {
                hr = self->target->vt->reset(self->target, 0);
                if (hr >= 0) {
                    value.value = self->pendingValue;
                    hr = self->target->vt->apply(self->target, &desc);
                }
            }
        }
        self->pending = 0;
    }
    self->owner->dirty = 1;
    return hr;
}
