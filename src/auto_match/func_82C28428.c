typedef struct Stream_82C28428 {
    int (*Seek)(struct Stream_82C28428 *self, __int64 position);
} Stream_82C28428;

typedef struct State_82C28428 {
    char pad0[0xc];
    unsigned int fc;
    char pad10[8];
    unsigned int f18;
    char pad1c[4];
    __int64 f20;
    __int64 f28;
    char pad30[0x10];
    __int64 f40;
    char pad48[4];
    Stream_82C28428 *stream;
    __int64 pendingPosition;
    unsigned int pending;
    unsigned int busy;
    __int64 f60;
} State_82C28428;

typedef struct Owner_82C28428 {
    char pad0[0x2c];
    State_82C28428 *state;
} Owner_82C28428;

extern void fn_82C27E48(Owner_82C28428 *self);

int fn_82C28428(Owner_82C28428 *self, __int64 position)
{
    State_82C28428 *s = self->state;
    int hr = 0;
    if (s->busy > 0) {
        s->pendingPosition = position;
        s->pending = 1;
    } else {
        hr = s->stream->Seek(s->stream, position);
        if (hr >= 0) {
            s->f20 = position;
            s->f40 = position;
            s->pendingPosition = 0;
            s->pending = 0;
            s->f28 = position;
            s->busy = 0;
            s->f60 = 0;
            if (s->fc == 0 && s->f18 > 0)
                fn_82C27E48(self);
        }
    }
    return hr;
}
