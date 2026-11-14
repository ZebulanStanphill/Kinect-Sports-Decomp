typedef struct Iface10Vt_8304C640 {
    void (*f0)(void *self);
    void (*f1)(void *self, void *arg);
} Iface10Vt_8304C640;

typedef struct Iface10_8304C640 {
    Iface10Vt_8304C640 *vt;
} Iface10_8304C640;

typedef struct Iface3CVt_8304C640 {
    void (*f0)(void *self, int flags);
} Iface3CVt_8304C640;

typedef struct Iface3C_8304C640 {
    Iface3CVt_8304C640 *vt;
} Iface3C_8304C640;

struct Obj_8304C640;

typedef struct ObjVt_8304C640 {
    void (*f0)(struct Obj_8304C640 *self);
    void (*f1)(struct Obj_8304C640 *self);
    void (*f2)(struct Obj_8304C640 *self);
} ObjVt_8304C640;

typedef struct Obj_8304C640 {
    ObjVt_8304C640 *vt;          /* 0x00 */
    int pad04[3];                /* 0x04 */
    Iface10_8304C640 *p10;       /* 0x10 */
    int pad14[10];               /* 0x14 */
    Iface3C_8304C640 *p3c;       /* 0x3c */
} Obj_8304C640;

extern void fn_82FA5190(unsigned int heap, void *p);
extern unsigned int lbl_831BC770;
extern char lbl_831BC7FC[];

void fn_8304C640(Obj_8304C640 *obj)
{
    Iface10_8304C640 *p;
    Iface3C_8304C640 *q;

    obj->vt->f2(obj);
    p = obj->p10;
    if (p != 0) {
        p->vt->f1(p, lbl_831BC7FC);
    }
    q = obj->p3c;
    if (q != 0) {
        unsigned int heap = lbl_831BC770;
        q->vt->f0(q, 0);
        fn_82FA5190(heap, q);
        obj->p3c = 0;
        obj->p10 = 0;
    } else {
        obj->p10 = 0;
    }
}
