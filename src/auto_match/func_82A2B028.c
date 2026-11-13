unsigned int XMsgSystemProcessCall(unsigned int app, unsigned int msg,
                                   void *buf, unsigned int size);

typedef struct {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    unsigned __int64 e;
} MsgArgs_82A2B028;

void fn_82A2B028(unsigned int param_1, unsigned int param_2, unsigned int param_3,
                 unsigned int param_4, unsigned __int64 param_5)
{
    MsgArgs_82A2B028 args;

    args.a = param_1;
    args.b = param_2;
    args.c = param_3;
    args.d = param_4;
    args.e = param_5;
    XMsgSystemProcessCall(0xfe, 0x2c003, &args, 0x18);
}
