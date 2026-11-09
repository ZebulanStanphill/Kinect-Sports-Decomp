typedef struct Obj_829ECFA8 {
    int (**vt)(struct Obj_829ECFA8 *, unsigned __int64, unsigned __int64);
} Obj_829ECFA8;
unsigned int fn_829ECFA8(Obj_829ECFA8 *p, unsigned __int64 a, unsigned int b)
{
    return p->vt[0](p, a, (unsigned __int64)b) >= 0;
}
