// game/AnyHolder_823A8AA8.h (inlined)
#ifndef GAME_ANYHOLDER_823A8AA8_H
#define GAME_ANYHOLDER_823A8AA8_H

// boost::any with a holder<NetworkTTBallHitNotif> (olympus::sport::tabletennis).
// holder<T>::type() and clone() are defined by other units; the vtable symbol
// is lbl_821B56B8 in the original, renamed to the holder's mangled vtable.

extern "C" unsigned char fn_82F64538(const type_info *, const type_info *);
extern "C" char lbl_831D7088[];
extern "C" void *fn_8265C9E0(unsigned);
extern "C" void fn_823A9C98(void *, const void *);
extern "C" void fn_822315A0(void *);

namespace olympus { namespace sport { namespace tabletennis {
struct __declspec(align(16)) NetworkTTBallHitServeNotif {
    int a0, a4;
    int x8;
    char pad[0x44 - 0xc];
    int x44;
    void *rep;
    int pad4c[1];
    NetworkTTBallHitServeNotif() { x8 = 2; x44 = 0; rep = 0; }
    NetworkTTBallHitServeNotif(const NetworkTTBallHitServeNotif &o) { fn_823A9C98(this, &o); }
    ~NetworkTTBallHitServeNotif() { if (rep) fn_822315A0(rep); }
};
} } }
using olympus::sport::tabletennis::NetworkTTBallHitServeNotif;

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

#endif


typedef boost::any::holder<NetworkTTBallHitServeNotif> Holder_823A9E78;

extern "C" boost::any::placeholder *fn_823A9E78(const Holder_823A9E78 *self)
{
    return new Holder_823A9E78(self->held);
}
