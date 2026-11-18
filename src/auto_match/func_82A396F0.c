typedef struct Decoder_82A396F0 {
    char pad0000[0x2b04];
    int begin;     /* 0x2b04 */
    int end;       /* 0x2b08 */
    void *address; /* 0x2b0c */
    int total;     /* 0x2b10 */
    char pad2b14[0x2ec4 - 0x2b14];
    int calls; /* 0x2ec4 */
    char pad2ec8[0x2fe4 - 0x2ec8];
    unsigned char writable; /* 0x2fe4 */
} Decoder_82A396F0;

extern unsigned long MmQueryAddressProtect(void *address);
extern void fn_82A3BD78(Decoder_82A396F0 *self);
extern int fn_82A3BAA8(Decoder_82A396F0 *self, int arg);

int fn_82A396F0(Decoder_82A396F0 *self, int arg, int begin, int size, void *address, int unused, int *out)
{
    int count;

    self->address = address;
    self->begin = begin;
    self->end = begin + size + 4;
    self->writable = (MmQueryAddressProtect(address) & 0x600) != 0;
    fn_82A3BD78(self);
    count = fn_82A3BAA8(self, arg);
    self->calls++;
    if (count < 0) {
        *out = 0;
        return 1;
    }
    *out = count;
    self->total += count;
    return 0;
}
