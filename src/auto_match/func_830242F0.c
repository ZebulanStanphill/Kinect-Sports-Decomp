typedef struct __declspec(passinreg) __declspec(align(16)) __vector4 {
    float vector4_f32[4];
} __vector4;

extern __vector4 __lvlx(const void *, int);
extern __vector4 __vspltw(__vector4, int);
extern double __fsel(double, double, double);

typedef struct Item_830242F0 Item_830242F0;

typedef struct ItemVt_830242F0 {
    void *pad00[2];
    void (*disable)(Item_830242F0 *self);
    void *pad0c;
    void (*update)(Item_830242F0 *self, void *data);
} ItemVt_830242F0;

struct Item_830242F0 {
    const ItemVt_830242F0 *vt;
};

typedef struct Entry_830242F0 {
    int field00;
    int field04;
    Item_830242F0 *item;
    int field0c;
    unsigned char flags;
    char pad11[3];
} Entry_830242F0;

typedef struct Output_830242F0 {
    char pad00[0xe];
    unsigned short mode;
} Output_830242F0;

typedef struct State_830242F0 {
    char pad00[4];
    float nextFirst;
    float first;
    float second;
    float nextSecond;
    char pad14[8];
    Entry_830242F0 entries[4];
    unsigned char flags;
    char pad6d[3];
    int active;
    char pad74[0xc];
    char context[0x80];
    unsigned int field100;
    unsigned int kind;
    char pad108[4];
    unsigned short mode;
    char pad10e[2];
    __vector4 values[2][2];
} State_830242F0;

extern void fn_83023170(void *context, void *data, Output_830242F0 *out);
extern void fn_83023178(void *context, void *data, Output_830242F0 *out);

static __forceinline float Clamp(float value)
{
    return (float)__fsel(value - 1.0f, 1.0f, value);
}

static __forceinline __vector4 Splat(float value)
{
    return __vspltw(__lvlx(&value, 0), 0);
}

static __forceinline void StorePair(__vector4 *out, __vector4 value)
{
    out[1] = value;
    out[0] = value;
}

void fn_830242F0(State_830242F0 *self, Output_830242F0 *out)
{
    __vector4 value;
    __vector4(*values)[2];
    __vector4(*secondPair)[2];
    if (self->active == 1) {
        unsigned char *flagsPtr = (unsigned char *)self + 0x2c;
        int count = 4;
        do {
            Entry_830242F0 *entry = (Entry_830242F0 *)(flagsPtr - 0x10);
            Item_830242F0 *item = entry->item;
            if (item != 0) {
                unsigned int flags = self->flags | *flagsPtr;
                if ((flags & 0x80) == 0) {
                    item->vt->update(item, &self->field100);
                } else if ((flags & 0x40) == 0) {
                    item->vt->disable(item);
                }
                *flagsPtr = (*flagsPtr >> 1 & 0x40) | (*flagsPtr & 0xbf);
            }
            flagsPtr += sizeof(Entry_830242F0);
        } while (--count != 0);
        self->flags = (self->flags >> 1 & 0x40) | (self->flags & 0xbf);
        out->mode = self->mode;
    }

    values = self->values;
    value = Splat(Clamp(self->nextFirst));
    StorePair(values[0], value);
    value = Splat(Clamp(self->first));
    secondPair = values + 1;
    StorePair(secondPair[0], value);
    values[0][1].vector4_f32[1] = Clamp(self->nextSecond);
    secondPair[0][1].vector4_f32[1] = Clamp(self->second);
    switch (self->kind) {
    case 0x3f:
        fn_83023178(self->context, &self->field100, out);
        break;
    case 3:
        fn_83023170(self->context, &self->field100, out);
        break;
    }
    self->first = self->nextFirst;
    self->second = self->nextSecond;
}
