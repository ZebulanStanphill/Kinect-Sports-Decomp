// Swing detector: two moving averages (hand speed and hand height) drive a two-state machine.
#include <vector>

struct Sample_824DEE10 {
    float time;
    float value;
};

struct Average_824DEE10 {
    std::vector<Sample_824DEE10> samples; /* 0x00 */
    float sum;                            /* 0x10 */
    float average;                        /* 0x14 */
    float window;                         /* 0x18 */
    float time;                           /* 0x1c */
};

struct Thresholds_824DEE10 {
    float minSpeed; /* 0x00 */
    float pad04;
    float holdTime;    /* 0x08 */
    float heightScale; /* 0x0c */
    float pad10;
    float maxHeight; /* 0x14 */
    float minHeight; /* 0x18 */
};

struct Body_824DEE10 {
    char pad0[0x34];
    float handHeight; /* 0x34 */
    char pad38[0x1c];
    float bodyHeight; /* 0x54 */
    char pad58[0x5c];
    float height; /* 0xb4 */
    float speed;  /* 0xb8 */
};

struct Swing_824DEE10 {
    unsigned int state;              /* 0x00 */
    Thresholds_824DEE10 *thresholds; /* 0x04 */
    Average_824DEE10 speed;          /* 0x08 */
    Average_824DEE10 height;         /* 0x28 */
    int result;                      /* 0x48 */
    float timer;                     /* 0x4c */
};

extern "C" void fn_824DC998(Average_824DEE10 *self, float dt);
extern "C" void fn_824DC918(Average_824DEE10 *self, float value);

extern "C" void fn_824DEE10(Swing_824DEE10 *self, float dt, Body_824DEE10 *body)
{
    Thresholds_824DEE10 *thresholds;
    Average_824DEE10 *height;
    float speed;

    fn_824DC998(&self->speed, dt);
    speed = body->speed >= 0.0f ? body->speed : 0.0f;
    fn_824DC918(&self->speed, speed);
    height = &self->height;
    fn_824DC998(height, dt);
    fn_824DC918(height, body->height);
    switch (self->state) {
    case 0:
        thresholds = self->thresholds;
        if (self->speed.average > thresholds->minSpeed) {
            if (self->height.average < thresholds->minHeight)
                self->result = 1;
            else if (self->height.average <= thresholds->maxHeight &&
                     body->handHeight < thresholds->heightScale * body->bodyHeight)
                self->result = 1;
            else
                self->result = 0;
            self->state = 1;
            self->timer = thresholds->holdTime;
            height->average = 0.0f;
            height->sum = 0.0f;
            height->samples.clear();
        }
        break;
    case 1:
        self->timer -= dt;
        self->result = 2;
        if (self->timer <= 0.0f)
            self->state = 0;
        break;
    }
}
