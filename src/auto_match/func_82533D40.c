typedef struct U U;
typedef struct { int (*f0)(U *); } Vt;
struct U { Vt *vt; };
typedef struct { int a, b; U *u; } S;
int fn_82533D40(S *s)
{
if (s->u->vt->f0(s->u) < 0) return 0x80004005; return 0;
}
