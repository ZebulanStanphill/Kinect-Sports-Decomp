typedef struct { int v[20]; } Sub;
typedef struct { int a, b, c[3]; Sub s; } Obj;
static void Sub_init(Sub *s) {  s->v[0] = 0; s->v[1] = 0; s->v[2] = 0; s->v[3] = 0; s->v[4] = 0; s->v[5] = 0; s->v[6] = 0; s->v[7] = 0; s->v[8] = 0; s->v[9] = 0; s->v[10] = 0; s->v[11] = 0; s->v[12] = 0; s->v[13] = 0; s->v[14] = 0; s->v[15] = 0; s->v[16] = 0; s->v[17] = 0; s->v[18] = 0; s->v[19] = 0; }
void fn_827B5060(Obj *p)
{
  p->a = 0x400;
  p->b = 0x400;
  Sub_init(&p->s);
}
