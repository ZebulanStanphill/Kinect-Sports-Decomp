typedef struct {
    int a;
    int b;
    int c;
} Acc_82A47678;

typedef struct {
    char pad[0x134];
    unsigned int count;
    int pad138;
    Acc_82A47678 acc;
    int pad148;
    void *list;
} Obj_82A47678;

extern void fn_82A45808(void *list, unsigned int i, Acc_82A47678 *acc);

static __forceinline void Clear_82A47678(Acc_82A47678 *p)
{
    p->a = 0;
    p->b = 0;
    p->c = 0;
}

void fn_82A47678(Obj_82A47678 *self)
{
    unsigned int i;
    Clear_82A47678(&self->acc);
    for (i = 0; i < self->count; i++) {
        fn_82A45808(self->list, i, &self->acc);
    }
}
