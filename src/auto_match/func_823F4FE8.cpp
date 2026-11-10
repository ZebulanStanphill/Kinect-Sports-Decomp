typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
extern "C" __vector4 __VMXGetReg(int);

extern "C" float ltcg_pool_0_0f;
namespace olympus { namespace sport { namespace football {
__declspec(align(16)) struct KickParams {
    __vector4 position, direction, target;
    float a;
    unsigned char b, c, d;
    int e, f;
    __forceinline KickParams() { position = __VMXGetReg(77); direction = __VMXGetReg(77); target = __VMXGetReg(77); a = ltcg_pool_0_0f; b = 0; c = 0; d = 0; e = 0; f = 3; }
};
} } }
using olympus::sport::football::KickParams;

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


struct Source_823F4FE8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void Get(unsigned int key, KickParams *v);
};

extern "C" void fn_823F4FE8(Source_823F4FE8 *s, unsigned int key, boost::any *a)
{
    KickParams *p = boost::any_cast<KickParams>(a);
    if (p != 0) {
        s->Get(key, p);
    } else {
        KickParams v;
        s->Get(key, &v);
        *a = v;
    }
}
