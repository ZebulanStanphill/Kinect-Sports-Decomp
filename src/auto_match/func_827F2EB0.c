typedef struct Voice_827F2EB0 {
    void *vtbl; /* 0x0 */
    char pad4[0x1c];
    void *player; /* 0x20 */
    char pad24[0xc];
    int position; /* 0x30 */
    char pad34[0xc];
    void *stream; /* 0x40 */
    char pad44[0xc];
    unsigned char playing; /* 0x50 */
    unsigned char flags;   /* 0x51 */
    unsigned char looping; /* 0x52 */
    unsigned char paused;  /* 0x53 */
    unsigned char muted;   /* 0x54 */
    char pad55[3];
    int cue;               /* 0x58 */
    unsigned short handle; /* 0x5c */
    char pad5E[2];
    char params[0x94]; /* 0x60 */
    float volume;      /* 0xf4 */
    float pitch;       /* 0xf8 */
    char padFC[8];
    int pending;   /* 0x104 */
    void *source;  /* 0x108 */
    int callbacks; /* 0x10c */
} Voice_827F2EB0;

extern char lbl_8201DD20[];

extern void fn_827F4248(Voice_827F2EB0 *self, void *params, void *owner, int a, int b);
extern void fn_827F3770(void *params, void *stream);
extern void *fn_827FA468(unsigned int size);
extern void *fn_827FA5E8(void *memory, Voice_827F2EB0 *voice, void *owner);
extern void *fn_827F4010(void *player);

static __forceinline void SetFlags(unsigned char *flags, unsigned char mask)
{
    *flags |= mask;
}

Voice_827F2EB0 *fn_827F2EB0(Voice_827F2EB0 *self, void *stream, void *owner, int cue, unsigned short handle,
                            int callbacks)
{
    void *memory;
    void *player;

    fn_827F4248(self, self->params, owner, 0, 0);
    self->vtbl = lbl_8201DD20;
    {
        unsigned char *flags = &self->flags;
        *flags = 0;
    }
    self->looping = 0;
    self->paused = 0;
    self->muted = 0;
    self->cue = cue;
    self->handle = handle;
    fn_827F3770(self->params, stream);
    self->pending = 0;
    self->callbacks = callbacks;
    self->volume = 0.0f;
    self->pitch = 0.0f;
    memory = fn_827FA468(0xb4);
    if (memory != 0)
        player = fn_827FA5E8(memory, self, owner);
    else
        player = 0;
    self->player = player;
    self->stream = fn_827F4010(player);
    self->position = 0;
    self->playing = 0;
    self->source = player;
    SetFlags(&self->flags, 1);
    return self;
}
