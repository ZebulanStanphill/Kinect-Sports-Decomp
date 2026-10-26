typedef struct U U;
typedef struct { void *qi; unsigned long (*AddRef)(U *); } Vt;
struct U { Vt *vt; };
typedef struct { char pad[0x2c]; U *u; } S;
int fn_82C0D168(S *s, U **out)
{
  if (s->u) s->u->vt->AddRef(s->u);
  *out = s->u;
  return 0;
}
