extern "C" unsigned char fn_82F64538(const type_info *, const type_info *);
extern "C" char lbl_831D7088[];
extern "C" void fn_823A9C98(void *, const void *);
extern "C" void fn_822315A0(void *);

namespace olympus { namespace sport { namespace tabletennis {
struct __declspec(align(16)) NetworkTTBallHitNotif {
    int a0, a4;
    int x8;
    char pad[0x44 - 0xc];
    int x44;
    void *rep;
    int pad4c[1];
    NetworkTTBallHitNotif() { x8 = 1; x44 = 0; rep = 0; }
    NetworkTTBallHitNotif(const NetworkTTBallHitNotif &o) { fn_823A9C98(this, &o); }
    ~NetworkTTBallHitNotif() { if (rep) fn_822315A0(rep); }
};
} } }
using olympus::sport::tabletennis::NetworkTTBallHitNotif;

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

struct Target_823A8A00 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void Set(unsigned int key, const NetworkTTBallHitNotif &v);
};

extern "C" void fn_823A8A00(Target_823A8A00 *t, unsigned int key, boost::any *a)
{
    NetworkTTBallHitNotif v = *boost::any_cast<NetworkTTBallHitNotif>(a);
    t->Set(key, v);
}
