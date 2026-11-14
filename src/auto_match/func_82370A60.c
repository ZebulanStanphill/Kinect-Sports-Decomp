extern const float lbl_821917A8[];

typedef struct Target_82370A60 {
    char pad0[0x40];
    unsigned int state;
} Target_82370A60;

typedef struct Timer_82370A60 {
    char pad0[0xa0];
    int target;
    char pad1[0x288 - 0xa4];
    float time;
} Timer_82370A60;

int fn_82370A60(Timer_82370A60 *self, float dt)
{
    float t = self->time + dt;
    self->time = t;
    if (self->target != 0 && ((Target_82370A60 *)self->target)->state == 1 && t <= lbl_821917A8[2]) {
        return 0;
    }
    return 1;
}
