typedef struct { char pad[8]; unsigned int v; char pad2[0x84 - 0xc]; int state; } Item_82FED980;
typedef struct { Item_82FED980 **first; Item_82FED980 **last; } Vec_82FED980;
extern Vec_82FED980 lbl_832643F4;
extern void fn_82FED378(Item_82FED980 *);
extern void fn_82FED0C0(Item_82FED980 *);

void fn_82FED980(void)
{
    Item_82FED980 **p = lbl_832643F4.first;
    Item_82FED980 *item;
    if (lbl_832643F4.first != lbl_832643F4.last) {
        do {
            item = *p;
            fn_82FED378(item);
            if (item->state == 1 || item->v != 0) {
                p = p + 1;
            } else {
                fn_82FED0C0(item);
                if ((unsigned int)(lbl_832643F4.last - lbl_832643F4.first) > 1) {
                    *p = lbl_832643F4.last[-1];
                }
                lbl_832643F4.last = lbl_832643F4.last - 1;
            }
        } while (p != lbl_832643F4.last);
    }
}
