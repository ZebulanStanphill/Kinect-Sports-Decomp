// boost::any_cast<SpectatorFrameRecordHumanControl> read-or-default (like func_823F6020.cpp).
// The holder<SpectatorFrameRecordHumanControl> vtable is the unnamed lbl_821B5F3C
// (also stored by the Matching C clone() func_823BE420.c), so the new holder is
// built the same way here instead of instantiating boost::any::holder<T>.
namespace olympus { namespace sport { namespace network {
class __declspec(align(16)) SpectatorFrameRecordHumanControl { public: char data[0x1a0]; };
} } }
using olympus::sport::network::SpectatorFrameRecordHumanControl;
extern "C" void fn_823BE8C8(SpectatorFrameRecordHumanControl *);
extern "C" void fn_823BE2A8(void *, const SpectatorFrameRecordHumanControl *);

extern "C" unsigned char fn_82F64538(const type_info *, const type_info *);
extern "C" void *fn_8265C9E0(unsigned int);
extern "C" char lbl_831D7088[];
extern "C" char lbl_821B5F3C[];

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

struct Source_823BDD78 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void Get(unsigned int key, SpectatorFrameRecordHumanControl *v);
};

extern "C" void fn_823BDD78(Source_823BDD78 *s, unsigned int key, boost::any *a)
{
    SpectatorFrameRecordHumanControl *p = boost::any_cast<SpectatorFrameRecordHumanControl>(a);
    if (p != 0) {
        s->Get(key, p);
    } else {
        SpectatorFrameRecordHumanControl v;
        boost::any::placeholder *n;
        boost::any::placeholder *old;
        void **mem;
        fn_823BE8C8(&v);
        s->Get(key, &v);
        mem = (void **)fn_8265C9E0(0x1b0);
        if (mem != 0) {
            *mem = lbl_821B5F3C;
            fn_823BE2A8(mem + 4, &v);
            n = (boost::any::placeholder *)mem;
        } else {
            n = 0;
        }
        old = a->content;
        a->content = n;
        delete old;
    }
}
