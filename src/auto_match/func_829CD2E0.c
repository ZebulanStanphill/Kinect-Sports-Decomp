typedef struct Node_829CD2E0 {
    unsigned int pad0 : 24;
    unsigned int pending : 1;
    unsigned int pad25 : 4;
    unsigned int state : 2;
    unsigned int flag : 1;
    char pad4[0x60];
    unsigned int handle; /* 0x64 */
} Node_829CD2E0;

typedef struct Request_829CD2E0 {
    unsigned int code;    /* 0x0 */
    unsigned int handle;  /* 0x4 */
    unsigned int value;   /* 0x8 */
    unsigned int target;  /* 0xc */
    unsigned int *result; /* 0x10 */
} Request_829CD2E0;

extern unsigned char lbl_83215000[];
extern unsigned char KfAcquireSpinLock(void *lock);
extern void KfReleaseSpinLock(void *lock, unsigned char irql);
extern long (*lbl_8315C3E8)(Request_829CD2E0 *request);
extern void fn_829C9E90(Node_829CD2E0 *node);

#define PENDING_HEAD (*(Node_829CD2E0 **)(lbl_83215000 + 0x7c))

Node_829CD2E0 *fn_829CD2E0(void)
{
    Node_829CD2E0 *node = 0;
    unsigned char irql = KfAcquireSpinLock(lbl_83215000 + 0x6c);
    Request_829CD2E0 request;
    unsigned int result;

    if (PENDING_HEAD != 0) {
        node = PENDING_HEAD;
        node->state = 1;
        PENDING_HEAD = 0;
    }
    KfReleaseSpinLock(lbl_83215000 + 0x6c, irql);
    if (node != 0 && node->pending) {
        unsigned int handle = node->handle;

        result = 0x96000;
        request.code = 0x1e;
        request.handle = handle;
        request.value = 0x67200;
        request.target = handle;
        request.result = &result;
        if (lbl_8315C3E8(&request) < 0 || result != 0x96000) {
            fn_829C9E90(node);
            return 0;
        }
        node->pending = 0;
    }
    return node;
}
