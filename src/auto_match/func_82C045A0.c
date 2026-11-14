typedef struct Obj_82C045A0 {
    unsigned char pad[0x138];
    int level;
    unsigned char pad2[0x18];
    float quality;
} Obj_82C045A0;

extern float lbl_82015BD4;

int fn_82C045A0(Obj_82C045A0 *self, int *state, int *level)
{
    int v = self->level;
    *level = v;
    if ((v <= -5000 && self->quality > 1.0f) || self->quality >= lbl_82015BD4) {
        *state = 5;
        return 0;
    }
    *state = 1;
    return 0;
}
