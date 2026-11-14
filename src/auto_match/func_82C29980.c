typedef struct Stream_82C29980 {
    int (*Seek)(struct Stream_82C29980 *self, __int64 position);
} Stream_82C29980;

typedef struct State_82C29980 {
    char pad0[0xc];
    unsigned int fc;
    char pad10[8];
    unsigned int f18;
    char pad1c[4];
    __int64 f20;
    __int64 f28;
    char pad30[4];
    Stream_82C29980 *stream;
    __int64 pendingPosition;
    unsigned int pending;
    unsigned int busy;
    __int64 f48;
    char pad50[0x30];
    __int64 f80;
} State_82C29980;

typedef struct Owner_82C29980 {
    char pad0[0x2c];
    State_82C29980 *state;
} Owner_82C29980;

extern void fn_82C294A8(Owner_82C29980 *self);

int fn_82C29980(Owner_82C29980 *self, __int64 position)
{
    State_82C29980 *s = self->state;
    int hr = 0;
    if (s->busy > 0) {
        s->pendingPosition = position;
        s->pending = 1;
    } else {
        hr = s->stream->Seek(s->stream, position);
        if (hr >= 0) {
            s->f20 = position;
            s->f28 = position;
            s->pendingPosition = 0;
            s->pending = 0;
            s->f80 = position;
            s->busy = 0;
            s->f48 = 0;
            if (s->fc == 0 && s->f18 > 0)
                fn_82C294A8(self);
        }
    }
    return hr;
}
