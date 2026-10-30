extern int fn_8265CA20();
extern int fn_8289F270();

typedef struct { char pad[0x50]; unsigned n; void *data; void *f58; } Sub_828A44B8;
typedef struct { char flag; char pad[3]; Sub_828A44B8 s; } Obj_828A44B8;

void fn_828A44B8(Obj_828A44B8 *o)
{
  char buf[8];
  Sub_828A44B8 *s = &o->s;
  if (o->s.data != 0) {
    if (s->f58 != 0) {
      fn_8289F270(s, s->f58, buf);
    }
    if (s->n > 10) {
      fn_8265CA20(s->data);
    }
  }
  if (o->flag != 0) {
    o->flag = 0;
  }
}
