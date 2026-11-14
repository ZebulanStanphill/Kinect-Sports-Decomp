typedef struct Voice_83026A78 {
    char pad0[0x10];
    char decoder[0xa0];
    int source;
    int context;
    unsigned char active;
    char padb9;
    unsigned char enabled;
    char padbb[3];
    unsigned short flags;
} Voice_83026A78;

extern int fn_83039CE0(void *decoder, const void *format, unsigned int sampleRate);

int fn_83026A78(Voice_83026A78 *self, int source, const void *format, int context,
                unsigned short flags, unsigned int sampleRate)
{
    self->source = source;
    self->context = context;
    self->active = 0;
    self->enabled = 1;
    self->flags = flags;
    return fn_83039CE0(self->decoder, format, sampleRate);
}
