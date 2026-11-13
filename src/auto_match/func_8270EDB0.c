extern void *memset(void *dst, int c, unsigned int n);

typedef struct Entry_8270EDB0 {
    unsigned char data[0xd];
    unsigned char used;
    unsigned char pad[2];
} Entry_8270EDB0;

typedef struct Obj_8270EDB0 {
    Entry_8270EDB0 entries[100];
    int count;
    int f644;
    int f648;
} Obj_8270EDB0;

Obj_8270EDB0 *fn_8270EDB0(Obj_8270EDB0 *o)
{
    int i;
    for (i = 0; i < 100; i++) {
        o->entries[i].used = 0;
    }
    o->count = 0;
    o->f644 = 0;
    o->f648 = 0;
    memset(o, 0, sizeof(o->entries));
    return o;
}
