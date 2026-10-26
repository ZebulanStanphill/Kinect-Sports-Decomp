typedef struct { int v[4]; } Q;
typedef struct { char pad[0x178]; Q q; } S;
void fn_826779B8(S *s, Q *out, unsigned char clear)
{
if (out) { Q *q = &s->q; *out = *q; } if (clear) { s->q.v[0] = 0; s->q.v[1] = 0; s->q.v[2] = 0; s->q.v[3] = 0; }
}
