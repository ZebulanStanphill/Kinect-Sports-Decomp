extern "C" unsigned char fn_82F64538(const type_info *, const type_info *);
extern "C" void *fn_8265C9E0(unsigned int);
extern "C" char lbl_831D7088[];
/* vtable of boost::any::holder<std::tr1::shared_ptr<netmemCMem> > (no ??_7 name configured) */
extern "C" char lbl_821B5E4C[];

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

class netmemCMem {};

namespace std { namespace tr1 {
template <class T>
class shared_ptr {
public:
    T *px;
    int *rep;
};
} }

extern "C" void fn_822315A0(int *);

typedef std::tr1::shared_ptr<netmemCMem> SP_823BBCE0;

extern "C" void fn_82517978(SP_823BBCE0 *, netmemCMem *, int *, int);

struct Holder_823BBCE0 {
    void *vt;
    SP_823BBCE0 held;
};

struct Source_823BBCE0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void Get(unsigned int key, SP_823BBCE0 *v);
};

extern "C" void fn_823BBCE0(Source_823BBCE0 *s, unsigned int key, boost::any *a)
{
    SP_823BBCE0 *p = boost::any_cast<SP_823BBCE0>(a);
    if (p != 0) {
        s->Get(key, p);
    } else {
        SP_823BBCE0 v;
        Holder_823BBCE0 *h;
        boost::any::placeholder *old;
        v.px = 0;
        v.rep = 0;
        s->Get(key, &v);
        h = (Holder_823BBCE0 *)fn_8265C9E0(0xc);
        if (h != 0) {
            SP_823BBCE0 *held = &h->held;
            h->vt = lbl_821B5E4C;
            held->px = 0;
            held->rep = 0;
            fn_82517978(held, v.px, v.rep, 0);
        } else {
            h = 0;
        }
        old = a->content;
        a->content = (boost::any::placeholder *)h;
        delete old;
        if (v.rep != 0)
            fn_822315A0(v.rep);
    }
}
