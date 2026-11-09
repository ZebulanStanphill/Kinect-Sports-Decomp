namespace NW {
class NetObjID_c { public: char data[8]; };
}
using NW::NetObjID_c;
extern "C" void fn_828B5608(NetObjID_c *self);
extern "C" void fn_828B5580(NetObjID_c *self, const NetObjID_c *src);
extern "C" void fn_828B55B0(NetObjID_c *self);

extern "C" unsigned char fn_82F64538(const type_info *, const type_info *);
extern "C" void *fn_8265C9E0(unsigned int);
extern "C" char lbl_831D7088[];
extern "C" char lbl_821B05E4[];

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

struct Source_8232AB40 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void Get(unsigned int key, NetObjID_c *v);
};

extern "C" void fn_8232AB40(Source_8232AB40 *s, unsigned int key, boost::any *a)
{
    NetObjID_c *p = boost::any_cast<NetObjID_c>(a);
    if (p != 0) {
        s->Get(key, p);
    } else {
        NetObjID_c v;
        boost::any::placeholder *n;
        boost::any::placeholder *old;
        fn_828B5608(&v);
        s->Get(key, &v);
        n = (boost::any::placeholder *)fn_8265C9E0(0xc);
        if (n != 0) {
            *(char **)n = lbl_821B05E4;
            fn_828B5580(&((boost::any::holder<NetObjID_c> *)n)->held, &v);
        } else {
            n = 0;
        }
        old = a->content;
        a->content = n;
        delete old;
        fn_828B55B0(&v);
    }
}
