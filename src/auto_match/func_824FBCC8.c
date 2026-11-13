typedef struct Msg_824FBCC8 {
    unsigned int tag;     /* 0x00 */
    float a;              /* 0x04 */
    float b;              /* 0x08 */
    int n1;               /* 0x0c */
    float c;              /* 0x10 */
    float d;              /* 0x14 */
    int flag;             /* 0x18 */
    int n2;               /* 0x1c */
    float e;              /* 0x20 */
    int z[6];             /* 0x24 */
} Msg_824FBCC8;

typedef struct Obj_824FBCC8 {
    char pad[0xbb8];
    char target[4];       /* 0xbb8 */
} Obj_824FBCC8;

extern const float lbl_821CA45C[2];
extern const float lbl_821917A8[];
extern int fn_8252D2F8(Obj_824FBCC8 *o, int kind, Msg_824FBCC8 *msg, void *target);

void fn_824FBCC8(Obj_824FBCC8 *o)
{
    Msg_824FBCC8 m;

    m.a = lbl_821CA45C[1];
    m.b = 0.0f;
    m.tag = 0x4d697850;
    m.d = 0.0f;
    m.n1 = 0x20;
    m.c = lbl_821917A8[6];
    m.n2 = 0x40;
    m.e = lbl_821917A8[6];
    m.z[0] = 0;
    m.z[3] = 0;
    m.z[4] = 0;
    m.z[1] = 0;
    m.z[2] = 0;
    m.flag = 1;
    fn_8252D2F8(o, 0, &m, o->target);
}
