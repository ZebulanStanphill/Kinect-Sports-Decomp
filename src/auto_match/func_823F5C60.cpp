#include <exception>
#include <typeinfo>
namespace olympus { namespace sport { namespace football { struct ReplanAIStateForPassParams { struct Possession { unsigned v[4]; }; }; } } }

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

struct Target_823F5C60 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void Set(unsigned int key, const olympus::sport::football::ReplanAIStateForPassParams::Possession &v);
};

extern "C" void fn_823F5C60(Target_823F5C60 *t, unsigned int key, boost::any *a)
{
    olympus::sport::football::ReplanAIStateForPassParams::Possession v = *boost::any_cast<olympus::sport::football::ReplanAIStateForPassParams::Possession>(a);
    t->Set(key, v);
}
