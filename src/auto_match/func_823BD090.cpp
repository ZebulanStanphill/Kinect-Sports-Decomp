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

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

/* The vtables have no RTTI locator, so they are written as stores of their lbl_ names. */
extern "C" char lbl_821C7FB8[];
extern "C" char lbl_821B5EBC[];
extern "C" __vector4 lbl_82196750;
extern "C" __vector4 __VMXGetReg(int reg);

struct Base_823BD090 {
    void *vt;
    int f04;
    __forceinline Base_823BD090() { vt = lbl_821C7FB8; f04 = 0; }
    __forceinline Base_823BD090(const Base_823BD090 &o) { vt = lbl_821C7FB8; f04 = o.f04; }
};

namespace olympus { namespace sport { namespace network {
class SpectatorFrameRecordAvatar : public Base_823BD090 {
public:
    __vector4 a;
    __vector4 b;
    __forceinline SpectatorFrameRecordAvatar()
    {
        vt = lbl_821B5EBC;
        a = __VMXGetReg(77);
        b = lbl_82196750;
    }
    __forceinline SpectatorFrameRecordAvatar(const SpectatorFrameRecordAvatar &o) : Base_823BD090(o)
    {
        vt = lbl_821B5EBC;
        a = o.a;
        b = o.b;
    }
};
} } }


typedef olympus::sport::network::SpectatorFrameRecordAvatar Avatar_823BD090;

struct Target_823BD090 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void Set(unsigned int key, const Avatar_823BD090 &v);
};

extern "C" void fn_823BD1D0(boost::any *a, const Avatar_823BD090 &v);

extern "C" void fn_823BD090(Target_823BD090 *t, unsigned int key, boost::any *a)
{
    Avatar_823BD090 *p = boost::any_cast<Avatar_823BD090>(a);
    if (p != 0) {
        t->Set(key, *p);
    } else {
        Avatar_823BD090 def;
        t->Set(key, def);
        fn_823BD1D0(a, def);
    }
}
