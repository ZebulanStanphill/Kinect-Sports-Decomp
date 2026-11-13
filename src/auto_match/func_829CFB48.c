typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);
extern RTL_CRITICAL_SECTION lbl_8315C428;
extern char lbl_83215000[];

typedef struct Link_829CFB48 {
    struct Link_829CFB48 *next;
    struct Link_829CFB48 *prev;
} Link_829CFB48;

typedef struct Owner_829CFB48 {
    int pad[9];
    Link_829CFB48 list;
} Owner_829CFB48;

typedef struct Item_829CFB48 {
    Link_829CFB48 link;
    int pad08[10];
    int sub[15];
    int f6c;
} Item_829CFB48;

extern void fn_829CB790(int *p);

void fn_829CFB48(int idx, Item_829CFB48 *item)
{
    Owner_829CFB48 *o;

    RtlEnterCriticalSection(&lbl_8315C428);
    o = ((Owner_829CFB48 **)(lbl_83215000 + 0x2128))[idx];
    if (o != 0) {
        Link_829CFB48 *next;
        item->f6c = 0;
        fn_829CB790(item->sub);
        next = o->list.next;
        item->link.prev = &o->list;
        item->link.next = next;
        next->prev = &item->link;
        o->list.next = &item->link;
    }
    RtlLeaveCriticalSection(&lbl_8315C428);
}
