struct Owner_827B56E0;

struct Link_827B56E0 {
    int sub;
    Owner_827B56E0 *owner;
    unsigned int index;
};

class Obj_827B56E0 {
public:
    virtual void v00();
    virtual bool Init(int a, int b, int c, int d);
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void Bind(Link_827B56E0 *link);
};

class Factory_827B56E0 {
public:
    virtual void v00();
    virtual void v04();
    virtual Obj_827B56E0 *Create();
};

struct Entry_827B56E0 {
    Obj_827B56E0 *obj;
    Link_827B56E0 link;
    int pad10;
};

struct Owner_827B56E0 {
    int a;
    int b;
    int pad08[12];
    Entry_827B56E0 entries[1];
};

extern "C" int fn_827B56E0(Owner_827B56E0 *p, Factory_827B56E0 *factory, unsigned int i)
{
    Entry_827B56E0 *e = &p->entries[i];

    if (e->obj == 0) {
        Obj_827B56E0 *o = factory->Create();
        e->obj = o;
        if (o == 0) {
            return 0;
        }
        Link_827B56E0 *l = &e->link;
        l->owner = p;
        l->index = i & ~0x8000u;
        e->obj->Bind(l);
        if (!e->obj->Init(p->a, p->b, 9, 0)) {
            return 0;
        }
    }
    return 1;
}
