struct Item_82A5C960 { int pad[2]; unsigned int kind; };
struct Owner_82A5C960 { int pad[2]; char list[1]; };

extern int fn_82A476E0(struct Owner_82A5C960 *self, struct Item_82A5C960 **item);
extern void *fn_82A5C878(void *list, struct Item_82A5C960 *item);
extern void fn_82A4F4E0(struct Item_82A5C960 *item);

int fn_82A5C960(struct Owner_82A5C960 *self)
{
    struct Item_82A5C960 *item = 0;
    int hr = 0;
    struct Item_82A5C960 *cur;

    while (fn_82A476E0(self, &item) && hr >= 0) {
        cur = item;
        if (fn_82A5C878(self->list, cur)) {
            hr = 0;
        } else {
            hr = 0x8007000e;
            if (cur->kind != 5) {
                fn_82A4F4E0(cur);
            }
        }
    }
    return hr;
}
