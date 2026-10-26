typedef struct Self Self;
typedef struct { void *s[22]; void (*f58)(Self *); } SelfVt;
struct Self { SelfVt *vt; int pad; int state; char pad2[0x435]; unsigned char flag; };

void fn_828ED6A0(Self *s)
{
  if (s->state == 2) {
    s->vt->f58(s);
    s->state = 0;
    s->flag = 0;
  } else if (s->state == 1) {
    s->flag = 1;
  }
}
