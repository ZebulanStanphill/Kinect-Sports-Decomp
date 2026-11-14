extern void fn_82358FD8(void *profile, unsigned short *out, int maxChars, const char *key);
extern int fn_82528EE0(unsigned short *dst, int maxChars, const unsigned short *fmt, ...);
extern int lbl_83276574;
extern unsigned short lbl_83299238[];

unsigned short *fn_823AB3A0(void *self, void *profile)
{
    unsigned short text[64];
    fn_82358FD8(profile, text, 0x40, "tabletennishighscore");
    fn_82528EE0(lbl_83299238, 0x40, text, lbl_83276574);
    return lbl_83299238;
}
