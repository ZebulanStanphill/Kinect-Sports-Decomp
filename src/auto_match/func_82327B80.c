typedef struct Node_82403F68 {
    int next;
    int pad[3];
    int val;
} Node_82403F68;

typedef struct Mgr_82403F68 {
    char pad[0x210];
    Node_82403F68 *list;
} Mgr_82403F68;

typedef struct Sub_82403F68 Sub_82403F68;
typedef struct SubVt_82403F68 {
    void *s[14];
    int (*find)(Sub_82403F68 *, int);
    int (*cur)(Sub_82403F68 *);
} SubVt_82403F68;
struct Sub_82403F68 {
    SubVt_82403F68 *vt;
};

typedef struct Obj_82403F68 Obj_82403F68;
typedef struct ObjVt_82403F68 {
    void *s0;
    char *(*get)(Obj_82403F68 *);
} ObjVt_82403F68;
struct Obj_82403F68 {
    ObjVt_82403F68 *vt;
    int pad[3];
    Mgr_82403F68 *mgr;
};

extern unsigned char fn_8288B760(Obj_82403F68 *p);

unsigned char fn_82327B80(Obj_82403F68 *p)
{
    int r;
    if (fn_8288B760(p)) {
        if (p->mgr->list->next != (int)p->mgr->list) {
            int key = ((Node_82403F68 *)p->mgr->list->next)->val;
            Sub_82403F68 *s = (Sub_82403F68 *)(p->vt->get(p) + 0x4f0);
            r = s->vt->find(s, key);
        } else {
            r = 0;
        }
    } else {
        Sub_82403F68 *t = (Sub_82403F68 *)(p->vt->get(p) + 0x4f0);
        r = t->vt->cur(t);
    }
    return r == 1;
}
