typedef struct Node_82BFA140 {
    struct Node_82BFA140 *next; /* 0x00 */
    int pad4;                   /* 0x04 */
    int pad8;                   /* 0x08 */
    void *owner;                /* 0x0c */
} Node_82BFA140;

typedef struct Global_82BFA140 {
    Node_82BFA140 *head;        /* 0x00 */
    int pad4[3];                /* 0x04 */
    void *file;                 /* 0x10 */
    int pad14[4];               /* 0x14 */
    unsigned short id;          /* 0x24 */
} Global_82BFA140;

typedef struct Obj_82BFA140 {
    unsigned int count;         /* 0x00 */
    unsigned short id;          /* 0x04 */
    unsigned short pad6;        /* 0x06 */
    int pad8;                   /* 0x08 */
    unsigned short padc;        /* 0x0c */
    unsigned char flagE;        /* 0x0e */
    unsigned char flagF;        /* 0x0f */
} Obj_82BFA140;

typedef struct IoStatus_82BFA140 {
    int status;
    unsigned int info;
} IoStatus_82BFA140;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int NtFlushBuffersFile(void *h, IoStatus_82BFA140 *iosb);
extern void fn_82BF9248(unsigned short id);
extern void fn_82BF9498(unsigned short id);
extern void fn_82BF95B0(Node_82BFA140 *n);
extern void fn_82BFA0C0(void);
extern Global_82BFA140 lbl_8322FD08;
extern char lbl_83231D48[];

void fn_82BFA140(Obj_82BFA140 *param_1, unsigned char param_2)
{
    Node_82BFA140 *n;
    IoStatus_82BFA140 iosb;

    RtlEnterCriticalSection(lbl_83231D48);
    lbl_8322FD08.id = 0xffff;
    fn_82BF9248(param_1->id);
    if (param_1->flagE == 0) {
        for (n = lbl_8322FD08.head; n != (Node_82BFA140 *)&lbl_8322FD08; n = n->next) {
            if (n->owner == param_1) {
                fn_82BF95B0(n);
            }
        }
        NtFlushBuffersFile(lbl_8322FD08.file, &iosb);
        if (param_1->flagF != 0 || param_1->count != 0) {
            param_2 = 1;
        }
    }
    if (param_2 != 0) {
        fn_82BF9498(param_1->id);
    }
    fn_82BFA0C0();
    param_1->id = 0xffff;
    RtlLeaveCriticalSection(lbl_83231D48);
}
