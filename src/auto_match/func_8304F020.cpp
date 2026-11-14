class Obj_8304F020 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
};

struct Vec_8304F020 {
    Obj_8304F020 **begin;
    Obj_8304F020 **end;
    unsigned int size() const { return end - begin; }
};

extern "C" Vec_8304F020 lbl_8326504C;
extern "C" int fn_8304F020(void *a, unsigned int idx)
{
    if (idx < lbl_8326504C.size()) {
        if (lbl_8326504C.begin[idx] != 0) {
            lbl_8326504C.begin[idx]->v5();
            lbl_8326504C.begin[idx] = 0;
            return 1;
        }
    }
    return 0x1f;
}
