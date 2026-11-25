#include <memory>
#include <vector>

struct Pointee_82566018;

typedef std::tr1::_Ptr_base<Pointee_82566018> PtrBase;
typedef std::tr1::shared_ptr<Pointee_82566018> T;

extern "C" {
void fn_822315A0(void *rep);
void fn_8265CA20(void *ptr);
}

template <> __forceinline void PtrBase::_Decref()
{
    if (_Rep != 0)
        fn_822315A0(_Rep);
}

template <> void std::vector<T>::push_back(const T &value);

struct Text_823962C8 {
    int pad00;
    void *event; /* 0x04 */
    int pad08;
    int done; /* 0x0c */
};

struct Caption_823962C8 {
    char pad00[0x44];
    Text_823962C8 *text; /* 0x44 */
};

struct Physics_823962C8 {
    virtual void Slot00();
    virtual void Slot01();
    virtual void Slot02();
    virtual void Slot03();
    virtual void Slot04();
    virtual void Slot05();
    virtual void Slot06();
    virtual void Slot07();
    virtual void Slot08();
    virtual void Slot09();
    virtual void Slot10();
    virtual void Slot11();
    virtual void Slot12();
    virtual void Slot13();
    virtual void Slot14();
    virtual void Slot15();
    virtual void Slot16();
    virtual void Slot17();
    virtual void Slot18();
    virtual void Slot19();
    virtual void Slot20();
    virtual void Slot21();
    virtual void Slot22();
    virtual void Slot23();
    virtual void Slot24();
    virtual void Slot25();
    virtual void Slot26();
    virtual void Slot27();
    virtual void Update(); /* 0x70 */
};

union TimerValue_823962C8 {
    float value;
    unsigned int bits;
};

struct Spawner_823962C8 {
    char pad00[0x28];
    std::vector<T> spawned; /* 0x28 */
    char pad38[0x40 - 0x38];
    T pending;                 /* 0x40 */
    TimerValue_823962C8 delay; /* 0x48 */
};

struct Game_823962C8 {
    char pad000[0x54];
    unsigned int state; /* 0x054 */
    char pad058[0xd4 - 0x58];
    Caption_823962C8 *caption; /* 0x0d4 */
    char pad0d8[0x174 - 0xd8];
    int round; /* 0x174 */
    int mode;  /* 0x178 */
    char pad17c[0x240 - 0x17c];
    int field240; /* 0x240 */
    char pad244[0x2a0 - 0x244];
    int field2a0; /* 0x2a0 */
    char pad2a4[0x2dc - 0x2a4];
    void *hud;                 /* 0x2dc */
    Physics_823962C8 *physics; /* 0x2e0 */
    char pad2e4[0x878 - 0x2e4];
    float time; /* 0x878 */
    int pad87c;
    Spawner_823962C8 spawner; /* 0x880 */
};

extern "C" {
void fn_82396230(Game_823962C8 *self);
void fn_8239A6B0(Game_823962C8 *self, float dt);
void fn_8239A9D8(Game_823962C8 *self, int value);
void fn_823588D0(Game_823962C8 *self, float dt);
void fn_82399D48(Game_823962C8 *self, int round);
void fn_82399F48(Game_823962C8 *self);
void fn_8239FE38(void *hud, float dt);
void fn_8239A2D8(Game_823962C8 *self);
void fn_8239C7F0(Game_823962C8 *self, float dt);
void fn_8239C4D8(Game_823962C8 *self);
void fn_8239D1D0(Game_823962C8 *self);
void fn_82396620(Game_823962C8 *self);
void fn_82399990(Game_823962C8 *self);
}

static __forceinline void DeleteText(Text_823962C8 **slot)
{
    Text_823962C8 *old = *slot;

    *slot = 0;
    if (old != 0) {
        if (old->event != 0)
            fn_822315A0(old->event);
        fn_8265CA20(old);
    }
}

extern "C" int fn_823962C8(Game_823962C8 *self, float dt)
{
    Caption_823962C8 *caption;
    Spawner_823962C8 *spawner;
    int round;

    self->time = dt + self->time;
    self->physics->Update();
    caption = self->caption;
    if (caption->text != 0 && caption->text->done == 0)
        DeleteText(&caption->text);
    fn_82396230(self);
    spawner = &self->spawner;
    if (spawner->pending && spawner->delay.bits != 0) {
        float remaining = spawner->delay.value - dt;

        remaining = -remaining >= 0.0f ? 0.0f : remaining;
        spawner->delay.value = remaining;
        if (remaining == 0.0f) {
            spawner->spawned.push_back(spawner->pending);
            spawner->pending.reset();
        }
    }
    round = self->round;
    fn_8239A6B0(self, dt);
    fn_8239A9D8(self, 0);
    fn_823588D0(self, dt);
    if (self->mode != 2)
        fn_82399D48(self, round);
    fn_82399F48(self);
    fn_8239FE38(self->hud, dt);
    fn_8239A2D8(self);
    fn_8239C7F0(self, dt);
    if (self->mode != 0 && (self->state == 0x11 || self->state == 5))
        fn_8239C4D8(self);
    if (self->state == 0x10) {
        self->field2a0 = 0;
        self->field240 = 0;
        fn_82396230(self);
        fn_8239D1D0(self);
        fn_82396620(self);
        if (self->mode == 0)
            fn_82399990(self);
        return 2;
    }
    return 0;
}
