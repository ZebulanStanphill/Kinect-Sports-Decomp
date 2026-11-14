struct Obj_8257E0B8;
typedef struct {
    int pad[6];
    void (*fn18)(struct Obj_8257E0B8 *self, int arg);
} Vt_8257E0B8;
typedef struct Link_8257E0B8 {
    int pad;
    struct Link_8257E0B8 *next;
} Link_8257E0B8;
typedef struct Obj_8257E0B8 {
    Vt_8257E0B8 *vt;
    int pad4[3];
    Link_8257E0B8 link;
} Obj_8257E0B8;
typedef struct {
    struct {
        int pad;
        Link_8257E0B8 *head;
    } slot[36];
    int pad120;
    Link_8257E0B8 *head2;
    int pad128;
    Link_8257E0B8 *head3;
} Owner_8257E0B8;
typedef struct {
    int pad;
    Owner_8257E0B8 *owner;
} Top_8257E0B8;

static Obj_8257E0B8 *objOf(Link_8257E0B8 *l)
{
    if (l != 0)
        return (Obj_8257E0B8 *)((char *)l - 0x10);
    return 0;
}

void fn_8257E0B8(Top_8257E0B8 *top, int arg)
{
    Owner_8257E0B8 *o = top->owner;
    int i;
    Link_8257E0B8 *l;
    for (i = 0; i < 36; i++) {
        for (l = o->slot[i].head; l != 0; l = l->next) {
            Obj_8257E0B8 *obj = objOf(l);
            obj->vt->fn18(obj, arg);
        }
    }
    for (l = o->head3; l != 0; l = l->next) {
        Obj_8257E0B8 *obj = objOf(l);
        obj->vt->fn18(obj, arg);
    }
    for (l = o->head2; l != 0; l = l->next) {
        Obj_8257E0B8 *obj = objOf(l);
        obj->vt->fn18(obj, arg);
    }
}
