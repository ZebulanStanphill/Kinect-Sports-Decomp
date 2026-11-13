typedef struct Msg_82A2B180 {
    unsigned int id;          /* 0x00 */
    unsigned int pad04;
    unsigned __int64 value;   /* 0x08 */
    unsigned int extra;       /* 0x10 */
    unsigned int arg;         /* 0x14 */
} Msg_82A2B180;

extern unsigned int XMsgInProcessCall(unsigned int app, unsigned int msg, void *param1, void *param2);

void fn_82A2B180(unsigned int id, unsigned int arg, unsigned __int64 value, unsigned int extra)
{
    Msg_82A2B180 msg;

    msg.id = id;
    msg.value = value;
    msg.extra = extra;
    msg.arg = arg;
    XMsgInProcessCall(0xfe, 0x2c00d, &msg, 0);
}
