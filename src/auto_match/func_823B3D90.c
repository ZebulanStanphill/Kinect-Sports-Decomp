typedef struct Locator_823B3D90 Locator_823B3D90;
typedef struct Item_823B3D90 Item_823B3D90;

typedef struct LocatorVtbl_823B3D90 {
    void *slots[2];
    void (*Notify)(Locator_823B3D90 *self, int event, int arg); /* 0x8 */
} LocatorVtbl_823B3D90;

struct Locator_823B3D90 {
    LocatorVtbl_823B3D90 *vt; /* 0x0 */
    Item_823B3D90 *item;      /* 0x4 */
};

struct Item_823B3D90 {
    char pad0[0x190];
    int state; /* 0x190 */
    char pad194[0x1c];
    Locator_823B3D90 *locator; /* 0x1b0 */
};

typedef struct Group_823B3D90 {
    char name[0x84];
    void *list; /* 0x84 */
    int pad88;
    int visible; /* 0x8c */
} Group_823B3D90;

extern Locator_823B3D90 *fn_825735B8(void *list, Group_823B3D90 *name);
extern Item_823B3D90 *fn_825764F0(void *list, Group_823B3D90 *name, Item_823B3D90 *after);

void fn_823B3D90(Group_823B3D90 *self, int show)
{
    Locator_823B3D90 *locator;
    Item_823B3D90 *item;

    if (show) {
        if (self->visible) {
            locator = fn_825735B8(self->list, self);
            while (locator != 0) {
                locator->vt->Notify(locator, 7, 0);
                item = fn_825764F0(self->list, self, locator->item);
                locator = item ? item->locator : 0;
            }
            return;
        }
        locator = fn_825735B8(self->list, self);
        while (locator != 0) {
            locator->vt->Notify(locator, 5, 0);
            item = fn_825764F0(self->list, self, locator->item);
            locator = item ? item->locator : 0;
        }
        self->visible = 1;
    } else {
        if (!self->visible) {
            return;
        }
        locator = fn_825735B8(self->list, self);
        while (locator != 0) {
            locator->item->state = 0;
            item = fn_825764F0(self->list, self, locator->item);
            locator = item ? item->locator : 0;
        }
        self->visible = 0;
    }
}
