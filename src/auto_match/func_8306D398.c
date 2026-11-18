typedef struct Block_8306D398 {
    unsigned char bytes[0x30];
} Block_8306D398;

typedef struct Mixer_8306D398 {
    char pad0[0xb330];
    Block_8306D398 first[73];  /* 0xb330 */
    Block_8306D398 second[73]; /* 0xc0e0 */
    Block_8306D398 output[72]; /* 0xce90 */
} Mixer_8306D398;

extern void fn_8306D1B8(Mixer_8306D398 *self, Block_8306D398 *buffer, int enabled);
extern void fn_8306D020(Mixer_8306D398 *self, Block_8306D398 *buffer, float delta);
extern void *memcpy(void *destination, const void *source, unsigned int size);
extern unsigned int lbl_831BCA68[72];

void fn_8306D398(Mixer_8306D398 *self, float delta)
{
    unsigned int i;

    fn_8306D1B8(self, self->first, 1);
    fn_8306D1B8(self, self->second, 0);
    fn_8306D020(self, self->first, delta);
    fn_8306D020(self, self->second, delta);
    for (i = 0; i < 72; i++) {
        switch (lbl_831BCA68[i]) {
        case 0:
            memcpy(&self->output[i], &self->first[i], 0x30);
            break;
        case 1:
            memcpy(&self->output[i], &self->second[i], 0x30);
            break;
        default:
            memcpy(&self->output[i], &self->first[i], 0x30);
            break;
        }
    }
}
