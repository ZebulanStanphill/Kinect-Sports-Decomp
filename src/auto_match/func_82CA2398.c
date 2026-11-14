extern void fn_82C9F2F0(void);
extern void fn_82C9F4B0(void);
extern void fn_82CA0CC8(void);
extern void fn_82CA0E40(void);
extern unsigned int lbl_8329F138;
extern unsigned int lbl_8329F13C;

typedef struct Decoder_82CA2398 {
    char pad0[0x3e2c];
    void (*fnB)(void);
    void (*fnA)(void);
    char pad3e34[0x4fb0 - 0x3e34];
    unsigned int value0;
    unsigned int value1;
} Decoder_82CA2398;

void fn_82CA2398(Decoder_82CA2398 *self, int alt)
{
    self->fnA = fn_82CA0CC8;
    self->fnB = fn_82CA0E40;
    lbl_8329F13C = self->value0;
    lbl_8329F138 = self->value1;
    if (alt != 0) {
        self->fnA = fn_82C9F2F0;
        self->fnB = fn_82C9F4B0;
    }
}
