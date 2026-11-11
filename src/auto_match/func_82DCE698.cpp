// Havok MOPP sphere query set-up: builds the virtual machine state (output array, integer to
// float scale, sphere in MOPP space with doubled radius), the root query (shift 16) and the
// root bounds, then runs the byte code at code->data.
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
extern "C" __vector4 __vspltw(__vector4, unsigned int);
extern "C" __vector4 __vaddfp(__vector4, __vector4);
extern "C" __vector4 __vsubfp(__vector4, __vector4);
extern "C" __vector4 __vxor(__vector4, __vector4);
extern "C" __vector4 __vrlimi(__vector4, __vector4, int, int);

class hkVector4 { public:
 __forceinline void setZero4() { q = __vxor(q, q); }
 __forceinline void setAll(float x) { q.f[0] = x; q = __vspltw(q, 0); }
 __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { q = __vsubfp(a.q, b.q); }
 __forceinline void setAdd4(const hkVector4 &a, const hkVector4 &b) { q = __vaddfp(a.q, b.q); }
 __forceinline void setXYZ(const hkVector4 &a) { q = __vrlimi(a.q, q, 1, 0); }
 __forceinline float &operator()(int i) { return q.f[i]; }
 __forceinline const float &operator()(int i) const { return q.f[i]; }
 __vector4 q;
};

struct Code_82DCE698 {
    char pad0[0x10];
    hkVector4 offset;      // w: scale
    const unsigned char *data;
};

struct Query_82DCE698 {
    unsigned int primitiveOffset;
    unsigned int properties;
    int offsetX;
    int offsetY;
    int offsetZ;
    int shift;
};

struct Bounds_82DCE698 {
    hkVector4 min;
    hkVector4 max;
};

struct SphereQuery_82DCE698 {    // passed to fn_82DE0DB8 by the byte code interpreter
    void *collector;
    hkVector4 sphere;           // MOPP space; w: diameter
};

struct Machine_82DCE698 {
    void *primitivesOut;
    __declspec(align(16)) float scale;
    SphereQuery_82DCE698 hit;
};

extern "C" void fn_82DD0760(Machine_82DCE698 *machine, const Query_82DCE698 *query, const unsigned char *pc, Bounds_82DCE698 *bounds);

extern "C" void fn_82DCE698(const Code_82DCE698 *code, const hkVector4 *sphere, void *primitivesOut, void *collector)
{
    Machine_82DCE698 machine;
    Query_82DCE698 query;
    Bounds_82DCE698 bounds;
    hkVector4 d;

    machine.primitivesOut = primitivesOut;
    machine.hit.collector = collector;
    machine.scale = 1.0f / code->offset(3);
    bounds.min.setZero4();
    bounds.max.setAll(machine.scale * 16777216.0f);    // pool constant, named lbl_820E1150 in symbols.txt
    query.shift = 16;
    query.offsetX = 0;
    query.offsetY = 0;
    query.offsetZ = 0;
    query.primitiveOffset = 0;
    query.properties = 0;
    d.setSub4(*sphere, code->offset);
    d.setAdd4(d, d);
    machine.hit.sphere.setXYZ(d);
    machine.hit.sphere(3) = (*sphere)(3) * 2.0f;
    fn_82DD0760(&machine, &query, code->data, &bounds);
}
