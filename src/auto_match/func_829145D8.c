typedef struct Desc_829145D8 {
    char pad0[0x4];
    int type; /* 0x4 */
    char pad8[0x14];
    unsigned int count; /* 0x1c */
    char pad20[0x8];
    void *params; /* 0x28 */
} Desc_829145D8;

typedef struct Device_829145D8 {
    char pad0[0x78];
    int context; /* 0x78 */
} Device_829145D8;

typedef struct Owner_829145D8 {
    char pad0[0x18];
    char data[1]; /* 0x18 */
} Owner_829145D8;

typedef struct Effect_829145D8 {
    Owner_829145D8 *owner;   /* 0x0 */
    Desc_829145D8 *desc;     /* 0x4 */
    Device_829145D8 *device; /* 0x8 */
    char padc[0x4];
    int f10;             /* 0x10 */
    int f14;             /* 0x14 */
    unsigned int *slots; /* 0x18 */
    char pad1c[0x4];
    int one;      /* 0x20 */
    int zero;     /* 0x24 */
    int minusOne; /* 0x28 */
    int current;  /* 0x2c */
    int f30;      /* 0x30 */
    int f34;      /* 0x34 */
    char pad38[0x14];
    int failed; /* 0x4c */
} Effect_829145D8;

extern int fn_8296DA28(Device_829145D8 *device, Desc_829145D8 *desc, char *data, int a, int b);
extern void fn_8265C990(void *p, unsigned int flags);
extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern int fn_82964628(Device_829145D8 *device, int context, int a, int b, double value);
extern int fn_82913308(void *o, void *a, int z);
extern void *memset(void *dst, int value, unsigned int size);

int fn_829145D8(Effect_829145D8 *self)
{
    Desc_829145D8 *desc;
    int hr;

    desc = self->desc;
    if (desc == 0 || desc->type != 4) {
        return 0;
    }
    if (self->device == 0) {
        return 0x80004005;
    }
    hr = fn_8296DA28(self->device, desc, self->owner->data, self->f10, self->f14);
    if (hr < 0) {
        return hr;
    }
    fn_8265C990(self->slots, 0x24810000);
    self->slots = (unsigned int *)fn_8265C940(desc->count * 4, 0x24810000);
    if (self->slots == 0) {
        return 0x8007000e;
    }
    memset(self->slots, 0xff, desc->count * 4);
    self->one = fn_82964628(self->device, self->device->context, 0, 0, 1.0);
    self->zero = fn_82964628(self->device, self->device->context, 0, 0, 0.0);
    self->minusOne = fn_82964628(self->device, self->device->context, 0, 0, -1.0);
    self->current = self->one;
    self->f30 = -1;
    self->f34 = 1;
    hr = fn_82913308(self, desc->params, 0);
    if (hr < 0) {
        return hr;
    }
    return self->failed != 0 ? 0x80004005 : 0;
}
