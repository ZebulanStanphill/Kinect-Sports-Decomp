typedef void (*VCall_826C57E8)(void *self, void *arg);

typedef struct Vtbl_826C57E8 {
    void *slots[27];
    VCall_826C57E8 fn6c;
} Vtbl_826C57E8;

typedef struct Obj_826C57E8 {
    Vtbl_826C57E8 *vt;
} Obj_826C57E8;

typedef struct Msg_826C57E8 {
    unsigned int first;
    unsigned int second;
    unsigned short s8;
    unsigned char ba;
    signed char bb;
    unsigned char bc;
    unsigned char bd;
    unsigned char pad[10];
} Msg_826C57E8;

void fn_826C57E8(Obj_826C57E8 *param_1)
{
    Msg_826C57E8 m;

    m.second = 0;
    m.s8 = 0;
    m.ba = 0;
    m.bc = 0;
    m.bd = 0;
    m.first = 0x80002;
    m.bb = -1;
    param_1->vt->fn6c(param_1, &m);
}
