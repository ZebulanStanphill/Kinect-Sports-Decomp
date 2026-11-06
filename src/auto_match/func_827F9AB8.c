void *memset(void *, int, unsigned int);


typedef struct Item_827F9AB8 {
    char pad[0x32];
    unsigned char level;
} Item_827F9AB8;

typedef struct Obj_827F9AB8 {
    int pad0[2];
    void *p8;
    char padC[0x20];
    unsigned short level;
    char pad2E[0x5a];
    unsigned short cachedLevel;
    unsigned short pad8A;
    unsigned char *visible;
} Obj_827F9AB8;

extern unsigned short fn_827F7210(Obj_827F9AB8 *obj);
extern void fn_827F98C8(Obj_827F9AB8 *obj, unsigned int index, Item_827F9AB8 **out);

static __forceinline unsigned char IsVisible_827F9AB8(Obj_827F9AB8 *obj, Item_827F9AB8 *item)
{
    if (item->level <= obj->level) {
        return 1;
    }
    return 0;
}

void fn_827F9AB8(Obj_827F9AB8 *obj)
{
    unsigned int count;
    unsigned int i;
    Item_827F9AB8 *item;

    if (obj->visible != 0 && obj->cachedLevel != obj->level) {
        obj->cachedLevel = obj->level;
        count = fn_827F7210(obj);
        if (obj->p8 == 0) {
            memset(obj->visible, 1, count);
        } else {
            for (i = 0; i < count; i++) {
                fn_827F98C8(obj, i, &item);
                if (item->level > obj->level) {
                    obj->visible[i] = 0;
                } else {
                    obj->visible[i] = 1;
                }
            }
        }
    }
}
