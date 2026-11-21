// Copies the target's position and rotation into the object's state and pushes the two saved
// flags back, or, when fn_8288B760 says no, reads the two flags from the state's switches.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

class Switch_822D5A00
{
  public:
    virtual void Unknown00();
    virtual void Unknown04();
    virtual void Unknown08();
    virtual void Unknown0C();
    virtual void Unknown10();
    virtual void Unknown14();
    virtual void Unknown18();
    virtual void Unknown1C();
    virtual void Unknown20();
    virtual void Unknown24();
    virtual void Unknown28();
    virtual void Unknown2C();
    virtual void Unknown30();
    virtual void Unknown34();
    virtual void Unknown38();
    virtual unsigned char IsOn();
};

struct Target_822D5A00 {
    char padding00[0x80];
    __vector4 position; /* 0x80 */
    __vector4 rotation; /* 0x90 */
    char paddingA0[0x2a4 - 0xa0];
    int firstOn; /* 0x2a4 */
    char padding2A8[0x2f8 - 0x2a8];
    int secondOn; /* 0x2f8 */
};

struct State_822D5A00 {
    char padding00[0xf0];
    char rotation[0x54];         /* 0x0f0 */
    char position[0xfc];         /* 0x144 */
    Switch_822D5A00 firstSwitch; /* 0x240 */
    char padding244[0x50];
    Switch_822D5A00 secondSwitch; /* 0x294 */
};

struct ObjVtable_822D5A00 {
    void *unknown0;                          /* 0x00 */
    void *unknown4;                          /* 0x04 */
    State_822D5A00 *(*getState)(void *self); /* 0x08 */
};

class Obj_822D5A00
{
  public:
    virtual void Unknown0();
    virtual void Unknown4();
    virtual State_822D5A00 *GetState();

    char padding04[0xb8];
    Target_822D5A00 *target; /* 0xbc */
};

extern "C" {
unsigned char fn_8288B760(Obj_822D5A00 *self);
void fn_822CA5B0(Obj_822D5A00 *self);
void fn_822D5F28(Obj_822D5A00 *self);
void fn_822CB140(void *dst, __vector4 *value);
void fn_822CB0A0(void *dst, __vector4 *value);
void fn_828AAF70(Switch_822D5A00 *sw, unsigned char on);

void fn_822D5A00(Obj_822D5A00 *self)
{
    Target_822D5A00 *target = self->target;

    if (target != 0) {
        State_822D5A00 *(*getState)(void *self);

        if (fn_8288B760(self)) {
            getState = (*(ObjVtable_822D5A00 **)self)->getState;
            __vector4 value;

            value = target->position;
            fn_822CB140(getState(self)->position, &value);
            getState = (*(ObjVtable_822D5A00 **)self)->getState;
            value = target->rotation;
            fn_822CB0A0(getState(self)->rotation, &value);
            fn_828AAF70(&self->GetState()->firstSwitch, target->firstOn != 0);
            fn_828AAF70(&self->GetState()->secondSwitch, target->secondOn != 0);
        } else {
            getState = (*(ObjVtable_822D5A00 **)self)->getState;
            target->firstOn = getState(self)->firstSwitch.IsOn();
            target->secondOn = self->GetState()->secondSwitch.IsOn();
            fn_822CA5B0(self);
        }
    }
    fn_822D5F28(self);
}
}
