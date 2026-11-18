// Copies the target's position, rotation and one more value into the object's state.
//
// The first two calls fetch the GetState slot before the vector is copied to the stack (the slot is
// read through the vtable as data, as the matched func_822FF780 does); the third is an ordinary
// virtual call inside the argument list, which is the only form that moves the slot to the count
// register before the remaining arguments are loaded.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

struct Target_823275D0 {
    char padding00[0x80];
    __vector4 position; /* 0x80 */
    __vector4 rotation; /* 0x90 */
    char paddingA0[0x5c0 - 0xa0];
    int value; /* 0x5c0 */
    char padding5C4[0x720 - 0x5c4];
    int enabled; /* 0x720 */
};

struct State_823275D0 {
    char padding00[0xf0];
    char rotation[0x54];  /* 0xf0 */
    char position[0x304]; /* 0x144 */
    char value[4];        /* 0x448 */
};

struct ObjVtable_823275D0 {
    void *unknown0;                          /* 0x00 */
    void *unknown4;                          /* 0x04 */
    State_823275D0 *(*getState)(void *self); /* 0x08 */
};

class Obj_823275D0
{
  public:
    virtual void Unknown0();
    virtual void Unknown4();
    virtual State_823275D0 *GetState();

    char padding04[0xb8];
    Target_823275D0 *target; /* 0xbc */
};

extern "C" {
unsigned char fn_8288B760(Obj_823275D0 *self);
void fn_822CA5B0(Obj_823275D0 *self);
void fn_822CB140(void *dst, __vector4 *value);
void fn_822CB0A0(void *dst, __vector4 *value);
void fn_82327098(void *dst, int value, unsigned char flag);

void fn_823275D0(Obj_823275D0 *self)
{
    Target_823275D0 *target = self->target;

    if (target != 0) {
        if (fn_8288B760(self)) {
            __vector4 value;
            State_823275D0 *(*getState)(void *self);

            getState = (*(ObjVtable_823275D0 **)self)->getState;
            value = target->position;
            fn_822CB140(getState(self)->position, &value);
            getState = (*(ObjVtable_823275D0 **)self)->getState;
            value = target->rotation;
            fn_822CB0A0(getState(self)->rotation, &value);
            fn_82327098(self->GetState()->value, target->value, target->enabled != 0);
        } else {
            fn_822CA5B0(self);
        }
    }
}
}
