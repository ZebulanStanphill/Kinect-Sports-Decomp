typedef struct Text_82790538 {
    char pad0[0x24];
    unsigned short changes;
} Text_82790538;

extern void fn_82790490(Text_82790538 *self, int pos, const unsigned short *text, int len);

void fn_82790538(Text_82790538 *self, int pos, const unsigned short *text, int len)
{
    int i;
    if (len != -1) {
        for (i = len - 1; i >= 0; i--) {
            if (text[i] == 0) {
                len = i;
                break;
            }
        }
    }
    fn_82790490(self, pos, text, len);
    self->changes++;
}
