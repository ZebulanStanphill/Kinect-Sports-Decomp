/* Builds a notification for one of three kinds of request, forwards the
 * request to the matching handler and posts the notification to the listener
 * that the handle table holds for the handle, then releases the listener. */
typedef struct Notification_830120B8 {
    unsigned int kind;     /* 0x00 */
    unsigned int size;     /* 0x04 */
    unsigned int reserved; /* 0x08 */
    unsigned int arg5;     /* 0x0C */
    unsigned int arg6;     /* 0x10 */
    unsigned char flag0;   /* 0x14 */
    unsigned char flag1;   /* 0x15 */
    unsigned char flag2;   /* 0x16 */
} Notification_830120B8;

typedef struct Listener_830120B8 Listener_830120B8;

typedef struct ListenerVtbl_830120B8 {
    void *slot00;
    void *slot04;
    void (*Release)(Listener_830120B8 *self); /* 0x08 */
    void *slot0C;
    void *slot10;
    void *slot14;
    void *slot18;
    void (*Notify)(Listener_830120B8 *self, Notification_830120B8 *notification); /* 0x1C */
} ListenerVtbl_830120B8;

struct Listener_830120B8 {
    ListenerVtbl_830120B8 *vtbl;
};

extern char *lbl_832642E0;
extern void *lbl_832642E4;

extern Listener_830120B8 *fn_82FAB9C0(void *table, unsigned int key);
extern void fn_83011240(void *manager, unsigned int handle, unsigned int size);
extern void fn_83010BF0(void *manager, unsigned int handle, unsigned int size, int flag);
extern void fn_83011CF8(void *manager, unsigned int handle, unsigned int size, int flag);

void fn_830120B8(void *unused, unsigned int handle, unsigned int size, unsigned int kind, unsigned int arg5,
                 unsigned int arg6)
{
    Listener_830120B8 *listener;
    Notification_830120B8 notification;

    listener = fn_82FAB9C0(lbl_832642E0 + 4, handle);
    if (listener != 0) {
        notification.arg6 = arg6;
        notification.size = size;
        notification.flag0 = 0;
        notification.flag2 = 0;
        notification.reserved = 0;
        notification.arg5 = arg5;
        notification.flag1 = 0;
        switch (kind) {
        case 0:
            fn_83011240(lbl_832642E4, handle, size);
            notification.kind = 0;
            break;
        case 1:
            fn_83010BF0(lbl_832642E4, handle, size, 1);
            notification.kind = 1;
            break;
        case 2:
            fn_83011CF8(lbl_832642E4, handle, size, 0);
            notification.kind = 2;
            break;
        default:
            return;
        }
        listener->vtbl->Notify(listener, &notification);
        listener->vtbl->Release(listener);
    }
}
