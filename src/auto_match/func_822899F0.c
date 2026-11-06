extern void fn_82289408(void *o, int a, int b, int c);
extern void fn_8229E090(void *p, int a, int b);

typedef struct Obj_822899F0 {
    char pad[0x604];
    int state;
    char pad608[0x11f8 - 0x608];
    void *child;
} Obj_822899F0;

void fn_822899F0(unsigned int mode, Obj_822899F0 *o)
{
    int state;

    switch (mode) {
    case 0:
        fn_82289408(o, 1, 0, 1);
        state = 9;
        break;
    case 1:
        state = 1;
        break;
    default:
        return;
    }
    o->state = state;
    if (o->child != 0) {
        fn_8229E090(o->child, 0, 1);
        o->child = 0;
    }
}
