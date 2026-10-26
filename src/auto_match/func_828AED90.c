typedef struct { char pad[0x1f4]; int count; } Owner;
typedef struct { char pad[0x50]; Owner *owner; } Self;
extern void fn_828A0800(Self *s);
void fn_828AED90(Self *p)
{
  Owner *o = p->owner;
  o->count--;
  fn_828A0800(p);
}
