typedef struct Session_8251CA00 {
    int pad0;
    void *device;
} Session_8251CA00;

typedef struct System_8251CA00 {
    char pad0[0xec];
    Session_8251CA00 *session;
    char padf0[0x114 - 0xf0];
    void (*onEvent)(void *device);
    char pad118[0x128 - 0x118];
    unsigned int suspended;
} System_8251CA00;

typedef struct Hook_8251CA00 {
    char pad0[0x10];
    void (*callback)(void *context);
    char pad14[0x30 - 0x14];
    void *context;
} Hook_8251CA00;

typedef struct Notify_8251CA00 {
    char pad0[0x10];
    void (*callback)(void);
} Notify_8251CA00;

extern System_8251CA00 lbl_832960A0;
extern Hook_8251CA00 lbl_8327F644;
extern Notify_8251CA00 lbl_83276774;
extern void fn_8258FC38(void *device, int type, void *data);
extern void fn_825269D0(int id, int value);
extern void fn_825523D0(void);

void fn_8251CA00(int type, void *data)
{
    void *device;
    if (lbl_832960A0.session != 0) {
        device = lbl_832960A0.session->device;
    } else {
        device = 0;
    }
    if (device != 0 && lbl_832960A0.suspended == 0) {
        fn_8258FC38(device, type, data);
    } else if (type == 4) {
        if (lbl_8327F644.callback != 0) {
            lbl_8327F644.callback(lbl_8327F644.context);
        }
        fn_825269D0(0x1a, 0);
        fn_825523D0();
        if (lbl_83276774.callback != 0) {
            lbl_83276774.callback();
        }
        fn_825269D0(0x1b, 0);
    }
    if (lbl_832960A0.onEvent != 0) {
        lbl_832960A0.onEvent(device);
    }
}
