typedef struct Self_8246F560 {
    char pad0[0x310];
    void *hud;
} Self_8246F560;

extern unsigned short lbl_820E975C;
extern int fn_82528EE0(unsigned short *buf, int size, const unsigned short *format, ...);
extern void fn_82469DA0(void *hud, int index, unsigned short *text);

void fn_8246F560(Self_8246F560 *self, float first, float second)
{
    unsigned short text[0x100] = {lbl_820E975C};

    fn_82528EE0(text, 0x100, L"%.0f", first);
    fn_82469DA0(self->hud, 0, text);
    fn_82528EE0(text, 0x100, L"%.0f", second);
    fn_82469DA0(self->hud, 1, text);
}
