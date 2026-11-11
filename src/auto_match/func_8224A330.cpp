// Payload name, size and alignment follow RTTI and the original copy.
namespace olympus { namespace review { namespace SportParameters { struct Params { char data[0x1c]; }; } } }


extern "C" unsigned char fn_82F64538(const type_info *, const type_info *);
extern "C" void *fn_8265C9E0(unsigned int);
extern "C" char lbl_831D7088[];

namespace boost {
class any {
public:
    class placeholder {
    public:
        virtual ~placeholder() {}
        virtual const type_info &type() const = 0;
        virtual placeholder *clone() const = 0;
        static void *operator new(unsigned int n) { return fn_8265C9E0(n); }
    };
    template <typename ValueType>
    class holder : public placeholder {
    public:
        holder(const ValueType &v) : held(v) {}
        virtual const type_info &type() const;
        virtual placeholder *clone() const;
        ValueType held;
    };
    __forceinline const type_info &type() const
    {
        return content ? content->type() : *(const type_info *)lbl_831D7088;
    }
    template <typename ValueType>
    __forceinline any &operator=(const ValueType &rhs)
    {
        placeholder *n = new holder<ValueType>(rhs);
        placeholder *old = content;
        content = n;
        delete old;
        return *this;
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


struct Source_8224A330 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void Get(unsigned int key, olympus::review::SportParameters::Params *v);
};

extern "C" void fn_8224A330(Source_8224A330 *s, unsigned int key, boost::any *a)
{
    olympus::review::SportParameters::Params *p = boost::any_cast<olympus::review::SportParameters::Params >(a);
    if (p != 0) {
        s->Get(key, p);
    } else {
        olympus::review::SportParameters::Params v;
        s->Get(key, &v);
        *a = v;
    }
}

