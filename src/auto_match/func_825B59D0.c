extern void *fn_8265C9E0(unsigned int size);
extern char lbl_821C8494[];

typedef struct Src_825B59D0 {
    char pad[0x1fc];
    struct Src_825B59D0 *next;   /* 0x1fc */
} Src_825B59D0;

typedef struct Obj_825B59D0 {
    void *vt;
    Src_825B59D0 *src;
    struct Obj_825B59D0 *next;
} Obj_825B59D0;

Obj_825B59D0 *fn_825B59D0(Obj_825B59D0 *o, Src_825B59D0 *src)
{
    Src_825B59D0 *n;

    o->src = src;
    o->vt = lbl_821C8494;
    n = src->next;
    if (n != 0) {
        void *mem = fn_8265C9E0(sizeof(Obj_825B59D0));
        o->next = mem ? fn_825B59D0((Obj_825B59D0 *)mem, n) : 0;
    } else {
        o->next = 0;
    }
    return o;
}
