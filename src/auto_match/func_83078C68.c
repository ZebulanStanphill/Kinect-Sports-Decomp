// Per-frame update: the product of the weights fn_8306D6D0 gives for up to four listed ids (list ends at an
// id >= 20), a timer that runs down while the product is above 0.7 and up otherwise, the elapsed time
// while the timer is non-negative, a shift of the last two time steps and of two history vectors, and a
// new vector from fn_83075E40 of fn_83078598's result.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct State_83078C68 {
    char pad0[0x40];
    int ids[4];               /* 0x40 */
    float weight;             /* 0x50 */
    float timer;              /* 0x54 */
    char pad58[0xc8];
    __vector4 history0;       /* 0x120 */
    __vector4 history1;       /* 0x130 */
    __vector4 history2;       /* 0x140 */
    __vector4 current;        /* 0x150 */
    char pad160[0x24];
    float previousStep;       /* 0x184 */
    float step;               /* 0x188 */
    float elapsed;            /* 0x18c */
} State_83078C68;

float fn_8306D6D0(void *source, int id);
float fn_8306E7D8(float a, float b);   /* min */
float fn_8306E7E8(float a, float b);   /* max */
typedef struct Matrix_83078C68 {
    __vector4 r[4];
} Matrix_83078C68;

Matrix_83078C68 *fn_83078598(Matrix_83078C68 *out, State_83078C68 *self);
__vector4 fn_83075E40(const Matrix_83078C68 *m);

void fn_83078C68(State_83078C68 *self, void *source, float dt)
{
    int *id;
    int i;
    Matrix_83078C68 t;
    float e;

    self->weight = 1.0f;
    for (i = 0; self->ids[i] < 20; i++) {
        if (i >= 4) {
            break;
        }
        self->weight = fn_8306E7D8(self->weight, fn_8306D6D0(source, self->ids[i]));
    }
    if (self->weight > 0.7f) {
        self->timer = fn_8306E7D8(0.08f, self->timer) - dt;
    } else {
        self->timer = fn_8306E7E8(0.0f, dt + self->timer);
    }
    if (self->timer >= 0.0f) {
        e = self->elapsed + dt;
    } else {
        e = 0.0f;
    }
    self->elapsed = e;
    self->previousStep = self->step;
    self->step = dt;
    self->history1 = self->history2;
    self->history2 = self->history0;
    self->current = fn_83075E40(fn_83078598(&t, self));
}
