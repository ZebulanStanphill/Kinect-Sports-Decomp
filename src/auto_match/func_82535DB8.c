typedef struct Obj Obj;
typedef struct ObjVtbl {
    char pad[0x50];
    void (*f50)(Obj *self, int *arg);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

typedef struct Mgr Mgr;
typedef struct MgrVtbl {
    char pad[0x38];
    unsigned char (*has)(Mgr *self, Obj *obj);
} MgrVtbl;
struct Mgr {
    MgrVtbl *vtbl;
};

typedef struct Sys Sys;
typedef struct SysVtbl {
    char pad[0x1c];
    Mgr *(*getMgr)(Sys *self);
} SysVtbl;
struct Sys {
    SysVtbl *vtbl;
};

typedef struct Entry {
    int pad0;
    Obj *obj;
    unsigned int a;
    int b;
} Entry;

typedef struct Vec {
    Entry **first;
    Entry **last;
} Vec;

extern Vec *lbl_8327F86C;
extern Sys *fn_82864E90(void);
extern void fn_8265CA20(void *p);
extern void *memmove(void *dst, const void *src, unsigned int n);

void fn_82535DB8(unsigned int a, int b, Obj *obj)
{
    Vec *v = lbl_8327F86C;
    Entry **it;
    Entry **next;
    Entry *e;
    Sys *s;
    Mgr *m;
    Obj *o;

    it = v->first;
    if (it != v->last) {
        next = it + 1;
        do {
            e = *it;
            if (e->a == a && e->b == b && e->obj == obj) {
                s = fn_82864E90();
                m = s->vtbl->getMgr(s);
                if (m->vtbl->has(m, e->obj)) {
                    o = e->obj;
                    {
                        int zero = 0;
                        o->vtbl->f50(o, &zero);
                    }
                }
                memmove(it, next, (v->last - next) * sizeof(Entry *));
                v->last--;
                fn_8265CA20(e);
            } else {
                it++;
                next++;
            }
        } while (it != v->last);
    }
}
