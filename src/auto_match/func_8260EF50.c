typedef struct Target_8260EF50 {
    char pad0[0x64];
    float value;
} Target_8260EF50;

typedef struct Node_8260EF50 {
    char pad0[0x1a8];
    Target_8260EF50 *target;
} Node_8260EF50;

typedef struct Self_8260EF50 {
    char pad0[0x60];
    Node_8260EF50 **nodes;
    char pad64[0x88 - 0x64];
    float scale;
} Self_8260EF50;

typedef struct Info_8260EF50 {
    int unk0;
    float a;
    float b;
    int unkc;
    float c;
    float d;
    int fixed;
} Info_8260EF50;

extern const float lbl_821CA45C[2];
extern float fn_82539560(float scale, float a, float b, float c, float d);

void fn_8260EF50(Self_8260EF50 *self, int unused, Info_8260EF50 *info, int unused2, int mode)
{
    Target_8260EF50 *target = self->nodes[0]->target;
    float value;

    if (info->fixed != 0) {
        value = lbl_821CA45C[1];
    } else if (mode == 1 || mode == 3) {
        value = info->d;
    } else {
        value = fn_82539560(self->scale, info->a, info->b, info->c, info->d);
    }
    target->value = value;
}
