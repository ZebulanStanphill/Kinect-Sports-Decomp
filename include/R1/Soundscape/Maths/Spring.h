// R1::Soundscape::Maths springs: Spring_i, its base implementation
// mathSpringBase_c, and mathSpring_c / mathSpringAngle_c (the angle variant
// measures distances with fn_8287C0A8).
//
// Class names and the inheritance come from RTTI. Slots 0x00-0x2C are
// mathSpringBase_c's (shared by the three vtables) and declared without
// signatures; 0x30 is the destructor and 0x34 the update. Field names are
// placeholders.

#ifndef R1_SOUNDSCAPE_MATHS_SPRING_H
#define R1_SOUNDSCAPE_MATHS_SPRING_H

extern "C" {
float fn_82809CB0(float x); // fabsf
// The spring integration step (still C): position, target, velocity, then
// stiffness, damping, time step and fn+0x30.
float fn_82879EB0(float *pos, float target, float *vel, float k, float c, float dt, float unk);
float fn_82879FB0(float *pos, float target, float *vel, float k, float c, float dt, float unk);
float fn_8287C0A8(float a, float b); // the angle variant's distance from a to b
}

namespace R1 {
namespace Soundscape {
namespace Maths {

class Spring_i {
public:
    virtual void vf00() = 0;
    virtual void vf04() = 0;
    virtual void vf08() = 0;
    virtual void vf0C() = 0;
    virtual void vf10() = 0;
    virtual void vf14() = 0;
    virtual void vf18() = 0;
    virtual void vf1C() = 0;
    virtual void vf20() = 0;
    virtual void vf24() = 0;
    virtual void vf28() = 0;
    virtual void vf2C() = 0;
    virtual ~Spring_i() {}
};

class mathSpringBase_c : public Spring_i {
public:
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0C();
    virtual void vf10();
    virtual void vf14();
    virtual void vf18();
    virtual void vf1C();
    virtual void vf20();
    virtual void vf24();
    virtual void vf28();
    virtual void vf2C();
    virtual ~mathSpringBase_c();
    virtual float vf34(float dt) = 0;

    float unk04;          // position
    float unk08;          // target
    float unk0C;          // velocity
    float unk10;          // stiffness
    float unk14;          // largest distance
    float unk18;          // smallest distance
    unsigned char unk1C;  // limit the distance
    float unk20;          // smallest target
    float unk24;          // largest target
    unsigned char unk28;  // limit the target
    float unk2C;          // last step
    float unk30;
};

class mathSpring_c : public mathSpringBase_c {
public:
    virtual ~mathSpring_c();
    virtual float vf34(float dt);
};

class mathSpringAngle_c : public mathSpringBase_c {
public:
    virtual ~mathSpringAngle_c();
    virtual float vf34(float dt);
};

} // namespace Maths
} // namespace Soundscape
} // namespace R1

#endif
