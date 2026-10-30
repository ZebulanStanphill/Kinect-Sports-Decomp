struct VT_829E2EE0;
typedef struct Obj_829E2EE0 { struct VT_829E2EE0 *vt; } Obj_829E2EE0;
typedef struct VT_829E2EE0 { void *pad[2]; void (*f)(Obj_829E2EE0 *); } VT_829E2EE0;
extern void fn_829E1B50(void);
extern void fn_829E2E80(unsigned int, int);
extern unsigned int lbl_83217B88;
extern Obj_829E2EE0 *lbl_83217BA8[];
void fn_829E2EE0(void)
{
    if (lbl_83217BA8[-1] != 0) {
        lbl_83217BA8[-1]->vt->f(lbl_83217BA8[-1]);
        lbl_83217BA8[-1] = 0;
    }
    if (lbl_83217BA8[0] != 0) {
        lbl_83217BA8[0]->vt->f(lbl_83217BA8[0]);
        lbl_83217BA8[0] = 0;
    }
    fn_829E1B50();
    if (lbl_83217B88 != 0) {
        fn_829E2E80(lbl_83217B88, 1);
        lbl_83217B88 = 0;
    }

}
