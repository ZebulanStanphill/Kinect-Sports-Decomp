typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);

typedef struct Channel_82502040 {
    void *target; /* 0x00 */
    char pad04[0x4];
    int state;        /* 0x08 */
    int nextState;    /* 0x0C */
    void *sounds[12]; /* 0x10 */
} Channel_82502040;

typedef struct Clock_82502040 {
    char pad0[0xc];
    void *timer; /* 0x0C */
} Clock_82502040;

typedef struct World_82502040 {
    char pad000[0xd54];
    Clock_82502040 *clock; /* 0xD54 */
} World_82502040;

typedef struct Player_82502040 {
    char pad000[0x50];
    __vector4 position; /* 0x050 */
    char pad060[0x40];
    __vector4 velocity; /* 0x0A0 */
    char pad0B0[0x10];
    __vector4 rotation; /* 0x0C0 */
    char pad0D0[0x7ec];
    float speed; /* 0x8BC */
    char pad8C0[0x27c];
    float delta; /* 0xB3C */
    char padB40[0x134];
    void *tracker; /* 0xC74 */
    char padC78[0x4c];
    Channel_82502040 channels[2]; /* 0xCC4 */
    int timed;                    /* 0xD44 */
} Player_82502040;

extern float fn_82463328(void *timer);
extern void fn_8252AFE0(Player_82502040 *self, float scale);
extern void fn_82564720(void *tracker, float blend, float weight, __vector4 position, __vector4 rotation,
                        __vector4 velocity);
extern int fn_827F6320(void *sound);
extern float fn_827F6318(void *sound);
extern void fn_827F6308(void *sound, int value);
extern void fn_827F62A8(void *sound, float volume, unsigned char flag);
extern void fn_827F2DD0(void *target, void *sound, float fade, int mode, int flags);
extern void fn_825070D0(Player_82502040 *self, float delta);
extern void fn_82503030(Player_82502040 *self);
extern void fn_82592430(Player_82502040 *self, World_82502040 *world);

void fn_82502040(Player_82502040 *self, World_82502040 *world)
{
    int i;

    if (self->timed != 0) {
        fn_8252AFE0(self, world->clock->timer != 0 ? fn_82463328(world->clock->timer) : 1.0f);
    }
    if (self->tracker != 0) {
        fn_82564720(self->tracker, self->delta, 1.0f, self->position, self->rotation,
                    __vmulfp(self->velocity, __vspltw(__lvlx(&self->speed, 0), 0)));
    }
    for (i = 0; i < 2; i++) {
        int state = self->channels[i].state;
        int next;

        if (state != 6 && fn_827F6320(self->channels[i].sounds[state]) == 1 &&
            fn_827F6318(self->channels[i].sounds[state]) > 0.99f) {
            next = self->channels[i].nextState;
            if (next != self->channels[i].state && self->channels[i].target != 0) {
                fn_827F6308(self->channels[i].sounds[next], 0);
                fn_827F62A8(self->channels[i].sounds[next], 0.0f, 0);
                fn_827F2DD0(self->channels[i].target, self->channels[i].sounds[next], 0.5f, 0x12, 0);
                self->channels[i].state = next;
                self->channels[i].nextState = 0;
            }
        }
    }
    fn_825070D0(self, self->delta);
    fn_82503030(self);
    fn_82592430(self, world);
}
