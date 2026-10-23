typedef struct Obj Obj;
typedef struct ObjVtbl {
    void (*Destroy)(Obj *, int);
} ObjVtbl;
struct Obj {
    ObjVtbl *vt;
};
typedef struct Entry {
    unsigned int key;
    Obj *obj;
} Entry;
typedef struct Vec {
    Entry *begin;
    Entry *end;
} Vec;
typedef struct Owner {
    char pad[0x54];
    Vec *vec;
} Owner;

extern void _blkmov(void *dst, void *src, unsigned int n);
extern void fn_82FA5190(void *heap, void *p);
extern void *lbl_831BC768;

void fn_830009E0(Owner *o, unsigned int key)
{
    Vec *v = o->vec;
    Entry *it;
    if (v != 0) {
        it = v->begin;
        if (it != v->end) {
            do {
                if (it->key == key) {
                    Obj *obj = it->obj;
                    Entry *last;
                    if (obj != 0) {
                        void *heap = lbl_831BC768;
                        obj->vt->Destroy(obj, 0);
                        fn_82FA5190(heap, obj);
                    }
                    v = o->vec;
                    last = v->end - 1;
                    if (it < last) {
                        _blkmov(it, it + 1, ((((unsigned int)((char *)last - (char *)it) - 1) >> 3) + 1) * 8);
                    }
                    v->end--;
                } else {
                    it++;
                }
            } while (it != o->vec->end);
        }
    }
}
