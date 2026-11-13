typedef struct Msg_82FE8C78 {
    unsigned char hdr[2];
    unsigned short type;
    unsigned int arg;
    unsigned int handle;
    unsigned int pad[9];
} Msg_82FE8C78;

extern unsigned int lbl_832642E4;
extern unsigned int fn_82FE8948(void);
extern unsigned short fn_8300F110(void);
extern int fn_8300F208(unsigned int ctx, Msg_82FE8C78 *msg, unsigned int size);

int fn_82FE8C78(int param_1, unsigned int param_2)
{
    Msg_82FE8C78 msg;
    unsigned int h;

    h = fn_82FE8948();
    if (h != 0) {
        msg.type = 5;
        msg.arg = param_2;
        msg.handle = h;
        return fn_8300F208(lbl_832642E4, &msg, fn_8300F110());
    }
    return 0xf;
}
