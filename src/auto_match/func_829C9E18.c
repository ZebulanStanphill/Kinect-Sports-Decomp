typedef struct Node_829C9E18 {
    unsigned int pad : 29;
    unsigned int state : 2;
    unsigned int flag : 1;
} Node_829C9E18;

extern unsigned char lbl_83215000[];
extern unsigned char KfAcquireSpinLock(void *);
extern void KfReleaseSpinLock(void *, unsigned char);

#define HEAD (*(Node_829C9E18 **)(lbl_83215000 + 0x284))

Node_829C9E18 *fn_829C9E18(void)
{
    Node_829C9E18 *r = 0;
    unsigned char irql = KfAcquireSpinLock(lbl_83215000 + 0x6c);
    if (HEAD != 0) {
        r = HEAD;
        HEAD = 0;
        r->state = 1;
    }
    KfReleaseSpinLock(lbl_83215000 + 0x6c, irql);
    return r;
}
