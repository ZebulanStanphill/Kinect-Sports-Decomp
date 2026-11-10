typedef struct { __int64 a; __int64 b; __int64 c; int pad2; int active; } Timer;
typedef struct { char pad[0x4fe0]; Timer t; } Self;
extern void fn_82A1E968(__int64 *now);

void fn_82C44BE0(Self *s)
{
  __int64 now[2];

  if (s != 0 && s->t.active != 0) {
    fn_82A1E968(now);
    s->t.b += now[0];
    s->t.a = s->t.a - now[0] + s->t.c;
    s->t.c = 0;
    s->t.active = 0;
  }
}
