typedef struct { unsigned short a0; unsigned short w; unsigned int x; unsigned int pad8; unsigned short padc; unsigned short bits; unsigned int y; } In;
typedef struct { unsigned int a, b, c, d, e, f; } Out;

void fn_82A59558(In *in, Out *o)
{
  o->a = in->x;
  o->b = in->w;
  o->c = in->y;
  o->d = in->bits;
  o->e = (in->bits + 7) / 8;
  o->f = 0;
}
