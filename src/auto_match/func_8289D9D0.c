typedef struct { char pad[0x1f0]; int count; } Owner;
typedef struct { char pad[0x50]; Owner *owner; } Self;
extern void fn_828A0800(Self *s);
void fn_8289D9D0(Self *p)
{
  Owner *o = p->owner;
  o->count--;
  fn_828A0800(p);
}
