struct Ctx_83035568;
extern "C" void fn_830354F8(void);

class Item_83035568 {
public:
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2c();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3c();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void Visit(void (*cb)(void), int flag, Ctx_83035568 *ctx);   /* 0x4c */
    char pad4[0x14];
    unsigned short count;   /* 0x18 */
};

struct Entry_83035568 {
    int pad0[2];
    Item_83035568 *item;    /* 0x08 */
    char data[0xc];         /* 0x0c */
};

struct Vec_83035568 {
    int first;
    Entry_83035568 *begin;  /* 0x04 */
    Entry_83035568 *end;    /* 0x08 */
};

struct Self_83035568 {
    int pad0[3];
    Vec_83035568 items;     /* 0x0c */
};

struct Ctx_83035568 {
    Self_83035568 *self;    /* 0x50 */
    unsigned int cleared : 1;
    unsigned int second : 1;
    unsigned int rest : 30;
    void *data;             /* 0x58 */
    float value;            /* 0x5c */
    int pad;                /* 0x60 */
    unsigned char handled;  /* 0x64 */
};


static __forceinline int Vec_empty(Vec_83035568 *v)
{
    return v->end == v->begin;
}

extern "C" void fn_83035568(Self_83035568 *self, int flag, float value)
{
    Ctx_83035568 ctx;
    Entry_83035568 *e;
    if (Vec_empty(&self->items))
        return;
    ctx.self = self;
    ctx.second = 0;
    ctx.cleared = flag == 0;
    ctx.value = value;
    for (e = self->items.begin; e != self->items.end; e++) {
        Item_83035568 *item = e->item;
        if (item != 0 && item->count != 0) {
            ctx.handled = 0;
            ctx.data = e->data;
            e->item->Visit(fn_830354F8, flag, &ctx);
        }
    }
}
