typedef struct Obj_82286080 {
    char pad[0xd8];
    unsigned char flag;
} Obj_82286080;

extern int fn_823AB470(Obj_82286080 *p);
extern unsigned char fn_828EA610(Obj_82286080 *p);

static __forceinline unsigned char isState2_82286080(Obj_82286080 *p)
{
    return p != 0 && fn_823AB470(p) == 2;
}

unsigned char fn_82286080(Obj_82286080 *p)
{
    unsigned char ok = 1;

    if (isState2_82286080(p) || fn_828EA610(p) || p->flag) {
        ok = 0;
    }
    return !ok;
}
