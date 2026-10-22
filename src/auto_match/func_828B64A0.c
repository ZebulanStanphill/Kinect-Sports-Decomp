typedef struct Clock Clock;
typedef struct ClockVtbl {
    void *f0;
    void *f4;
    void *f8;
    unsigned __int64 (*getTime)(Clock *);
} ClockVtbl;
struct Clock {
    ClockVtbl *vt;
};
typedef struct Self {
    char pad[0x40];
    unsigned __int64 t40;
} Self;
extern Clock *fn_825089A0(void);

unsigned char fn_828B64A0(Self *self)
{
    Clock *c;
    if (self->t40 == 0) {
        return 0;
    }
    c = fn_825089A0();
    return c->vt->getTime(c) - self->t40 > 400;
}
