typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmsum3fp(__vector4 a, __vector4 b);
double fabs(double x);

typedef struct String_82411E50 {
    int data[7];
} String_82411E50;

typedef struct Param_82411E50 {
    String_82411E50 name;
    float value;
} Param_82411E50;

typedef struct Params_82411E50 {
    int a;
    int b;
    int c;
    int pad;
} Params_82411E50;

typedef struct Ball_823B0760 {
    char pad000[0x10];
    __vector4 position; /* 0x10 */
    __vector4 velocity; /* 0x20 */
    char pad030[0xd0 - 0x30];
    int soundDefault;  /* 0xd0 */
    int soundPositive; /* 0xd4 */
    int soundNegative; /* 0xd8 */
    int soundFast;     /* 0xdc */
    int soundB;        /* 0xe0 */
    int soundA;        /* 0xe4 */
    char pad0e8[0x110 - 0xe8];
    void *audio; /* 0x110 */
    char pad114[0x14c - 0x114];
    float spin; /* 0x14c */
    char pad150[0x184 - 0x150];
    int flagB; /* 0x184 */
    int flagA; /* 0x188 */
    char pad18c[0x26c - 0x18c];
    float speed; /* 0x26c */
} Ball_823B0760;

extern float lbl_831C9CE0[];
extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);
extern void fn_82230110(String_82411E50 *s, const char *text);
extern void fn_82230300(String_82411E50 *s, int built, unsigned int newSize);
extern void fn_8236D0D0(Params_82411E50 *v, const Param_82411E50 *x);
extern void fn_82552BE8(void *audio, int *sound, __vector4 *position, Params_82411E50 *params);
extern void fn_822CD140(Params_82411E50 *v);

/* Plays the table tennis ball bounce, its volume from the ball's speed. */
void fn_823B0760(Ball_823B0760 *self)
{
    Params_82411E50 params;
    Param_82411E50 param;
    __vector4 lengthSq;
    __vector4 position;
    float volume;
    int *sound;

    if (self->audio == 0) {
        return;
    }
    lengthSq = __vmsum3fp(self->velocity, self->velocity);
    params.a = 0;
    params.b = 0;
    params.c = 0;
    volume = fn_82539560(
        (float)fabs(lengthSq.vector4_f32[0]), lbl_831C9CE0[0x48c / 4] * lbl_831C9CE0[0x48c / 4],
        lbl_831C9CE0[0x490 / 4] * lbl_831C9CE0[0x490 / 4], lbl_831C9CE0[0x494 / 4], lbl_831C9CE0[0x498 / 4]);
    fn_82230110(&param.name, "tabletennis_ball_bounce");
    param.value = volume;
    fn_8236D0D0(&params, &param);
    fn_82230300(&param.name, 1, 0);
    position = self->position;
    if (self->flagA != 0) {
        sound = &self->soundA;
    } else if (self->flagB != 0) {
        sound = &self->soundB;
    } else if (self->spin > 0.0f) {
        sound = &self->soundPositive;
    } else if (self->spin < 0.0f) {
        sound = &self->soundNegative;
    } else if (self->speed > lbl_831C9CE0[0x3c / 4]) {
        sound = &self->soundFast;
    } else {
        sound = &self->soundDefault;
    }
    fn_82552BE8(self->audio, sound, &position, &params);
    fn_822CD140(&params);
}
