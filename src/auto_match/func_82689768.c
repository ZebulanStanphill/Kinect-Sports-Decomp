typedef struct Item_82689768 Item_82689768;

typedef struct ItemVt_82689768 {
    void *slots[11];
    void (*attach)(Item_82689768 *self, void *link);   /* 0x2c */
    void (*detach)(Item_82689768 *self, void *link);   /* 0x30 */
} ItemVt_82689768;

struct Item_82689768 {
    ItemVt_82689768 *vt;
    long refs;                  /* 0x04 */
};

typedef struct Obj_82689768 {
    int pad0;
    int pad4;
    char link[4];               /* 0x08 */
    Item_82689768 *item;        /* 0x0c */
    int pad10;
    void *pending;              /* 0x14 */
} Obj_82689768;

extern long _InterlockedExchangeAdd(long volatile *target, long value);
extern void fn_8267C498(void *p);
extern void fn_82670230(Item_82689768 *item);

static __forceinline void Set_82689768(Item_82689768 **slot, Item_82689768 *p)
{
    if (p != 0)
        _InterlockedExchangeAdd(&p->refs, 1);
    if (*slot != 0)
        fn_82670230(*slot);
    *slot = p;
}

void fn_82689768(Obj_82689768 *self, Item_82689768 *item)
{
    if (self->item != item) {
        {
            void **p = &self->pending;
            if (*p != 0)
                fn_8267C498(*p);
            *p = 0;
        }
        {
            Item_82689768 *cur = self->item;
            if ((int)cur != 0)
                cur->vt->detach(cur, self->link);
        }
        if (item != 0) {
            item->vt->attach(item, self->link);
        }
        Set_82689768(&self->item, item);
    }
}
