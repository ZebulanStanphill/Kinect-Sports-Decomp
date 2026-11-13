typedef struct Msg_830300B8 {
    unsigned int type;
    int a;
    int b;
} Msg_830300B8;

extern void fn_8302ED58(void *self, int a, int b);
extern void fn_8302ECF8(void *self, int a, int b);
extern void fn_8302FA48(void *self, int a, int b);
extern void fn_82FB01E8(void *self, Msg_830300B8 *msg);

void fn_830300B8(void *self, Msg_830300B8 *msg)
{
    switch (msg->type) {
    case 0:
    case 3:
        fn_8302FA48(self, msg->a, msg->b);
        break;
    case 1:
        fn_8302ED58(self, msg->a, msg->b);
        break;
    case 2:
        fn_8302ECF8(self, msg->a, msg->b);
        break;
    }
    fn_82FB01E8(self, msg);
}
