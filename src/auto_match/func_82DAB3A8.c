typedef struct Msg_82DAB3A8 {
    unsigned short id;        /* 0x00 */
    int zero;         /* 0x04 */
    int a;            /* 0x08 */
    int b;            /* 0x0c */
    int unk10;        /* 0x10 */
    int owner;        /* 0x14 */
    int arg;          /* 0x18 */
    int unk1c;        /* 0x1c */
    int unk20;        /* 0x20 */
} Msg_82DAB3A8;

extern int fn_82DAD368(int obj, Msg_82DAB3A8 *msg);
extern int fn_82DAF0B0(int obj, Msg_82DAB3A8 *msg);

void fn_82DAB3A8(int self, unsigned short param_2, int param_3)
{
    Msg_82DAB3A8 msg;
    int a;
    int b;

    a = *(int *)(self + 0x10);
    b = *(int *)(self + 0x14);
    msg.id = param_2;
    msg.zero = 0;
    msg.a = a;
    msg.b = b;
    msg.owner = self;
    msg.arg = param_3;
    fn_82DAF0B0(*(int *)(self + 0xc), &msg);
    if (*(unsigned short *)(a + 0x204) != 0) {
        fn_82DAD368(a, &msg);
    }
    if (*(unsigned short *)(b + 0x204) != 0) {
        fn_82DAD368(b, &msg);
    }
}
