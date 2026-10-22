extern void fn_8265C990(void *p, unsigned int flags);
extern void fn_82F45020(void *p);

typedef struct Item {
    char pad0[0x30];
    void *a;
    int pad34;
    void *b;
} Item;

typedef struct Obj {
    char pad0[0xc];
    int count;
    char pad10[0x18];
    Item *items[11];
    void *c;
} Obj;

void fn_82F15538(Obj *param_1)
{
    int i;
    Item **pp;
    Item *it;

    i = 0;
    if (0 < param_1->count) {
        pp = param_1->items;
        do {
            it = *pp;
            if (it != 0) {
                if (it->b != 0) {
                    fn_8265C990(it->b, 0x248c8000);
                    it->b = 0;
                }
                if (it->a != 0) {
                    fn_8265C990(it->a, 0x248c8000);
                    it->a = 0;
                }
                fn_82F45020(it);
                fn_8265C990(it, 0x248c8000);
                *pp = 0;
            }
            i++;
            pp++;
        } while (i < param_1->count);
    }
    if (param_1->c != 0) {
        fn_8265C990(param_1->c, 0x248c8000);
        param_1->c = 0;
    }
}
