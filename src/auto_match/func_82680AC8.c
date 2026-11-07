typedef struct Obj_82680AC8 {
    int pad[6];
    void *field18;
} Obj_82680AC8;

extern void *fn_8267B890(void *heap, unsigned int size, unsigned int flags);
extern void fn_8267C498(void);
extern Obj_82680AC8 *fn_826809F0(void *mem, int a, void *b, void *c);
extern void *lbl_831E7E64;

Obj_82680AC8 *fn_82680AC8(int param_1, void *param_2, void *param_3, void *heap)
{
    void *mem;
    Obj_82680AC8 *obj;

    if (heap == 0) {
        heap = lbl_831E7E64;
    }
    mem = fn_8267B890(heap, 0x30, 0);
    obj = mem ? fn_826809F0(mem, param_1, param_2, param_3) : 0;
    if (obj->field18 == 0 || param_2 == 0 || param_3 == 0) {
        fn_8267C498();
        obj = 0;
    }
    return obj;
}
