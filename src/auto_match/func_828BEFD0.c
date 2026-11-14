typedef struct Iter_828BEFD0 {
    void *a;
    void *b;
} Iter_828BEFD0;

extern char lbl_8321434C[];
extern void *fn_8288A398(void);
extern void fn_828C4370(Iter_828BEFD0 *out, void *map);
extern void *fn_828C4348(Iter_828BEFD0 *out, Iter_828BEFD0 *it);
extern void fn_828C6408(void *map, void *where, void *buf);
extern void fn_828C6AF0(void *map, int id, void *buf);
extern unsigned int fn_828E9D90(void *buf);
extern void fn_828E9D60(void *buf, unsigned int size);

void fn_828BEFD0(int id, void *buf)
{
    if (id == 0x19) {
        Iter_828BEFD0 it;
        Iter_828BEFD0 it2;
        unsigned int aligned;
        fn_8288A398();
        fn_828C4370(&it, lbl_8321434C);
        aligned = (fn_828E9D90(buf) + 7) & ~7u;
        fn_828C6408(lbl_8321434C, fn_828C4348(&it2, &it), buf);
        if (fn_828E9D90(buf) > aligned) {
            fn_828E9D60(buf, aligned);
        }
    } else {
        fn_828C6AF0(lbl_8321434C, id, buf);
    }
}
