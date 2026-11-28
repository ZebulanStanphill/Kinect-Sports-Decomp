typedef struct Preset_82FE03B0 {
    int pad0[2];
    const float *attack; /* 0x08 */
    int padC;
    const float *release; /* 0x10 */
} Preset_82FE03B0;

typedef struct Obj_82FE03B0 {
    char pad0[0x8c];
    char sub[0x3c];     /* 0x8c */
    unsigned int count; /* 0xc8 */
    char padCC[4];
    unsigned char enabled; /* 0xd0 */
    char padD1[0x134 - 0xd1];
    int preset; /* 0x134 */
    char pad138[4];
    float pitch; /* 0x13c */
} Obj_82FE03B0;

extern double fn_82F655D8(double x, double y);
extern int fn_82FE41A0(void *sub, unsigned int a, unsigned int count);
extern const Preset_82FE03B0 lbl_82175108[32];
extern float lbl_82006848;

int fn_82FE03B0(Obj_82FE03B0 *o, unsigned int a)
{
    int result = 1;

    if (o->enabled != 0) {
        float ratio = (float)fn_82F655D8(2.0, o->pitch * 0.01f);
        float attack = *lbl_82175108[o->preset].attack * ratio;
        float release = *lbl_82175108[o->preset].release * ratio;
        float shortest = attack - release >= 0.0f ? release : attack;
        unsigned int n = (unsigned int)(shortest * (float)o->count * lbl_82006848);

        if (n != 0) {
            result = fn_82FE41A0(o->sub, a, n);
        }
    }
    return result;
}
