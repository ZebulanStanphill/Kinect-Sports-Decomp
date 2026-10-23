extern unsigned int fn_826B14D8(int a, int b);
extern void fn_82720700(void *a, void *b);

typedef struct Sub Sub;
typedef struct SubVtbl {
    void *slots[13];
    void (*f34)(Sub *s, void *a, unsigned int b);
} SubVtbl;
struct Sub {
    SubVtbl *vt;
};

void fn_82719E58(int param_1, int param_2)
{
    unsigned int v;

    v = fn_826B14D8(*(int *)(param_2 + 0x78), 0x1d);
    ((Sub *)(param_1 + 0x10))->vt->f34((Sub *)(param_1 + 0x10), (void *)(param_2 + 0x78), v);
    fn_82720700((void *)(param_2 + 0x78), (void *)(param_1 + 0x10));
}
