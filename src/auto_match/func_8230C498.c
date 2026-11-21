typedef struct Cfg_8230C498 {
    int pad00;
    unsigned char enabled; /* 0x04 */
} Cfg_8230C498;

typedef struct Obj_8230C498 {
    int pad00[3];
    char *context; /* 0x0C */
    char pad10[0x28];
    float delay; /* 0x38 */
    int pending; /* 0x3C */
} Obj_8230C498;

extern void fn_82230110(void *s, const char *name);
extern void fn_82230300(void *s, int a, int b);
extern void fn_822FB198(void *a, void *s);
extern Cfg_8230C498 *lbl_832975B0;
extern Cfg_8230C498 *fn_82250A18(void);
extern unsigned int lbl_83265A28;
extern float lbl_831CC4D8[];
extern const float lbl_821CA45C[2];

void fn_8230C498(Obj_8230C498 *self)
{
    char buf[32];
    Cfg_8230C498 *c;
    float delay;

    union {
        unsigned int bits;
        float value;
    } random;

    fn_82230110(buf, "idleset_kickoff");
    fn_822FB198(*(void **)(*(char **)(self->context + 0x114) + 0xc0), buf);
    fn_82230300(buf, 1, 0);
    c = lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
    if (c->enabled != 0) {
        delay = lbl_831CC4D8[1];
    } else {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        random.bits = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
        delay = (lbl_831CC4D8[1] - lbl_831CC4D8[0]) * (random.value - lbl_821CA45C[1]) + lbl_831CC4D8[0];
    }
    self->delay = delay;
    self->pending = 1;
}
