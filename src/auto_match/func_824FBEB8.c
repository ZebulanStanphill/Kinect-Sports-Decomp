extern void fn_8252D240(void *a, void *b, int c);
extern int fn_8255FA88(void *a);
extern void fn_82592430(void *a, int b);

typedef struct C {
    char pad[0x114];
    void *p;
} C;

typedef struct B {
    char pad[0x190];
    C **pc;
} B;

typedef struct A {
    char pad[0x190];
    B *b;
    char pad194[0xba0 - 0x194];
    int state;
    char data[4];
} A;

void fn_824FBEB8(A *a, int x)
{
    int r;
    if (a->b == 0 || (*a->b->pc)->p == 0) {
        r = 1;
    } else {
        r = fn_8255FA88((*a->b->pc)->p);
    }
    if (r != 0 && a->state == 3) {
        fn_8252D240(a, a->data, 0);
        a->state = 0;
    }
    fn_82592430(a, x);
}
