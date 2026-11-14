typedef struct Value_826C0568 {
    unsigned char type;
    unsigned char flags;
    char pad[14];
} Value_826C0568;

typedef struct Iface_826C0568 Iface_826C0568;
typedef struct IfaceVt_826C0568 {
    void *slots[9];
    unsigned char (*get)(Iface_826C0568 *self, void *a, void *name, int b);
} IfaceVt_826C0568;
struct Iface_826C0568 {
    IfaceVt_826C0568 *vt;
};

typedef struct Proto_826C0568 {
    int pad0[4];
    Iface_826C0568 iface;
} Proto_826C0568;

typedef struct Obj_826C0568 {
    int pad0;
    int proto;
    char members[1];
} Obj_826C0568;

extern unsigned char fn_826BFF48(void *members, void *name, Value_826C0568 *out);
extern void fn_82696330(Value_826C0568 *v);

unsigned char fn_826C0568(Obj_826C0568 *self, void *a, void *name, unsigned char searchProto)
{
    Value_826C0568 v;
    unsigned char result;

    v.type = 0;
    v.flags = 0;
    if (fn_826BFF48(self->members, name, &v)) {
        fn_82696330(&v);
        return 1;
    }
    if (searchProto && self->proto != 0) {
        Iface_826C0568 *iface = &((Proto_826C0568 *)self->proto)->iface;
        result = iface->vt->get(iface, a, name, 1);
        fn_82696330(&v);
        return result;
    }
    fn_82696330(&v);
    return 0;
}
