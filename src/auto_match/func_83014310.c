typedef int (*code)();

typedef struct Msg_83014310 {
    unsigned char hdr[2];
    unsigned short type;
    int *src;
    int val;
    int pad[9];
} Msg_83014310;

extern void RtlLeaveCriticalSection(void *cs);
extern int fn_8300F1A0(void);
extern void fn_8300F208(unsigned int a, void *msg, unsigned short b);
extern unsigned int lbl_832642E4;

void fn_83014310(int *param_1)
{
    Msg_83014310 msg;
    unsigned char isTwo;

    isTwo = param_1[0xe] == 2;
    RtlLeaveCriticalSection(param_1 + 7);
    if (isTwo) {
        msg.type = 0x17;
        (*(code *)(*param_1 + 4))(param_1);
        msg.src = param_1;
        msg.val = 6;
        fn_8300F208(lbl_832642E4, &msg, (unsigned short)fn_8300F1A0());
    }
}
