typedef struct P { int pad[2]; float x, y; } P;

unsigned char fn_8277BAD0(P *a, P *b)
{
  if (a->x != b->x)
    return a->x < b->x;
  return a->y < b->y;
}
