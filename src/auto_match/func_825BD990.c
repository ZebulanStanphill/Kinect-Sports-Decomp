typedef struct Rep_825BD990 Rep_825BD990;
typedef struct Ptr_825BD990 {
    void *p;
    Rep_825BD990 *rep;
} Ptr_825BD990;

typedef struct Owner_825BD990 {
    char pad[0x21c];
    Ptr_825BD990 *first;
    Ptr_825BD990 *last;
} Owner_825BD990;

extern void fn_82365BD8(Ptr_825BD990 *out, Ptr_825BD990 *src);
extern int fn_827D98B0(void *p);
extern void fn_822315A0(Rep_825BD990 *rep);

int fn_825BD990(Owner_825BD990 *self)
{
    Ptr_825BD990 *it = self->first;
    Ptr_825BD990 *end = self->last;
    while (it != end) {
        Ptr_825BD990 sp;
        fn_82365BD8(&sp, it);
        if (fn_827D98B0(sp.p) != 0) {
            if (sp.rep != 0)
                fn_822315A0(sp.rep);
            return 0;
        }
        it++;
        if (sp.rep != 0)
            fn_822315A0(sp.rep);
    }
    return 1;
}
