typedef struct { unsigned char type; int value; } Msg;
extern void fn_82D88AE0(void *p, int v);
extern void fn_82DA6530(void *q, Msg *m);

typedef struct { char pad[0x88]; void *q; char pad2[8]; int active; } S;

void fn_82D891F0(S *s, int v)
{
  Msg m;
  if (s->active != 0) {
    m.type = 0xb;
    m.value = v;
    fn_82DA6530(s->q, &m);
    return;
  }
  fn_82D88AE0(s, v);
}
