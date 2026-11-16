typedef struct Item_823B6E70 Item_823B6E70;

typedef struct Vtable_823B6E70 {
    void *reserved[2];
    char *(*GetOwner)(Item_823B6E70 *self);
} Vtable_823B6E70;

struct Item_823B6E70 {
    Vtable_823B6E70 *vtable;
    char padding[0x7c];
    int state;
};

typedef struct Object_823B6E70 {
    char *owner;
    int reserved[2];
    char *item;
    int active;
    float time;
} Object_823B6E70;

extern unsigned char fn_8288B760(Item_823B6E70 *item);
extern int fn_8243C3D0(void *self, int flags);
extern unsigned __int64 fn_828B00A0(void *self);
extern void fn_8243C490(void *self, const unsigned __int64 *value);

static __forceinline Item_823B6E70 *GetItem(Object_823B6E70 *self)
{
    return self->item ? (Item_823B6E70 *)(self->item - 0x68) : 0;
}

extern char lbl_821B9BC8[];

typedef struct Request_823B6E70 {
    const void *type;
    int value;
} Request_823B6E70;
typedef struct Provider_823B6E70 Provider_823B6E70;

typedef struct ProviderVtable_823B6E70 {
    void *reserved[2];
    int (*get)(Provider_823B6E70 *);
} ProviderVtable_823B6E70;

struct Provider_823B6E70 {
    ProviderVtable_823B6E70 *vtable;
};

extern void fn_823B65F8(Object_823B6E70 *, const Request_823B6E70 *);
extern void fn_828AAF70(void *, int);

void fn_823B6E70(Object_823B6E70 *self)
{
    if ((int)self->item != 0 && fn_8288B760(GetItem(self))) {
        Item_823B6E70 *item = GetItem(self);
        if (fn_8243C3D0(item->vtable->GetOwner(item) + 0x9c, 0) == 1) {
            item = GetItem(self);
            if (fn_8243C3D0(item->vtable->GetOwner(item) + 0xf0, 0) == 0) {
                Request_823B6E70 request;
                unsigned __int64 value;
                Provider_823B6E70 *provider = *(Provider_823B6E70 **)(self->owner + 0x308);
                request.value = provider->vtable->get(provider);
                request.type = lbl_821B9BC8;
                fn_823B65F8(self, &request);
                value = fn_828B00A0(self->owner + 0x278);
                item = GetItem(self);
                fn_8243C490(item->vtable->GetOwner(item) + 0xf0, &value);
                item = GetItem(self);
                fn_828AAF70(item->vtable->GetOwner(item) + 0x144, 1);
                self->active = 0;
            }
        }
    }
}
