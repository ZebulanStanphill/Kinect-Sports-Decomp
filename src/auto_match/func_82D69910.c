typedef struct { short a; unsigned short v; int pad; } Ent_82D69910;
typedef struct { short h; unsigned char count; char h2; Ent_82D69910 e[1]; } Sub_82D69910;
typedef struct { char pad[0xc]; Sub_82D69910 s; } Obj_82D69910;

void fn_82D69910(void *unused, Obj_82D69910 *o, unsigned short val)
{
  int i;
  Sub_82D69910 *s = &o->s;
  for (i = 0; i < s->count; i++) {
    if (s->e[i].v == 0xffff) {
      s->e[i].v = val;
      return;
    }
  }
}
