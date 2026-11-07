typedef struct Sub_822471C8 Sub_822471C8;
typedef struct SubVt_822471C8 {
    char pad[0x3c];
    int (*get)(Sub_822471C8 *self);
} SubVt_822471C8;
struct Sub_822471C8 {
    SubVt_822471C8 *vt;
};

typedef struct Obj_822471C8 Obj_822471C8;
typedef struct ObjVt_822471C8 {
    char pad[8];
    char *(*getInner)(Obj_822471C8 *self);
} ObjVt_822471C8;
struct Obj_822471C8 {
    ObjVt_822471C8 *vt;
};

extern int fn_82247000(void);
extern unsigned char fn_8288B760(Obj_822471C8 *self);
extern void fn_828AB870(Sub_822471C8 *s, int idx);
extern void fn_822472C8(Obj_822471C8 *self, int idx);

void fn_822471C8(Obj_822471C8 *self, unsigned char force)
{
    unsigned char update = 0;
    int idx;
    int a;
    int b;
    Sub_822471C8 *s1;
    Sub_822471C8 *s2;
    Sub_822471C8 *s;

    idx = (fn_82247000() + 1) % 6;
    if (fn_8288B760(self) == 0) {
        s1 = (Sub_822471C8 *)(self->vt->getInner(self) + 0x9c);
        a = s1->vt->get(s1);
        s2 = (Sub_822471C8 *)(self->vt->getInner(self) + 0x48);
        b = s2->vt->get(s2);
        if (force == 0 || b > a) {
            update = 1;
        }
    } else {
        update = 1;
    }
    if (update) {
        if (fn_8288B760(self)) {
            s = (Sub_822471C8 *)(self->vt->getInner(self) + 0x48);
        } else {
            s = (Sub_822471C8 *)(self->vt->getInner(self) + 0x9c);
        }
        fn_828AB870(s, idx);
        fn_822472C8(self, idx);
    }
}
