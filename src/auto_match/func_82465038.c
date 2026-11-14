typedef struct Obj_82465038 {
    int f0;
    int state;
    int pad[2];
    float blend;
} Obj_82465038;

extern const float lbl_821CA45C[2];

void fn_82465038(Obj_82465038 *self, int state)
{
    if (self->state == 7 && state != 11) {
        self->blend = 0.0f;
    }
    switch (state) {
    case 7:
        self->blend = lbl_821CA45C[1];
        break;
    case 12:
        self->blend = 0.0f;
        break;
    }
    self->state = state;
}
