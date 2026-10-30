typedef struct {
    char pad[0x20];
    int x20;
    char pad2[0x3c - 0x24];
    int x3c;
    int x40;
} Obj_826A7828;

void fn_826A7828(Obj_826A7828 *o, int a, int b)
{
    if (a != -1) {
        o->x40 = a;
    } else {
        o->x40 = 0;
    }
    if (b != -1) {
        o->x20 = b;
        o->x3c = b;
    } else {
        o->x20 = 1000;
        o->x3c = 1000;
    }
}
