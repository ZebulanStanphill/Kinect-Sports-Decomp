extern "C" unsigned char fn_82F64538(const type_info *, const type_info *);
extern "C" char lbl_831D7088[];
extern "C" void *fn_8265C9E0(unsigned);

namespace olympus { namespace sport { namespace football {
struct ReplanAIStateForSetupGoalKickParams {
    int team;
    int state;
    struct Position_823F8398 {
        int v[3];
        Position_823F8398() { for (int i = 0; i < 3; i++) v[i] = 0; }
    } target;
    unsigned char flag;
    ReplanAIStateForSetupGoalKickParams() : team(-1), state(0), flag(0) {}
};
} } }
using olympus::sport::football::ReplanAIStateForSetupGoalKickParams;

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
        holder(const ValueType &v) : held(v) {}
        static __forceinline void *operator new(unsigned n) { return fn_8265C9E0(n); }
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

struct Target_823F8398 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void Set(unsigned int key, ReplanAIStateForSetupGoalKickParams *v);
};

extern "C" void fn_823F8398(Target_823F8398 *t, unsigned int key, boost::any *a)
{
    ReplanAIStateForSetupGoalKickParams *h = boost::any_cast<ReplanAIStateForSetupGoalKickParams>(a);
    if (h != 0) {
        t->Set(key, h);
    } else {
        ReplanAIStateForSetupGoalKickParams tmp;
        t->Set(key, &tmp);
        boost::any::placeholder *nh = new boost::any::holder<ReplanAIStateForSetupGoalKickParams>(tmp);
        boost::any::placeholder *old = a->content;
        a->content = nh;
        delete old;
    }
}
