extern unsigned short lbl_820E975C;
extern void *lbl_832765BC;
extern void *memset(void *, int, unsigned int);
extern void fn_8235A590(unsigned int, unsigned short *, int, int *);
extern void fn_82F64988(unsigned short *, int, const unsigned short *);

void fn_82356BF0(char ***self, unsigned int player, unsigned int index, char *out)
{
    unsigned short text[32];
    int state;
    text[0] = lbl_820E975C;
    memset(text + 1, 0, 0x3e);
    if (lbl_832765BC && player < 2) {
        fn_8235A590(player, text, 32, &state);
        if (state == 1 || state == 2)
            *(int *)(out + 0x50) = state;
        fn_82F64988((unsigned short *)(out + 0x10), 32, (unsigned short *)((*self)[index] + 0xa8));
    }
}
