typedef struct { char pad[0xd0]; unsigned v; char p2[7]; unsigned char b; } Inner_8304C908;
typedef struct Sink_8304C908 { struct { void *s[8]; void (*f20)(struct Sink_8304C908 *, unsigned); } *vt; } Sink_8304C908;
typedef struct { int a, b; Inner_8304C908 *inner; int c; Sink_8304C908 *sink; int pad[0xb]; unsigned rate; } Self_8304C908;

void fn_8304C908(Self_8304C908 *self)
{
  Inner_8304C908 *in = self->inner; unsigned __int64 t = (unsigned __int64)self->rate; in->b &= 0x7f; t *= in->v; in->v = 0; self->sink->vt->f20(self->sink, t / 48000);
}
