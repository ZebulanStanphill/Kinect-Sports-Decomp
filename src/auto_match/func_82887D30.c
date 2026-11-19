typedef struct Channel_82887D30 {
    char reserved00[0x10];
    unsigned int sequence; /* 0x10 */
} Channel_82887D30;

extern void *fn_82887BE8(void);
extern char *fn_82887B28(void *enabled, int *key);
extern unsigned int *lbl_83212A1C;

unsigned char fn_82887D30(Channel_82887D30 **channels, int index, unsigned int phase)
{
    if (*fn_82887B28(fn_82887BE8(), &index) == 0) {
        return 1;
    }
    return phase == (channels[index]->sequence + 1) % (1 << lbl_83212A1C[index]);
}
