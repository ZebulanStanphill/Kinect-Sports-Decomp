typedef struct VT_827CB1A0 { void *s[3]; void (*f0c)(void *, int, int, void *); } VT_827CB1A0;
typedef struct Obj_827CB1A0 { char pad[0x1a0]; VT_827CB1A0 *f1a0; } Obj_827CB1A0;

void fn_827CB1A0(Obj_827CB1A0 *o, int a, int *pi, int unused, int *base, int *pj)
{
  o->f1a0->f0c(o, a, *pi, base + *pj);
  *pj = *pj + 1;
  *pi = *pi + 1;
}
