typedef struct Obj_82FB0968 {
    int pad[5];
    unsigned int flags; /* 0x14 */
} Obj_82FB0968;

typedef struct Entry_82FB0968 {
    int key;
    Obj_82FB0968 *obj;
} Entry_82FB0968;

typedef struct Owner_82FB0968 {
    char pad[0x88];
    Entry_82FB0968 *begin; /* 0x88 */
    Entry_82FB0968 *end;   /* 0x8c */
} Owner_82FB0968;

void fn_82FB0968(Owner_82FB0968 *param_1, unsigned int param_2)
{
    Entry_82FB0968 *e;

    for (e = param_1->begin; e != param_1->end; e++) {
        Obj_82FB0968 *o = e->obj;
        o->flags = (o->flags & 0xbfffffff) | ((param_2 & 1) << 30);
    }
}
