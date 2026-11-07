typedef struct {
    unsigned short pad0;
    unsigned short type;
    unsigned int handle;
    unsigned int value;
    unsigned int rest[6];
} Msg_82FE8E38;

extern unsigned int fn_82FE8948(unsigned int a);
extern unsigned int fn_8300F188(void);
extern unsigned int fn_8300F208(unsigned int a, Msg_82FE8E38 *msg, unsigned short b);
extern unsigned int lbl_832642E4;

unsigned int fn_82FE8E38(unsigned int param_1, unsigned int param_2)
{
    Msg_82FE8E38 msg;
    unsigned int h;

    h = fn_82FE8948(param_1);
    if (h == 0) {
        return 0xf;
    }
    msg.value = param_2;
    msg.handle = h;
    msg.type = 0x14;
    return fn_8300F208(lbl_832642E4, &msg, (unsigned short)fn_8300F188());
}
