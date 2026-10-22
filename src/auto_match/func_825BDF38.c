extern int fn_825200F0(void *out, int p);
extern int fn_827D96A0(void *a);
extern void *fn_827DDDD8(int set, int *key);
extern int fn_827DDFB8(int set, void *a);
extern int fn_82A1E650(int a, int b);

typedef struct Visitor Visitor;
typedef struct {
    void *f0;
    int (*accept)(Visitor *self, void *item);
} VisitorVtbl;
struct Visitor {
    VisitorVtbl *vtbl;
};

typedef struct {
    char pad[0x10];
    int items;
    unsigned int count;
} List;

int fn_825BDF38(int param_1, Visitor *param_2, int param_3)
{
    unsigned int i;
    List *list;
    int key;
    char buf[32];

    fn_82A1E650(*(int *)(param_1 + 0x1d8), -1);
    list = *(List **)(param_1 + 0x8c);
    for (i = 0; i < list->count; i++) {
        fn_825200F0(buf, list->items + i * 8);
        if (param_2->vtbl->accept(param_2, buf) != 0) {
            key = fn_827D96A0(buf);
            if (fn_827DDDD8(param_3, &key) == 0) {
                fn_827DDFB8(param_3, buf);
            }
        }
        list = *(List **)(param_1 + 0x8c);
    }
    return 0;
}
