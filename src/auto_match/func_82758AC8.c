typedef struct Item_82758AC8 {
    int unk0;                  /* 0x0 */
    unsigned short value;      /* 0x4 */
    unsigned int data;         /* 0x8 */
    int unkC;                  /* 0xc */
    unsigned short pad10 : 6;  /* 0x10, bits 10-15 */
    unsigned short wrapV : 2;  /* bits 8-9 */
    unsigned short wrapU : 2;  /* bits 6-7 */
    unsigned short filter : 2; /* bits 4-5 */
    unsigned short pad3 : 1;   /* bit 3 */
    unsigned short mode : 2;   /* bits 1-2 */
    unsigned short enable : 1; /* bit 0 */
    float scale;               /* 0x14 */
} Item_82758AC8;

typedef struct Vec_82758AC8 {
    Item_82758AC8 *data; /* 0x0 */
    unsigned int size;   /* 0x4 */
} Vec_82758AC8;

typedef struct Owner_82758AC8 {
    char pad0[0x5c];
    Vec_82758AC8 items; /* 0x5c */
} Owner_82758AC8;

typedef struct Self_82758AC8 {
    char pad0[0x8];
    Owner_82758AC8 *owner; /* 0x8 */
    char padC[0x14 - 0xc];
    unsigned int count; /* 0x14 */
    char pad18[0x6c - 0x18];
    Item_82758AC8 item; /* 0x6c */
    unsigned char unk84;
    unsigned char pushed; /* 0x85 */
} Self_82758AC8;

extern void fn_827589C0(Vec_82758AC8 *items, Item_82758AC8 *item);

static __forceinline void SetEnabled(Item_82758AC8 *item, unsigned char enable)
{
    item->enable = 0;
    if (enable) {
        item->enable = 1;
    }
}

static __forceinline void SetMode(Item_82758AC8 *item, unsigned short mode)
{
    item->mode = mode >> 1;
}

static __forceinline void SetWrap(Item_82758AC8 *item, unsigned short wrap)
{
    item->wrapU = wrap >> 6;
    item->wrapV = wrap >> 6;
}

static __forceinline void SetFilter(Item_82758AC8 *item, unsigned short filter)
{
    item->filter = filter >> 4;
}

/* Sets up the pending item (value, data, flag bits, scale) and appends it to the owner's list. */
void fn_82758AC8(Self_82758AC8 *self, float value, unsigned int data, unsigned char enable,
                 unsigned short mode, unsigned short wrap, unsigned short filter, float scale)
{
    Owner_82758AC8 *owner;

    self->item.value = (unsigned short)value;
    {
        unsigned int *dataField = &self->item.data;
        *dataField = data;
    }
    SetEnabled(&self->item, enable);
    SetMode(&self->item, mode);
    SetWrap(&self->item, wrap);
    SetFilter(&self->item, filter);
    self->item.scale = scale;
    owner = self->owner;
    fn_827589C0(&owner->items, &self->item);
    self->count = owner->items.size;
    self->pushed = 1;
}
