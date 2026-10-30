typedef struct Msg_82FEA5E0 { short f0; short id; struct Obj_82FEA5E0 *obj; int val; char tail[24]; } Msg_82FEA5E0;
typedef struct VT_82FEA5E0 { void *f0; void *f4; void (*f8)(struct Obj_82FEA5E0 *); } VT_82FEA5E0;
typedef struct Obj_82FEA5E0 { VT_82FEA5E0 *vt; char pad[0x54]; char f58; } Obj_82FEA5E0;
extern Obj_82FEA5E0 *fn_82FAB9C0(int base, unsigned int a);
extern unsigned short fn_8300F1A0();
extern unsigned int fn_8300F208(void *q, Msg_82FEA5E0 *m, unsigned int id);
extern int lbl_832642E0;
extern void *lbl_832642E4;

unsigned int fn_82FEA5E0(unsigned int a, int v)
{
    Msg_82FEA5E0 m;
    Obj_82FEA5E0 *o;
    m.id = 0x17;
    o = fn_82FAB9C0(lbl_832642E0 + 0x1304, a);
    m.obj = o;
    if (o != 0) {
        if (o->f58 == 0) {
            if (v == 3)
                o->f58 = 1;
            m.val = v;
            return fn_8300F208(lbl_832642E4, &m, fn_8300F1A0());
        }
        o->vt->f8(o);
    }
    return 2;
}
