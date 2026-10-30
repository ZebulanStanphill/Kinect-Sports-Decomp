struct Item_83006918 {
    int f0, f4, f8, fc, f10;
    void *f14;
    int f18, f1c;
};
struct Vec_83006918 {
    Item_83006918 *begin;
    Item_83006918 *end;
};
struct Obj_83006918 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void m58(int, int, int, int);
    char pad[0x24];
    Vec_83006918 *vec;
};

extern "C" {
void fn_82FA5190(void *, void *);
extern void *lbl_831BC768;

void fn_83006918(Obj_83006918 *self)
{
    Vec_83006918 *v = self->vec;
    if (v != 0) {
        Item_83006918 *it = v->begin;
        if (it != v->end) {
            do {
                if (it->f14 != 0) {
                    fn_82FA5190(lbl_831BC768, it->f14);
                    it->f14 = 0;
                }
                it->f18 = 0;
                it->f1c = 0;
                self->m58(it->f0, it->f4, it->fc, it->f10);
                v = self->vec;
                it++;
            } while (it != v->end);
        }
        v->end = v->begin;
    }
}
}
