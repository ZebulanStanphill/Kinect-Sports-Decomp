// boost::any getter for NetworkSpectatorAthleticsHumanFrame: pass the held
// frame to the source, or build a default frame, fill it and store a copy.
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float v[4]; unsigned int u[4]; } __vector4;
extern "C" __vector4 __VMXGetReg(int);

namespace olympus { namespace sport { namespace athletics {
class NetworkSpectatorAthleticsHumanFrame {
public:
    void *vtable; char data[0x19c]; __vector4 vector;
    __forceinline void CopyFrom(const NetworkSpectatorAthleticsHumanFrame *o);
};
} } }
typedef olympus::sport::athletics::NetworkSpectatorAthleticsHumanFrame Frame_82446D40;

extern "C" {
Frame_82446D40 *fn_823BE8C8(Frame_82446D40 *);
Frame_82446D40 *fn_823BE2A8(Frame_82446D40 *, const Frame_82446D40 *);
unsigned char fn_82F64538(const type_info *, const type_info *);
void *fn_8265C9E0(unsigned int);
extern char lbl_831D7088[];
extern void *lbl_821B9B9C[];
extern void *lbl_821B9BBC[];
}

__forceinline void Frame_82446D40::CopyFrom(const Frame_82446D40 *o)
{
    fn_823BE2A8(this, o);
    vtable = lbl_821B9B9C;
    vector = o->vector;
}

struct Placeholder_82446D40 {
    virtual void Destroy(int flags);
    virtual const type_info &type() const;
};
struct Holder_82446D40 { void *vtable; int pad[3]; Frame_82446D40 held; };
struct Any_82446D40 {
    Placeholder_82446D40 *content;
    __forceinline const type_info &type() const
    {
        return content ? content->type() : *(const type_info *)lbl_831D7088;
    }
};

struct Source_82446D40 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void Get(unsigned int key, Frame_82446D40 *v);
};

extern "C" void fn_82446D40(Source_82446D40 *s, unsigned int key, Any_82446D40 *a)
{
    Frame_82446D40 *p = a && fn_82F64538(&a->type(), &typeid(Frame_82446D40))
        ? &((Holder_82446D40 *)a->content)->held : 0;
    if (p != 0) {
        s->Get(key, p);
    } else {
        Frame_82446D40 v;
        Holder_82446D40 *h;
        Placeholder_82446D40 *old;
        fn_823BE8C8(&v);
        v.vector = __VMXGetReg(77);
        v.vtable = lbl_821B9B9C;
        s->Get(key, &v);
        h = (Holder_82446D40 *)fn_8265C9E0(0x1c0);
        if (h != 0) {
            h->vtable = lbl_821B9BBC;
            h->held.CopyFrom(&v);
        } else {
            h = 0;
        }
        old = a->content;
        a->content = (Placeholder_82446D40 *)h;
        if (old) old->Destroy(1);
    }
}
