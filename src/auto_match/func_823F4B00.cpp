#include <array>

typedef std::tr1::array<unsigned int, 3> Arr3_823F4B00;

extern "C" unsigned char fn_82F64538(const type_info *, const type_info *);
extern "C" void *fn_8265C9E0(unsigned int);
extern "C" char lbl_831D7088[];
extern "C" char lbl_821B7A2C[];

namespace boost {
class any {
public:
    class placeholder {
    public:
        virtual ~placeholder() {}
        virtual const type_info &type() const = 0;
        virtual placeholder *clone() const = 0;
    };
    __forceinline const type_info &type() const
    {
        return content ? content->type() : *(const type_info *)lbl_831D7088;
    }
    placeholder *content;
};
}

/* boost::any::holder<std::tr1::array<unsigned int,3> >; its vtable lbl_821B7A2C
   is also stored by the Matching C clone func_823FB4A8, so it is built by hand. */
struct Holder_823F4B00 {
    void *vt;
    Arr3_823F4B00 held;
};

struct Source_823F4B00 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void Get(unsigned int key, Arr3_823F4B00 *v);
};

extern "C" void fn_823F4B00(Source_823F4B00 *s, unsigned int key, boost::any *a)
{
    Arr3_823F4B00 *p = a && fn_82F64538(&a->type(), &typeid(Arr3_823F4B00))
        ? &((Holder_823F4B00 *)a->content)->held
        : 0;
    if (p != 0) {
        s->Get(key, p);
    } else {
        Arr3_823F4B00 v;
        Holder_823F4B00 *mem;
        Holder_823F4B00 *n;
        boost::any::placeholder *old;
        s->Get(key, &v);
        mem = (Holder_823F4B00 *)fn_8265C9E0(sizeof(Holder_823F4B00));
        if (mem != 0) {
            mem->vt = lbl_821B7A2C;
            mem->held = v;
            n = mem;
        } else {
            n = 0;
        }
        old = a->content;
        a->content = (boost::any::placeholder *)n;
        delete old;
    }
}
