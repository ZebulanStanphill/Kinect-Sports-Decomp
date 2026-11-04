namespace olympus { namespace sport { namespace athletics { namespace NetworkSpectatorProjectileEvent { enum Type {}; } } } }

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

struct Target_824471B8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void Set(unsigned int key, const olympus::sport::athletics::NetworkSpectatorProjectileEvent::Type &v);
};

extern "C" void fn_824471B8(Target_824471B8 *t, unsigned int key, boost::any *a)
{
    olympus::sport::athletics::NetworkSpectatorProjectileEvent::Type v = *boost::any_cast<olympus::sport::athletics::NetworkSpectatorProjectileEvent::Type>(a);
    t->Set(key, v);
}
