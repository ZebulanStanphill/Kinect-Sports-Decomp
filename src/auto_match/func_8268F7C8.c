typedef struct Out { int a, b; unsigned int c; int pad[2]; unsigned char d; } Out;
typedef struct Src { int pad[2]; int a; int p2[2]; unsigned int u; } Src;

void fn_8268F7C8(Src *s, Out *o)
{
  unsigned int u;
  o->a = s->a;
  o->b = 0;
  u = s->u;
  o->d = 1;
  o->c = u > 0x1000 ? u : 0;
}
