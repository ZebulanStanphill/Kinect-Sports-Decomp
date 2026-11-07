typedef unsigned short U16;
typedef unsigned int U32;

typedef struct Msg_82FE8C78 {
    unsigned char hdr[2];
    U16 type;
    U32 arg;
    U32 handle;
    U32 pad[9];
} Msg_82FE8C78;

extern U32 lbl_832642E4;
extern U32 fn_82FE8948(void);
extern U16 fn_8300F110(void);
extern int fn_8300F208(U32 ctx, Msg_82FE8C78 *msg, U32 size);

int fn_82FE8C78(int param_1, U32 param_2)
{
    Msg_82FE8C78 msg;
    U32 h;

    h = fn_82FE8948();
    if (h != 0) {
        msg.type = 5;
        msg.arg = param_2;
        msg.handle = h;
        return fn_8300F208(lbl_832642E4, &msg, fn_8300F110());
    }
    return 0xf;
}
