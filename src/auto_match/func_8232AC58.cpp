class type_info;

namespace NW {
class NetObjID_c {
};
}

extern "C" {
extern char lbl_831D7088[];
extern unsigned char fn_82F64538(const void *, const void *);
extern void fn_828B5580(void *, void *);
extern void fn_828B55B0(void *);
}

class Typed_8232AC58 {
public:
    virtual void v0();
    virtual const void *Type();
};

class Target_8232AC58 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void Call(int, void *);
};

struct Holder_8232AC58 {
    Typed_8232AC58 *obj;
};

extern "C" void fn_8232AC58(Target_8232AC58 *self, int a, Holder_8232AC58 *h)
{
    char buf[16];
    if (h != 0) {
        const void *t;
        if (h->obj != 0) {
            t = h->obj->Type();
        } else {
            t = lbl_831D7088;
        }
        if (fn_82F64538(t, &typeid(NW::NetObjID_c)) != 0) {
            fn_828B5580(buf, (char *)h->obj + 4);
            goto done;
        }
    }
    fn_828B5580(buf, 0);
done:
    self->Call(a, buf);
    fn_828B55B0(buf);
}
