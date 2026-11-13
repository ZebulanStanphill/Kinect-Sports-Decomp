typedef struct Notify_825121F0 {
    char pad[0x48];
    void *listener;
    unsigned char active;
} Notify_825121F0;

extern Notify_825121F0 lbl_83265988;
extern unsigned int lbl_8327F680[];

extern int XNotifyGetNext(void *listener, unsigned int id, unsigned int *msg, unsigned int *param);
extern void fn_828EC080(void);
extern void fn_825269D0(int event, int arg);
extern void fn_825935B0(void);

void fn_825121F0(unsigned char quiet)
{
    unsigned int msg;
    unsigned int param;

    while (XNotifyGetNext(lbl_83265988.listener, 0, &msg, &param) != 0) {
        if (msg == 9)
            lbl_83265988.active = param != 0;
    }
    fn_828EC080();
    if (quiet == 0)
        fn_825269D0(0x42, 0);
    if (lbl_8327F680[0x43] != 0)
        fn_825269D0(0x43, 0);
    else
        fn_825935B0();
}
