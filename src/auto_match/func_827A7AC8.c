typedef struct Iter_827A7AC8 {
    int *p;
    int idx;
} Iter_827A7AC8;

typedef struct Locals_827A7AC8 {
    unsigned int end[2];
    Iter_827A7AC8 it;
} Locals_827A7AC8;

extern void fn_827A5B10(Iter_827A7AC8 *it, int obj);
extern unsigned char fn_826A8E58(Iter_827A7AC8 *it, unsigned int *end);
extern void fn_827A58A8(Iter_827A7AC8 *it);
extern void fn_827A7148(void *p);
extern void fn_8267BE38(void *p);
extern void fn_827A71A0(int obj);

void fn_827A7AC8(int obj)
{
    Locals_827A7AC8 l;
    void *e;

    fn_827A5B10(&l.it, obj);
    l.end[0] = 0;
    l.end[1] = 0;
    if (fn_826A8E58(&l.it, l.end) == 0) {
        l.end[0] = 0;
        l.end[1] = 0;
        do {
            e = *(void **)(l.it.idx * 0x14 + *l.it.p + 0x18);
            if (e != 0) {
                fn_827A7148(e);
                fn_8267BE38(e);
            }
            fn_827A58A8(&l.it);
        } while (fn_826A8E58(&l.it, l.end) == 0);
    }
    fn_827A71A0(obj);
}
