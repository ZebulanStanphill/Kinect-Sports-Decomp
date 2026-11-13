// boost::any::holder<olympus::sport::network::SpectatorFrameRecordAvatar>::clone():
// returns a new holder with a copy of the held value. The holder vtable
// lbl_821B5EF4 is {fn_823BD190, fn_823BD290 (type(), the typeid getter of
// SpectatorFrameRecordAvatar), fn_823BD2A0 (this function)}. None of the vtables
// has an RTTI locator, so they are written as stores of their lbl_ names
// (the func_823BCFC0 recipe); the function keeps its fn_ name.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" void *fn_8265C9E0(unsigned int size);  // operator new

extern "C" char lbl_821B5EF4[];
extern "C" char lbl_821C7FB8[];
extern "C" char lbl_821B5EBC[];

struct Base_823BD2A0 {
    void *vt;
    int f04;
    __forceinline Base_823BD2A0(const Base_823BD2A0 &o) { vt = lbl_821C7FB8; f04 = o.f04; }
};

namespace olympus { namespace sport { namespace network {
class SpectatorFrameRecordAvatar : public Base_823BD2A0 {
public:
    __vector4 a;
    __vector4 b;
    __forceinline SpectatorFrameRecordAvatar(const SpectatorFrameRecordAvatar &o) : Base_823BD2A0(o)
    {
        vt = lbl_821B5EBC;
        a = o.a;
        b = o.b;
    }
};
} } }

typedef olympus::sport::network::SpectatorFrameRecordAvatar Value_823BD2A0;

/* The holder's vptr is set before its member is copied, as in a real C++ class. */
struct Placeholder_823BD2A0 {
    void *vt;
    __forceinline Placeholder_823BD2A0(void *vtable) { vt = vtable; }
};

struct Holder_823BD2A0 : Placeholder_823BD2A0 {
    int pad[3];
    Value_823BD2A0 held;
    __forceinline Holder_823BD2A0(const Value_823BD2A0 &value)
        : Placeholder_823BD2A0(lbl_821B5EF4), held(value) {}
};

inline void *operator new(unsigned int, void *where) { return where; }

extern "C" Holder_823BD2A0 *fn_823BD2A0(const Holder_823BD2A0 *self)
{
    void *mem = fn_8265C9E0(0x40);
    return mem ? new (mem) Holder_823BD2A0(self->held) : 0;
}
