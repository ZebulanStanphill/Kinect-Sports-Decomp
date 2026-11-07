typedef struct Obj_8285FD78 {
    char pad0[0x34];
    int f34;
    char pad38[0xC];
    void *f44;
} Obj_8285FD78;

typedef struct Src_8285FD78 {
    char pad0[0x30];
    float x;
    float y;
    float z;
} Src_8285FD78;

extern void fn_828105C8(void *out, float x, float y, float z);
extern void fn_82862308(void *obj, int a, void *v);
extern void fn_8285FCE0(Obj_8285FD78 *p, int a, int b);
extern void fn_8285FC38(Obj_8285FD78 *p, int a, int b);
extern void fn_8285F818(int v);

void fn_8285FD78(Obj_8285FD78 *param_1, int param_2, Src_8285FD78 *param_3, int param_4)
{
    float buf[4];

    if (param_1->f44 != 0) {
        fn_828105C8(buf, param_3->x, param_3->y, param_3->z);
        fn_82862308(param_1->f44, param_2, buf);
    }
    fn_8285FCE0(param_1, param_2, param_4);
    fn_8285FC38(param_1, param_2, param_4);
    fn_8285F818(param_1->f34);
}
