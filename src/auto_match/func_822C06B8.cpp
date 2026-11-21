// Pushes the saved switch states and the slider position back into the object's state, or, when
// fn_8288B760 says no, reads them from the state's controls.
class Switch_822C06B8
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

class Slider_822C06B8
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
    virtual float GetValue();
};

struct State_822C06B8 {
    char padding000[0x1ec];
    Slider_822C06B8 slider; /* 0x1ec */
    char padding1F0[0x50];
    Switch_822C06B8 firstSwitch; /* 0x240 */
    char padding244[0x50];
    Switch_822C06B8 secondSwitch; /* 0x294 */
    char padding298[0x50];
    Switch_822C06B8 thirdSwitch; /* 0x2e8 */
    char padding2EC[0x50];
    Switch_822C06B8 fourthSwitch; /* 0x33c */
};

struct ObjVtable_822C06B8 {
    void *unknown0;                          /* 0x00 */
    void *unknown4;                          /* 0x04 */
    State_822C06B8 *(*getState)(void *self); /* 0x08 */
};

class Obj_822C06B8
{
  public:
    virtual void Unknown0();
    virtual void Unknown4();
    virtual State_822C06B8 *GetState();
};

struct Owner_822C06B8 {
    char padding000[0x168];
    Obj_822C06B8 *object; /* 0x168 */
    char padding16C[0x4e0 - 0x16c];
    float sliderRange; /* 0x4e0 */
    int padding4E4;
    float sliderValue; /* 0x4e8 */
    char padding4EC[0x7a4 - 0x4ec];
    int fourthOn; /* 0x7a4 */
    int thirdOn;  /* 0x7a8 */
    int firstOn;  /* 0x7ac */
    int secondOn; /* 0x7b0 */
};

extern "C" {
unsigned char fn_8288B760(Obj_822C06B8 *self);
void fn_828AAF70(Switch_822C06B8 *sw, unsigned char on);
void fn_828BD3E8(Slider_822C06B8 *slider, float value);

void fn_822C06B8(Owner_822C06B8 *self)
{
    Obj_822C06B8 *object = self->object;

    if (object != 0) {
        State_822C06B8 *(*getState)(void *self);

        if (fn_8288B760(object)) {
            getState = (*(ObjVtable_822C06B8 **)object)->getState;
            fn_828AAF70(&getState(object)->firstSwitch, self->firstOn != 0);
            fn_828AAF70(&object->GetState()->secondSwitch, self->secondOn != 0);
            fn_828AAF70(&object->GetState()->thirdSwitch, self->thirdOn != 0);
            float position = self->sliderValue / self->sliderRange;
            fn_828BD3E8(&object->GetState()->slider, position);
            fn_828AAF70(&object->GetState()->fourthSwitch, self->fourthOn != 0);
        } else {
            getState = (*(ObjVtable_822C06B8 **)object)->getState;
            self->firstOn = getState(object)->firstSwitch.IsOn();
            self->secondOn = object->GetState()->secondSwitch.IsOn();
            self->thirdOn = object->GetState()->thirdSwitch.IsOn();
            self->sliderValue = object->GetState()->slider.GetValue();
        }
    }
}
}
