typedef struct { char pad[0x18]; unsigned int a; unsigned int b; } Ent_8262EFA8;
typedef struct { char pad[0xc]; char *k; char pad2[0x28]; Ent_8262EFA8 **begin; Ent_8262EFA8 **end; } Obj_8262EFA8;
typedef struct { void *first; void *rep; } Pair_8262EFA8;
extern unsigned int fn_827D96A0(void *);
extern void fn_827D5078(void *, unsigned int);
extern void fn_827D5090(void *, unsigned int);
extern void fn_827D50A8(void *, unsigned int);
extern void fn_822315A0(void *);

int fn_8262EFA8(Obj_8262EFA8 *o, int unused, Pair_8262EFA8 *out)
{
    unsigned int key = fn_827D96A0(o->k + 0x68);
    Ent_8262EFA8 **it = o->begin;
    Ent_8262EFA8 **end = o->end;
    Ent_8262EFA8 *e;
    Ent_8262EFA8 *c;
    for (; it != end; it++) {
        c = *it;
        if ((fn_827D96A0(c) & 0xffff) == key) {
            e = c;
            goto found;
        }
    }
    e = 0;
found:
    if (e == 0) {
        fn_827D5078(out->first, 0);
        fn_827D5090(out->first, 0);
        fn_827D50A8(out->first, 0);
        if (out->rep != 0) fn_822315A0(out->rep);
        return 2;
    }
    fn_827D5078(out->first, e->a);
    fn_827D5090(out->first, e->b);
    fn_827D50A8(out->first, 0);
    if (out->rep != 0) fn_822315A0(out->rep);
    return 0;
}
