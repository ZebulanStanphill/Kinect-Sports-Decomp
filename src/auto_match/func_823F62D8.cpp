namespace olympus { namespace sport { namespace football {
struct FormationMapping {
    FormationMapping() : m_count(0) { for (int i = 0; i < 7; i++) m_slots[i] = -1; }
    int m_count;
    int m_slots[7];
};
struct ReplanAIStateForShootParams {
    ReplanAIStateForShootParams() : a(-1), b(-1) {}
    int a; unsigned b;
    FormationMapping first, second;
};
} } }
using olympus::sport::football::ReplanAIStateForShootParams;

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


struct Source_823F62D8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void Get(unsigned int key, ReplanAIStateForShootParams *v);
};

extern "C" void fn_823F62D8(Source_823F62D8 *s, unsigned int key, boost::any *a)
{
    ReplanAIStateForShootParams *p = boost::any_cast<ReplanAIStateForShootParams>(a);
    if (p != 0) {
        s->Get(key, p);
    } else {
        ReplanAIStateForShootParams v;
        s->Get(key, &v);
        *a = v;
    }
}
