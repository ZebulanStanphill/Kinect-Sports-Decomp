typedef struct Msg_822B99C0 {
    unsigned int tag;     /* 0x00 */
    float a;              /* 0x04 */
    float b;              /* 0x08 */
    int n1;               /* 0x0c */
    float c;              /* 0x10 */
    float d;              /* 0x14 */
    int flag;             /* 0x18 */
    int n2;               /* 0x1c */
    float e;              /* 0x20 */
    int z[5];             /* 0x24 */
    int reserved;         /* 0x38: never set here; the frame needs the struct at least 0x3c bytes */
} Msg_822B99C0;

typedef struct Voice_822B99C0 {
    char pad0[0x1c];
    void *source;         /* 0x1c */
    void *mixer;          /* 0x20 */
    int started;          /* 0x24 */
    void *disabled;       /* 0x28 */
} Voice_822B99C0;

extern const float lbl_821CA45C[2];
extern const float lbl_821917A8[];
extern void fn_822B98F8(Voice_822B99C0 *v);
extern int fn_82554860(void *mixer, int kind, void *target, Msg_822B99C0 *msg);

void fn_822B99C0(Voice_822B99C0 *v, void *target)
{
    Msg_822B99C0 m;

    if (v->disabled == 0) {
        if (v->source == 0) {
            fn_822B98F8(v);
        }
        if (v->source != 0 && v->mixer != 0) {
            m.a = lbl_821CA45C[1]; m.b = 0.0f; m.tag = 0x4d697850; m.d = 0.0f; m.n1 = 0x20; m.c = lbl_821917A8[6]; m.flag = 0; m.n2 = 0x40; m.e = lbl_821917A8[6]; m.z[0] = 0; m.z[3] = 0; m.z[4] = 0; m.z[1] = 0; m.z[2] = 0;
            fn_82554860(v->mixer, 0, target, &m);
            v->started = 1;
        }
    }
}
