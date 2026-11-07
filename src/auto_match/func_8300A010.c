typedef struct Obj_8300A010 {
    char pad[0xa0];
    unsigned char hi : 3;
    unsigned char busy : 1;
    unsigned char ok : 1;
    unsigned char lo : 3;
} Obj_8300A010;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_82CE03A8(int *out);
extern void fn_830095D0(Obj_8300A010 *o);
extern char lbl_832645B4[];
extern Obj_8300A010 *lbl_832645AC;

void fn_8300A010(Obj_8300A010 *o)
{
    int res;

    RtlEnterCriticalSection(lbl_832645B4);
    if (o->busy == 0 && lbl_832645AC == 0) {
        lbl_832645AC = o;
        o->busy = 1;
        fn_82CE03A8(&res);
        o->ok = (res == 0);
        if (o->ok) {
            fn_830095D0(o);
        }
    }
    RtlLeaveCriticalSection(lbl_832645B4);
}
