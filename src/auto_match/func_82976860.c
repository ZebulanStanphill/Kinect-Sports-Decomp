typedef struct { char pad[0xc]; int value; char pad2[0x34]; int link; } Node_82976860;
typedef struct Obj_82976860 Obj_82976860;
struct Obj_82976860 {
    int f0;
    int f4;
    unsigned int count;
    int fc;
    int f10;
    Node_82976860 **nodes;
    char pad18[0xe4 - 0x18];
    Obj_82976860 *other;
};

extern int fn_8296DE50(Obj_82976860 *o);

int fn_82976860(Obj_82976860 *o)
{
    unsigned int i;
    if (o->other == 0) {
        return 1;
    }
    for (i = 0; i < o->count; i++) {
        Node_82976860 *n = o->nodes[i];
        if (n->link != -1) {
            o->other->nodes[n->link]->value = n->value;
            o->other->nodes[n->link]->link = i;
        }
    }
    return fn_8296DE50(o->other);
}
