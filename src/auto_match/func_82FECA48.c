typedef struct Obj_82FECA48 {
    char pad[0x74];
    int state;
} Obj_82FECA48;
typedef struct { Obj_82FECA48 *obj; } Value_82FECA48;
typedef struct Node_82FECA48 {
    struct Node_82FECA48 *next;
    unsigned key;
    Value_82FECA48 value;
} Node_82FECA48;

extern Node_82FECA48 *lbl_831BC774;
extern int fn_83024AA0(Obj_82FECA48 *obj, unsigned key, int c);

int fn_82FECA48(unsigned key)
{
    Node_82FECA48 *n = lbl_831BC774;
    Value_82FECA48 *v;
    Obj_82FECA48 *o;
    while (n && n->key != key)
        n = n->next;
    v = n ? &n->value : 0;
    if (v) {
        o = v->obj;
        if (o->state != 2)
            return fn_83024AA0(o, key, 0);
    }
    return 0;
}
