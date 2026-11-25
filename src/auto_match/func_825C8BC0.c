typedef struct Transition_825C8BC0 {
    unsigned int flags;
    float target;
    float current;
    float rate;
} Transition_825C8BC0;

typedef struct Defaults_825C8BC0 {
    char pad[0x134];
    void *primary;
    char pad138[0x14];
    void *secondary;
} Defaults_825C8BC0;

typedef struct State_825C8BC0 {
    int reserved;
    void *slots[2];
    Transition_825C8BC0 transitions[2];
    int timerActive;
    char pad30[0x10];
    float timeout;
    float elapsed;
    char pad48[0xc];
    Defaults_825C8BC0 *defaults;
} State_825C8BC0;

extern double fabs(double);

void fn_825C8BC0(State_825C8BC0 *self, float elapsed)
{
    int i = 0;
    do {
        unsigned int flags = self->transitions[i].flags;
        if (flags & 0x80000000u) {
            float step = self->transitions[i].rate * elapsed;
            float target = self->transitions[i].target;
            float current = self->transitions[i].current;
            float delta = target - current;
            if ((float)fabs(delta) < step) {
                self->transitions[i].current = target;
                self->transitions[i].flags = flags & 0x7fffffffu;
                if (flags & 0x40000000u) {
                    self->slots[i] = 0;
                } else {
                    Defaults_825C8BC0 *defaults = self->defaults;
                    if (i == 0) {
                        self->slots[0] = self->defaults->primary;
                    } else {
                        self->slots[i] = defaults->secondary;
                    }
                }
            } else {
                if (delta > 0.0f) {
                    current = current + step;
                } else {
                    current = current - step;
                }
                self->transitions[i].current = current;
            }
        }
        ++i;
    } while (i < 2);

    if (self->timerActive) {
        float time = self->elapsed + elapsed;
        float timeout = self->timeout;
        self->elapsed = time;
        if (time > timeout) {
            self->elapsed = 0.0f;
            self->timerActive = 0;
        }
    }
}
