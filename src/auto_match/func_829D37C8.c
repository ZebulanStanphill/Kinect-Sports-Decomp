extern unsigned char *lbl_832179FC;
extern void *fn_82A1DDC0(void *, const void *, unsigned int);

void fn_829D37C8(unsigned int first, unsigned int second, const void *payload)
{
    unsigned char *base = lbl_832179FC;
    int *count = (int *)(base + 0x8f404);
    unsigned char *entry = base + *count * 0x1c + 0x8f408;
    ++*count;
    *(unsigned int *)entry = first;
    *(unsigned int *)(entry + 4) = second;
    fn_82A1DDC0(entry + 8, payload, 20);
}
