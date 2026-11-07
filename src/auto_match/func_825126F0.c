typedef struct Obj_825126F0 Obj_825126F0;
typedef struct {
    void (*f0)(Obj_825126F0 *self);
} Vtbl_825126F0;
struct Obj_825126F0 {
    Vtbl_825126F0 *vt;
};

typedef struct {
    Obj_825126F0 *active[5];   /* 0x00 */
    Obj_825126F0 *last[4];     /* 0x14 */
    int countAC;               /* 0x24 */
    int countB0;               /* 0x28 */
    int pad2C[5];              /* 0x2C */
    int resultC8;              /* 0x40 */
    unsigned char flagCC;      /* 0x44 */
} Globals_825126F0;

typedef struct {
    char pad[0x114];
    void *f114;
} Globals2_825126F0;

extern int fn_823AB478(Obj_825126F0 *o);
extern void fn_825269D0(int a, int b);
extern void fn_82599418(void);
extern void fn_827D81A8(int a, int b);
extern unsigned char fn_828EA610(Obj_825126F0 *o);
extern Globals_825126F0 lbl_83265988;
extern Globals2_825126F0 lbl_8327F680;
extern int lbl_83265A24;

void fn_825126F0(int param_1, unsigned char param_2)
{
    Obj_825126F0 *o;

    if (lbl_83265988.active[param_1] != 0) {
        lbl_83265988.resultC8 = fn_823AB478(lbl_83265988.active[param_1]);
        o = lbl_83265988.active[param_1];
        lbl_83265988.last[param_1] = o;
        o->vt->f0(o);
    }
    lbl_83265988.active[param_1] = 0;
    lbl_83265988.flagCC = 1;
    lbl_83265988.countAC = lbl_83265988.countAC - 1;
    lbl_83265988.countB0 = lbl_83265988.countB0 - 1;
    if (param_2 == 0) {
        o = lbl_83265988.last[param_1];
        if (fn_828EA610(o) == 0 && *((unsigned char *)o + 0xd8) == 0) {
            int h = *(int *)((char *)o + 0x124);
            if (h != -1) {
                *(int *)((char *)o + 0x124) = -1;
                fn_827D81A8(lbl_83265A24, h);
                fn_82599418();
            }
        }
        if (lbl_8327F680.f114 != 0) {
            fn_825269D0(0x45, 0);
        }
    }
}
