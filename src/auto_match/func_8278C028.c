typedef struct Obj_8278C028 {
    char pad0[0x2a];
    unsigned short pad1 : 13;
    unsigned short flag : 1;
    unsigned short pad2 : 2;
} Obj_8278C028;

extern int fn_8268B330(void *p);
extern void fn_83140010(void);
int __cdecl atexit(void (__cdecl *func)(void));
extern unsigned int lbl_831F1398;
extern unsigned int lbl_831F139C;

unsigned int *fn_8278C028(Obj_8278C028 *param_1)
{
    unsigned int *result;

    if ((lbl_831F139C & 1) == 0) {
        lbl_831F139C = lbl_831F139C | 1;
        fn_8268B330(&lbl_831F1398);
        atexit(fn_83140010);
    }
    result = (unsigned int *)((char *)param_1 + 8);
    if ((unsigned char)param_1->flag == 0) {
        result = &lbl_831F1398;
    }
    return result;
}
