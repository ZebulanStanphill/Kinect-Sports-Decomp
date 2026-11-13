typedef struct Msg_82FAF930 {
    unsigned int type;      /* 0x00 */
    unsigned int a;         /* 0x04 */
    unsigned int b;         /* 0x08 */
    unsigned char data[9];  /* 0x0c */
    unsigned char flag15;   /* 0x15 */
    unsigned char flag16;   /* 0x16 */
} Msg_82FAF930;

extern void *lbl_83264230;
extern int fn_82FA6EF8(void *mgr, void *self, unsigned int id, void *data, unsigned int extra);
extern int fn_82FA6FB0(void *mgr, void *self, unsigned int id, void *data);
extern int fn_82FA7040(void *mgr, void *self, unsigned int id, void *data, unsigned char flag);
extern void fn_82FB01E8(void *self, Msg_82FAF930 *msg);

void fn_82FAF930(void *self, Msg_82FAF930 *msg)
{
    switch (msg->type) {
    case 0:
        fn_82FA6EF8(lbl_83264230, self, msg->a, msg->data, msg->b);
        break;
    case 1:
        fn_82FA6FB0(lbl_83264230, self, msg->a, msg->data);
        break;
    case 2:
        fn_82FA7040(lbl_83264230, self, msg->a, msg->data, msg->flag16);
        break;
    }
    fn_82FB01E8(self, msg);
}
