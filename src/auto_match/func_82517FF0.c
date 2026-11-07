typedef struct Iface_82517FF0 Iface_82517FF0;
typedef struct Pair_82517FF0 {
    int a;
    int b;
} Pair_82517FF0;
typedef struct IfaceVtbl_82517FF0 {
    void *f0;
    void (*get)(Pair_82517FF0 *out, Iface_82517FF0 *self, int arg);
} IfaceVtbl_82517FF0;
struct Iface_82517FF0 {
    IfaceVtbl_82517FF0 *vtbl;
};
typedef struct Holder_82517FF0 {
    int pad[4];
    Iface_82517FF0 *obj;
} Holder_82517FF0;

extern void fn_82517ED8(Holder_82517FF0 *h);
extern void fn_82359C18(Holder_82517FF0 *h);

Pair_82517FF0 *fn_82517FF0(Pair_82517FF0 *out, int arg)
{
    Holder_82517FF0 h;

    fn_82517ED8(&h);
    if (h.obj != 0) {
        h.obj->vtbl->get(out, h.obj, arg);
    } else {
        out->a = 0;
        out->b = 0;
    }
    fn_82359C18(&h);
    return out;
}
