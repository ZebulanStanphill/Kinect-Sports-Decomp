#include "havok/hkVector4.h"

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
