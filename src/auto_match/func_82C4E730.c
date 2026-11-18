typedef struct Output_82C4E730 {
    char pad00[0x24];
    unsigned short *text; /* 0x24 */
} Output_82C4E730;

extern unsigned short *fn_82C562F0(void *heap, unsigned int size, char *tag);
extern char lbl_82196582[];

int fn_82C4E730(void *heap, const unsigned char *low, const char *high, int count, Output_82C4E730 *out)
{
    int length = count + 1;
    unsigned short *text;
    int i;

    out->text = fn_82C562F0(heap, length * 2, lbl_82196582);
    text = out->text;
    if (text == 0)
        return -9;
    for (i = 0; i < length - 1; i++)
        *text++ = (*high++ << 8) | *low++;
    *text = 0;
    return 0;
}
