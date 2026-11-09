typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
extern "C" __vector4 __VMXGetReg(int n);

namespace olympus { namespace sport { namespace football {
struct TackleOutcomeParams {
    /* two (unsigned id, int index) pairs: the int and unsigned -1 get separate registers */
    unsigned int m_a;
    int m_b;
    unsigned int m_c;
    int m_d;
    int m_e;
    unsigned char m_f;
    unsigned char m_g;
    __vector4 m_v;
    TackleOutcomeParams() : m_a(-1), m_b(-1), m_c(-1), m_d(-1), m_e(0), m_f(0), m_g(1)
    {
        m_v = __VMXGetReg(77);
    }
};
} } }
using olympus::sport::football::TackleOutcomeParams;

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



struct Target_823F7D40 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void Set(unsigned int key, TackleOutcomeParams *v);
};

extern "C" void fn_823F7D40(Target_823F7D40 *t, unsigned int key, boost::any *a)
{
    TackleOutcomeParams *p = boost::any_cast<TackleOutcomeParams>(a);
    if (p != 0) {
        t->Set(key, p);
    } else {
        TackleOutcomeParams v;
        t->Set(key, &v);
        *a = v;
    }
}
