typedef struct { char pad[0x10]; unsigned int a; int b; } State;
typedef struct { char pad[0x14]; unsigned int f14; char pad2[0x1a0-0x18]; State *state; } Obj;
typedef struct { char pad[0xc]; Obj **o; } P;
extern void fn_8255E3A0(unsigned int, int, int);

int fn_8234ADB8(int r, P *p)
{
  Obj *o = *p->o;
  State *s = o->state;
  if (s->a != 0 && s->b == 0)
    fn_8255E3A0(o->f14, 0xb, r);
  else
    fn_8255E3A0(o->f14, 0xa, r);
  return r;
}
