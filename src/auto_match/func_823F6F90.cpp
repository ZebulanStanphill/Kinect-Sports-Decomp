typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
extern "C" __vector4 __VMXGetReg(int n);

namespace olympus { namespace sport { namespace football {
struct ReplanAIStateForPostContactParams {
    char m_head[0x50];
    __vector4 m_a;
    __vector4 m_b;
    __vector4 m_c;
    char m_tail[0x10];
};
} } }
using olympus::sport::football::ReplanAIStateForPostContactParams;
extern "C" void fn_82250D10(ReplanAIStateForPostContactParams *);

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


struct Source_823F6F90 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void Get(unsigned int key, ReplanAIStateForPostContactParams *v);
};

extern "C" void fn_823F6F90(Source_823F6F90 *s, unsigned int key, boost::any *a)
{
    ReplanAIStateForPostContactParams *p = boost::any_cast<ReplanAIStateForPostContactParams>(a);
    if (p != 0) {
        s->Get(key, p);
    } else {
        ReplanAIStateForPostContactParams v;
        fn_82250D10(&v);
        v.m_a = __VMXGetReg(77);
        v.m_b = __VMXGetReg(77);
        v.m_c = __VMXGetReg(77);
        s->Get(key, &v);
        *a = v;
    }
}
