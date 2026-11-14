typedef struct Counter_822449A8 Counter_822449A8;
typedef struct CounterVtbl_822449A8 {
    void *slots[15];
    int (*value)(Counter_822449A8 *self);
} CounterVtbl_822449A8;
struct Counter_822449A8 { CounterVtbl_822449A8 *vt; };

typedef struct Data_822449A8 {
    char pad0[0x48];
    Counter_822449A8 a;
    char pad4c[0x50];
    Counter_822449A8 b;
} Data_822449A8;

typedef struct Obj_822449A8 Obj_822449A8;
typedef struct ObjVtbl_822449A8 {
    void *slots[2];
    Data_822449A8 *(*get)(Obj_822449A8 *self);
} ObjVtbl_822449A8;
struct Obj_822449A8 { ObjVtbl_822449A8 *vt; };

extern int fn_82247000(void *p);
extern unsigned char fn_8288B760(void *self);
extern void fn_828AB870(Counter_822449A8 *dst, int v);

void fn_822449A8(Obj_822449A8 *self, unsigned char limited)
{
    Counter_822449A8 *c;
    int a, b;
    fn_82247000(self);
    c = &self->vt->get(self)->a;
    a = c->vt->value(c);
    if (fn_8288B760(self)) {
        if (a < 5)
            fn_828AB870(&self->vt->get(self)->a, a + 1);
    } else {
        c = &self->vt->get(self)->b;
        b = c->vt->value(c);
        if (!limited || b < a)
            fn_828AB870(&self->vt->get(self)->b, b + 1);
    }
    fn_82247000(self);
}
