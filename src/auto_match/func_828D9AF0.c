typedef struct Result_828D9AF0 { unsigned value; unsigned char enabled; unsigned count; } Result_828D9AF0;
extern int fn_828E9DA8(void *);
extern int fn_828E9D90(void *);
extern unsigned fn_828E9FF8(void *,unsigned);
static __forceinline unsigned read_828D9AF0(void *stream,int bits) {
    int end=fn_828E9DA8(stream);
    int current=fn_828E9D90(stream);
    if (end-current>=bits) return fn_828E9FF8(stream,bits);
    return 0;
}
Result_828D9AF0 *fn_828D9AF0(Result_828D9AF0 *self,void *stream) {
    self->value=read_828D9AF0(stream,0x10);
    self->enabled=read_828D9AF0(stream,1)!=0;
    if (self->enabled) self->count=read_828D9AF0(stream,4);
    else self->count=0;
    return self;
}
