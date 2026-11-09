// Reads a ReplanChallenge setting through slot 5 of the source into a boost::any: in place when
// the any already holds a ReplanChallenge, else into a default-initialised temporary that is then
// assigned to the any (the new holder is built by hand so the vtable keeps its lbl_ name).
extern "C" unsigned char fn_82F64538(const type_info *, const type_info *);
extern "C" void *fn_8265C9E0(unsigned int);
extern "C" char lbl_831D7088[];
// vtable of boost::any::holder<olympus::sport::football::ReplanChallenge>; kept as lbl_ because the
// Matching C unit func_823FB7E0 (its clone) references it by that name.
extern "C" char lbl_821B7A80[];

namespace olympus { namespace sport { namespace football {
struct ReplanChallenge {
    ReplanChallenge() : a(-1), b(1) {}
    int a;
    int b;
};
} } }

namespace boost {
class any {
public:
    class placeholder {
    public:
        virtual ~placeholder() {}
        virtual const type_info &type() const = 0;
        virtual placeholder *clone() const = 0;
    };
    template <typename ValueType>
    class holder : public placeholder {
    public:
        virtual const type_info &type() const;
        virtual placeholder *clone() const;
        ValueType held;
    };
    __forceinline const type_info &type() const
    {
        return content ? content->type() : *(const type_info *)lbl_831D7088;
    }
    placeholder *content;
};

template <typename T>
__forceinline T *any_cast(any *operand)
{
    return operand && fn_82F64538(&operand->type(), &typeid(T))
        ? &static_cast<any::holder<T> *>(operand->content)->held
        : 0;
}
}

typedef olympus::sport::football::ReplanChallenge ReplanChallenge;

struct Holder_823F5B48 {
    const void *vt;
    ReplanChallenge held;
};

struct Source_823F5B48 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void Get(unsigned int key, ReplanChallenge *v);
};

extern "C" void fn_823F5B48(Source_823F5B48 *s, unsigned int key, boost::any *a)
{
    ReplanChallenge *p = boost::any_cast<ReplanChallenge>(a);
    if (p != 0) {
        s->Get(key, p);
    } else {
        ReplanChallenge v;
        Holder_823F5B48 *mem;
        Holder_823F5B48 *h;
        boost::any::placeholder *old;
        s->Get(key, &v);
        mem = (Holder_823F5B48 *)fn_8265C9E0(sizeof(Holder_823F5B48));
        if (mem != 0) {
            mem->vt = lbl_821B7A80;
            mem->held = v;
            h = mem;
        } else {
            h = 0;
        }
        old = a->content;
        a->content = (boost::any::placeholder *)h;
        delete old;
    }
}
