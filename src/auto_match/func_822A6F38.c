typedef struct Msg_822A6F38 {
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
} Msg_822A6F38;

typedef struct Obj_822A6F38 {
    char pad[0x5c0];
    void *target;         /* 0x5c0 */
} Obj_822A6F38;

extern const float lbl_821CA45C[2];
extern const float lbl_821917A8[];
extern int fn_82554860(void *target, int kind, void *arg, Msg_822A6F38 *msg);

void fn_822A6F38(Obj_822A6F38 *o, void *arg, float d, float e, int flag)
{
    Msg_822A6F38 m;

    m.d = d;
    m.e = e;
    m.a = lbl_821CA45C[1];
    m.b = 0.0f;
    m.tag = 0x4d697850;
    m.c = lbl_821917A8[6];
    m.n1 = 0x20;
    m.n2 = 0x40;
    m.z[0] = 0;
    m.z[3] = 0;
    m.z[4] = 0;
    m.z[1] = 0;
    m.z[2] = 0;
    m.flag = flag;
    fn_82554860(o->target, 0, arg, &m);
}
