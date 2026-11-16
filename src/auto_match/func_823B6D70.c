typedef struct Item_823B6D70 Item_823B6D70;

typedef struct Vtable_823B6D70 {
    void *reserved[2];
    char *(*GetOwner)(Item_823B6D70 *self);
} Vtable_823B6D70;

struct Item_823B6D70 {
    Vtable_823B6D70 *vtable;
    char padding[0x7c];
    int state;
};

typedef struct Object_823B6D70 {
    char *owner;
    int reserved[2];
    char *item;
    int active;
    float time;
} Object_823B6D70;

extern unsigned char fn_8288B760(Item_823B6D70 *item);
extern int fn_823B67F8(Object_823B6D70 *self);
extern int fn_8243C3D0(void *self, int flags);
extern unsigned __int64 fn_828B00A0(void *self);
extern void fn_8243C490(void *self, const unsigned __int64 *value);

static __forceinline Item_823B6D70 *GetItem(Object_823B6D70 *self)
{
    return self->item ? (Item_823B6D70 *)(self->item - 0x68) : 0;
}

void fn_823B6D70(Object_823B6D70 *self)
{
    if ((int)self->item != 0 && fn_8288B760(GetItem(self)) && fn_823B67F8(self)) {
        Item_823B6D70 *item = GetItem(self);
        if (fn_8243C3D0(item->vtable->GetOwner(item) + 0x9c, 0) == 0) {
            unsigned __int64 value = fn_828B00A0(self->owner + 0x278);
            item = GetItem(self);
            fn_8243C490(item->vtable->GetOwner(item) + 0x9c, &value);
            self->time = 0.0f;
            item = GetItem(self);
            item->state = 0;
            self->active = 1;
        }
    }
}
