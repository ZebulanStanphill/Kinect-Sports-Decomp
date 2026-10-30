typedef struct {
    unsigned short unk0;
    unsigned short type;
    int value;
    char rest[0x28];
} Msg_82FE7EF0;

extern int fn_8300F1B0(void);
extern void fn_8300F208(void *mgr, Msg_82FE7EF0 *msg, unsigned short id);
extern void fn_830132A0(void *mgr);
extern void *lbl_832642E4;

void fn_82FE7EF0(int value)
{
    Msg_82FE7EF0 msg;

    msg.type = 0x19;
    msg.value = value;
    fn_8300F208(lbl_832642E4, &msg, fn_8300F1B0());
    if (value == -1) {
        fn_830132A0(lbl_832642E4);
    }
}
