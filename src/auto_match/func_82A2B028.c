typedef unsigned int undefined4;
typedef unsigned __int64 undefined8;

unsigned int XMsgSystemProcessCall(unsigned int app, unsigned int msg,
                                   void *buf, unsigned int size);

typedef struct {
    undefined4 a;
    undefined4 b;
    undefined4 c;
    undefined4 d;
    undefined8 e;
} MsgArgs_82A2B028;

void fn_82A2B028(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                 undefined4 param_4, undefined8 param_5)
{
    MsgArgs_82A2B028 args;

    args.a = param_1;
    args.b = param_2;
    args.c = param_3;
    args.d = param_4;
    args.e = param_5;
    XMsgSystemProcessCall(0xfe, 0x2c003, &args, 0x18);
}
