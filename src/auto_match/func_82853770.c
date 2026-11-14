typedef struct Entry_82853770 {
    char pad0[0xc0];
    unsigned char *constants;       /* 0xc0 */
    char padc4[0xd0 - 0xc4];
} Entry_82853770;

typedef struct Self_82853770 {
    int pad0;
    void *device;                   /* 0x0004 */
    char pad8[0x7c - 0x8];
    unsigned char *lastData;        /* 0x007c */
    unsigned int lastCount;         /* 0x0080 */
    char pad84[0x98 - 0x84];
    unsigned int base;              /* 0x0098 */
    char pad9c[0x104 - 0x9c];
    int loaded;                     /* 0x0104 */
    char pad108[0x130 - 0x108];
    Entry_82853770 entries[(0x6930 - 0x130) / 0xd0];   /* 0x0130 */
    int current;                    /* 0x6930 */
} Self_82853770;

typedef struct List_82853770 {
    unsigned char *data;            /* 0x04 */
    unsigned short count;           /* 0x08 */
    unsigned char force;            /* 0x0a */
} List_82853770;

typedef struct Param_82853770 {
    int pad0;
    List_82853770 list;             /* 0x04 */
} Param_82853770;

extern void fn_826310E0(void *p, unsigned int start, void *src, unsigned int count, unsigned __int64 mask);

void fn_82853770(Self_82853770 *self, Param_82853770 *param)
{
    Entry_82853770 *entry = &self->entries[self->current];
    List_82853770 *list = &param->list;
    int i;

    if (list->force == 0 || self->loaded == 0) {
        for (i = 0; i < list->count; i++) {
            unsigned int start = self->base + i * 3;
            unsigned int first = start >> 2;
            unsigned int last = (start + 3 - 1) >> 2;
            fn_826310E0(self->device, start, entry->constants + list->data[i] * 64, 3,
                        (unsigned __int64)((__int64)0x8000000000000000ULL >> (last - first)) >> first);
        }
        self->loaded = 1;
        self->lastData = list->data;
        self->lastCount = list->count;
    }
}
