struct VObj_8301D200;

typedef struct VObjVT_8301D200 {
    void (*dtor)(struct VObj_8301D200 *self, int flags);
} VObjVT_8301D200;

typedef struct VObj_8301D200 {
    VObjVT_8301D200 *vt;
} VObj_8301D200;

typedef struct Item_8301D200 {
    char pad0[0xFC];
    VObj_8301D200 *main;     /* 0x0FC */
    VObj_8301D200 *slots[4]; /* 0x100 */
} Item_8301D200;

typedef struct Self_8301D200 {
    char pad0[0xC];
    Item_8301D200 *items[2]; /* 0x00C */
    char pad14[0x3D - 0x14];
    unsigned char pending; /* 0x03D */
    char pad3E[0x190 - 0x3E];
    int f190; /* 0x190 */
    int mode; /* 0x194 */
} Self_8301D200;

extern void *lbl_831BC770;
extern VObj_8301D200 *fn_8303A418(void *context, unsigned char create);
extern int fn_82FEF680(void *context, int *out);
extern unsigned char fn_8301CD48(Self_8301D200 *self, void *context);
extern int fn_8301BCA0(Self_8301D200 *self, VObj_8301D200 *object);
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void fn_82FA5190(void *heap, void *p);
extern void fn_8301E120(Item_8301D200 *item);
extern int fn_8301BEA0(Self_8301D200 *self, Item_8301D200 *item);
extern void fn_8301CFE8(Item_8301D200 *item, int flags);
extern void fn_8303A5E8(VObj_8301D200 *object, int flags);

int fn_8301D200(Self_8301D200 *self, void *context, unsigned char create)
{
    VObj_8301D200 *object;
    unsigned char found;
    int result;
    Item_8301D200 *item;
    int needsItem;

    object = fn_8303A418(context, create);
    if (object == 0) {
        return 2;
    }
    if (create) {
        self->mode = fn_82FEF680(context, &self->f190);
    }
    found = 0;
    if (self->mode != 0) {
        found = fn_8301CD48(self, context);
    }
    if (found && self->mode == 1) {
        result = 3;
    } else if (found && self->f190 == 0 && create) {
        result = 1;
        self->pending = 0;
    } else {
        result = fn_8301BCA0(self, object);
    }
    item = 0;
    needsItem = result == 1 || result == 0x3F;
    if (needsItem) {
        unsigned int i;

        item = (Item_8301D200 *)fn_82FA5060(lbl_831BC770, 0x110);
        if (item != 0) {
            fn_8301E120(item);
            item->main = object;
            for (i = 0; i < 4; i++) {
                item->slots[i] = 0;
            }
            for (i = 0; i < 2; i++) {
                if (self->items[i] == 0) {
                    self->items[i] = item;
                    break;
                }
            }
        } else {
            result = 0x34;
            goto fail;
        }
    }
    if (result == 1) {
        return fn_8301BEA0(self, item);
    }
    if (result == 0x3F) {
        return 0x3F;
    }
    if (item != 0) {
        fn_8301CFE8(item, 1);
        return result;
    }
fail:
    fn_8303A5E8(object, 1);
    {
        void *heap = lbl_831BC770;

        object->vt->dtor(object, 0);
        fn_82FA5190(heap, object);
    }
    return result;
}
