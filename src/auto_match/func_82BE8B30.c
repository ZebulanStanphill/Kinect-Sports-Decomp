typedef struct Obj_82BE8B30 {
    char pad[0x58];
    int mode;
} Obj_82BE8B30;

extern void *fn_82BE56B0(unsigned int size);
extern void *fn_82BE8A78(void *mem, void *arg, int n, void *a, void *b);
extern void *fn_82BE8E38(void);
extern void *fn_82BE8F70(void *p);
extern int fn_82BF3948(void);
extern int fn_82BF4060(void);
extern unsigned int fn_82D7E470(void);
extern Obj_82BE8B30 *lbl_8322B224;

int fn_82BE8B30(void *param_1, void *param_2)
{
    void *mem;
    unsigned int state;
    Obj_82BE8B30 *g;
    int v;

    if (lbl_8322B224 != 0) {
        return 1;
    }
    if (param_1 != 0 && param_2 != 0 && fn_82BE8E38() != 0 &&
        fn_82BF3948() != 0 && fn_82BF4060() != 0) {
        mem = fn_82BE56B0(0x68);
        lbl_8322B224 = (Obj_82BE8B30 *)(mem != 0
            ? fn_82BE8A78(mem, fn_82BE8F70(fn_82BE8E38()), 0x1e, param_1, param_2)
            : 0);
        if (lbl_8322B224 != 0) {
            state = fn_82D7E470();
            if (state != 0) {
                g = lbl_8322B224;
                if (state == 2) {
                    if (g == 0 || g->mode == 1) {
                        return 1;
                    }
                    v = 1;
                } else {
                    if (g == 0 || g->mode == 0) {
                        return 1;
                    }
                    v = 0;
                }
                g->mode = v;
            }
            return 1;
        }
    }
    return 0;
}
