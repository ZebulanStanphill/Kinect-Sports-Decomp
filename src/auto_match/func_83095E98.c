typedef struct Obj_83095E98 Obj_83095E98;
typedef struct List_83095E98 List_83095E98;

typedef struct ObjVt_83095E98 {
    void *s0;
    void *s1;
    void *s2;
    void *s3;
    List_83095E98 *(*getList)(Obj_83095E98 *self);
} ObjVt_83095E98;

struct Obj_83095E98 {
    ObjVt_83095E98 *vt;
};

typedef struct ListVt_83095E98 {
    void *s0;
    void *s1;
    int (*first)(List_83095E98 *self);
    int (*next)(List_83095E98 *self, int it);
    void *s4;
    Obj_83095E98 *(*get)(List_83095E98 *self, int it, void *buf);
} ListVt_83095E98;

struct List_83095E98 {
    ListVt_83095E98 *vt;
};

unsigned char fn_83095E98(Obj_83095E98 *obj)
{
    List_83095E98 *list;
    unsigned char maxDepth;
    unsigned char d;
    int it;
    unsigned char buf[512];

    list = obj->vt->getList(obj);
    if (list != 0) {
        maxDepth = 0;
        it = list->vt->first(list);
        while (it != -1) {
            d = fn_83095E98(list->vt->get(list, it, buf));
            if (d > maxDepth) {
                maxDepth = d;
            }
            it = list->vt->next(list, it);
        }
        return (unsigned char)(maxDepth + 1);
    }
    return 0;
}
