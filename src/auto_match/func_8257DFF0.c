extern int lbl_8218E348[];

struct Obj_8257DFF0;
typedef struct {
    int pad[5];
    void (*fn14)(struct Obj_8257DFF0 *self);
} Vt_8257DFF0;
typedef struct Link_8257DFF0 {
    int pad;
    struct Link_8257DFF0 *next;
} Link_8257DFF0;
typedef struct Obj_8257DFF0 {
    Vt_8257DFF0 *vt;
    int pad4[3];
    Link_8257DFF0 link;
    char pad18[0x38 - 0x18];
    int kind;
} Obj_8257DFF0;
typedef struct {
    struct {
        int pad;
        Link_8257DFF0 *head;
    } slot[36];
    int pad120;
    Link_8257DFF0 *head2;
} Owner_8257DFF0;
typedef struct {
    int pad;
    Owner_8257DFF0 *owner;
} Top_8257DFF0;

static Obj_8257DFF0 *objOf(Link_8257DFF0 *l)
{
    if (l != 0)
        return (Obj_8257DFF0 *)((char *)l - 0x10);
    return 0;
}

void fn_8257DFF0(Top_8257DFF0 *top)
{
    Owner_8257DFF0 *o = top->owner;
    int i;
    Link_8257DFF0 *l;
    for (i = 0; i < 36; i++) {
        if (lbl_8218E348[i] != 0) {
            for (l = o->slot[i].head; l != 0; l = l->next) {
                Obj_8257DFF0 *obj = objOf(l);
                obj->vt->fn14(obj);
            }
        }
    }
    for (l = o->head2; l != 0; l = l->next) {
        Obj_8257DFF0 *obj = objOf(l);
        if (lbl_8218E348[obj->kind] != 0)
            obj->vt->fn14(obj);
    }
}
