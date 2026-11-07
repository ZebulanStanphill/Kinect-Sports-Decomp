typedef struct ProfEntry_82D6BD10 {
    const char *name;
    unsigned int time;
    unsigned int pad;
} ProfEntry_82D6BD10;

typedef struct ProfTls_82D6BD10 {
    unsigned int f0;
    ProfEntry_82D6BD10 *cur;
    unsigned int f8;
    ProfEntry_82D6BD10 *end;
} ProfTls_82D6BD10;

struct Shape_82D6BD10;
typedef struct ShapeVt_82D6BD10 {
    void *s0;
    void *s4;
    void *s8;
    void *sC;
    void *s10;
    int (*Lookup)(Shape_82D6BD10 *self, int key, void *buf);
} ShapeVt_82D6BD10;
struct Shape_82D6BD10 {
    ShapeVt_82D6BD10 *vt;
};

struct Source_82D6BD10;
typedef struct SourceVt_82D6BD10 {
    void *s0;
    void *s4;
    void *s8;
    void *sC;
    Shape_82D6BD10 *(*GetShape)(Source_82D6BD10 *self);
} SourceVt_82D6BD10;
struct Source_82D6BD10 {
    SourceVt_82D6BD10 *vt;
};

typedef struct Args_82D6BD10 {
    Source_82D6BD10 *src;
    int f4;
    int f8;
} Args_82D6BD10;

typedef struct Query_82D6BD10 {
    int result;
    int key;
    int f8;
    Args_82D6BD10 *args;
} Query_82D6BD10;

class Listener_82D6BD10 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void Notify(Query_82D6BD10 *q, int a, int b, int c);
};

typedef struct Item_82D6BD10 {
    int key;
    Listener_82D6BD10 *obj;
} Item_82D6BD10;

typedef struct Collection_82D6BD10 {
    int f0;
    int f4;
    int f8;
    Item_82D6BD10 *items;
    unsigned int count;
} Collection_82D6BD10;

extern "C" unsigned int lbl_8323B4A0;
extern "C" void *KeTlsGetValue(unsigned int index);
extern "C" unsigned __int64 __mftb(void);

extern "C" void fn_82D6BD10(Collection_82D6BD10 *coll, Args_82D6BD10 *args, int a, int b, int c)
{
    ProfTls_82D6BD10 *t;
    ProfEntry_82D6BD10 *e;
    Shape_82D6BD10 *shape;
    Item_82D6BD10 *it;
    Query_82D6BD10 q;
    unsigned char buf[512];
    int i;
    int key;

    t = (ProfTls_82D6BD10 *)KeTlsGetValue(lbl_8323B4A0);
    e = t->cur;
    if (e < t->end) {
        e->name = "TtShapeCollection";
        e->time = (unsigned int)__mftb();
        t->cur = e + 1;
    }

    shape = args->src->vt->GetShape(args->src);
    q.f8 = args->f8;
    q.args = args;
    it = coll->items;
    for (i = coll->count - 1; i >= 0; i--) {
        key = it->key;
        q.result = shape->vt->Lookup(shape, key, buf);
        q.key = key;
        it->obj->Notify(&q, a, b, c);
        it++;
    }

    t = (ProfTls_82D6BD10 *)KeTlsGetValue(lbl_8323B4A0);
    e = t->cur;
    if (e < t->end) {
        e->name = "Et";
        e->time = (unsigned int)__mftb();
        t->cur = e + 1;
    }
}
