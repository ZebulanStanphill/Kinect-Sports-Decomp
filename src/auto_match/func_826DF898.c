typedef struct Ref_826DF898 { int pad; long refs; } Ref_826DF898;
typedef struct Str_826DF898 {
    unsigned int tagged;
} Str_826DF898;

typedef struct Sink_826DF898 Sink_826DF898;
typedef struct {
    void *f0;
    void (*send)(Sink_826DF898 *self, Str_826DF898 *s, int arg);
} SinkVtbl_826DF898;
struct Sink_826DF898 {
    SinkVtbl_826DF898 *vt;
    char pad4[0x18];
    int name;                /* 0x1c */
};

typedef struct Alt_826DF898 Alt_826DF898;
typedef struct {
    void *f0[18];
    void (*send)(Alt_826DF898 *self, Str_826DF898 *s, int arg);
} AltVtbl_826DF898;
struct Alt_826DF898 {
    AltVtbl_826DF898 *vt;
};

typedef struct Info_826DF898 {
    char pad0[0xc];
    int arg;                 /* 0x0c */
} Info_826DF898;

typedef struct S_826DF898 {
    char pad0[0x10];
    Info_826DF898 *info;     /* 0x10 */
    char pad14[0xc];
    Sink_826DF898 *sink;     /* 0x20 */
    char pad24[4];
    char local[0x2c0];       /* 0x28 */
    int mode;                /* 0x2e8 */
    Alt_826DF898 *alt;       /* 0x2ec */
    char pad2f0[0x24];
    void *target;            /* 0x314 */
} S_826DF898;

extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_8268C3A8(Str_826DF898 *s, int name);
extern void fn_826E9530(void *target, Str_826DF898 *s);

void fn_826DF898(S_826DF898 *self)
{
    Str_826DF898 s;
    void *target;
    Ref_826DF898 *r;
    int arg;

    fn_8268C3A8(&s, self->sink->name);
    target = self->target;
    if (target == 0) {
        target = self->local;
    }
    fn_826E9530(target, &s);
    arg = self->info->arg;
    if (self->mode == 1) {
        self->alt->vt->send(self->alt, &s, arg);
    } else {
        self->sink->vt->send(self->sink, &s, arg);
    }
    r = (Ref_826DF898 *)(s.tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
}
