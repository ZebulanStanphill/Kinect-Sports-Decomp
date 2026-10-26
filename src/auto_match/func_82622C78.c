typedef struct Item { int pad; void *res; int active; } Item;
typedef struct Owner { char pad[0xaf0]; unsigned int count; } Owner;
extern void *lbl_8320A898;
extern void fn_8264C398(void *mgr, void *res);

void fn_82622C78(int *p)
{
    unsigned int n = ((Owner *)p[1])->count;
    Item *it = (Item *)p[(n - 1) % 3 + 9];
    if (it->active != 0) {
        fn_8264C398(lbl_8320A898, it->res);
    }
}
