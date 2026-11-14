typedef struct Msg_828E02D0 {
    char pad0[0x6c];
    int key;                /* 0x6c */
    char pad70[0x10];
    int extra;              /* 0x80 */
    char pad84[0x14];
    char data[4];           /* 0x98 */
} Msg_828E02D0;

typedef struct Handler_828E02D0 Handler_828E02D0;
typedef struct HandlerVt_828E02D0 {
    void *f0[6];
    void *(*find)(Handler_828E02D0 *self, int key, char *data, int extra);
} HandlerVt_828E02D0;
struct Handler_828E02D0 {
    HandlerVt_828E02D0 *vt;
    int fallback;           /* 0x04 */
};

extern int fn_8289B5C0(void *entry, Msg_828E02D0 *msg);

int fn_828E02D0(Handler_828E02D0 *self, Msg_828E02D0 *msg)
{
    int result = 1;
    void *entry = self->vt->find(self, msg->key, msg->data, msg->extra);
    if (entry != 0)
        result = fn_8289B5C0(entry, msg);
    else if (self->fallback == 0)
        result = 0;
    return result;
}
