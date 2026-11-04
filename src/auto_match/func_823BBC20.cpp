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

class netmemCMem {};

namespace std { namespace tr1 {
template <class T>
class shared_ptr {
public:
    T *px;
    int *rep;
};
} }

extern "C" void fn_822315A0(int *);

typedef std::tr1::shared_ptr<netmemCMem> SP_823BBC20;

extern "C" void fn_82517978(SP_823BBC20 *, netmemCMem *, int *, int);

struct Target_823BBC20 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void Set(unsigned int key, const SP_823BBC20 &v);
};

extern "C" void fn_823BBC20(Target_823BBC20 *t, unsigned int key, boost::any *a)
{
    SP_823BBC20 *src = boost::any_cast<SP_823BBC20>(a);
    SP_823BBC20 sp;
    sp.px = 0;
    sp.rep = 0;
    fn_82517978(&sp, src->px, src->rep, 0);
    t->Set(key, sp);
    if (sp.rep != 0)
        fn_822315A0(sp.rep);
}
