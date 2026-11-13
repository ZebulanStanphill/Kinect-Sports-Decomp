typedef struct Msg_82800178 {
    char pad0[0x16];
    unsigned short type;   /* 0x16, index into lbl_83156AF0 */
    void *data;            /* 0x18 */
} Msg_82800178;

typedef void (*Handler_82800178)(void *target, float value, void *data, int a4, int a5, int a6,
                                 int a7, int a8, unsigned short a9, int a10);

typedef struct Entry_82800178 {
    char pad0[0x18];
    Handler_82800178 handler;   /* 0x18 */
    void *unk1c;
    void *unk20;
} Entry_82800178;

extern Entry_82800178 lbl_83156AF0[];

void fn_82800178(void *target, float value, Msg_82800178 *msg, int a4, int a5, int a6, int a7,
                 int a8, unsigned short a9, int a10)
{
    Handler_82800178 handler;

    if (msg->data != 0) {
        handler = lbl_83156AF0[msg->type].handler;
        if (handler != 0)
            handler(target, value, msg->data, a4, a5, a6, a7, a8, a9, a10);
    }
}
