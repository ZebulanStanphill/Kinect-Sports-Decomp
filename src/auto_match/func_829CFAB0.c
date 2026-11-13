typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);
extern RTL_CRITICAL_SECTION lbl_8315C428;
extern char lbl_83215000[];

typedef struct Link_829CFAB0 {
    struct Link_829CFAB0 *next;
    struct Link_829CFAB0 *prev;
} Link_829CFAB0;

typedef struct Item_829CFAB0 {
    Link_829CFAB0 link;
    int pad08[25];
    int state;            /* 0x6c */
} Item_829CFAB0;

typedef struct Owner_829CFAB0 {
    int pad[8];
    Item_829CFAB0 *spare; /* 0x20 */
    Link_829CFAB0 list;   /* 0x24 */
    int pad2c[3];
    int busy;             /* 0x38 */
} Owner_829CFAB0;

Item_829CFAB0 *fn_829CFAB0(int idx)
{
    Owner_829CFAB0 *o;
    Item_829CFAB0 *item = 0;

    RtlEnterCriticalSection(&lbl_8315C428);
    o = ((Owner_829CFAB0 **)(lbl_83215000 + 0x2128))[idx];
    if (o != 0 && o->busy == 0) {
        item = (Item_829CFAB0 *)o->list.next;
        if (&item->link != &o->list) {
            Link_829CFAB0 *next = item->link.next;
            Link_829CFAB0 *prev = item->link.prev;
            prev->next = next;
            next->prev = prev;
        } else {
            item = o->spare;
            o->spare = 0;
        }
        item->state = 2;
    }
    RtlLeaveCriticalSection(&lbl_8315C428);
    return item;
}
