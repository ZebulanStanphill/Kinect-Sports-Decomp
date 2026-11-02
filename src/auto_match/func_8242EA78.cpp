
extern "C" unsigned char fn_82F64538(const type_info *, const type_info *);
extern "C" char lbl_831D7088[];

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

namespace olympus { namespace sport { namespace athletics {
class NetworkSpectatorAthleticsHumanFrame;
} } }

namespace std { namespace tr1 {
template <class T>
class shared_ptr {
public:
    T *px;
    int *rep;
};
} }

extern "C" void fn_822315A0(int *);
extern "C" unsigned char fn_8223AAC0(int *);

typedef std::tr1::shared_ptr<olympus::sport::athletics::NetworkSpectatorAthleticsHumanFrame> SP_8242EA78;

struct Target_8242EA78 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void Set(unsigned int key, const SP_8242EA78 &v);
};

extern "C" void fn_8242EA78(Target_8242EA78 *t, unsigned int key, boost::any *a)
{
    SP_8242EA78 *src = boost::any_cast<SP_8242EA78>(a);
    SP_8242EA78 sp;
    sp.px = 0;
    sp.rep = 0;
    olympus::sport::athletics::NetworkSpectatorAthleticsHumanFrame *p = src->px;
    int *r = src->rep;
    if (r != 0 && fn_8223AAC0(r)) {
        if (sp.rep != 0)
            fn_822315A0(sp.rep);
        sp.rep = r;
        sp.px = p;
    }
    t->Set(key, sp);
    if (sp.rep != 0)
        fn_822315A0(sp.rep);
}
