typedef struct El_8256D710 { int f0; void *f4; int f8; } El_8256D710;
typedef struct Vec_8256D710 { int pad; El_8256D710 *end; } Vec_8256D710;
extern void fn_8256D528(El_8256D710 *d, El_8256D710 *s);
extern void fn_822315A0(void *p);

El_8256D710 **fn_8256D710(El_8256D710 **out, Vec_8256D710 *v, El_8256D710 *first)
{
  El_8256D710 *p;
  El_8256D710 *e;
  e = v->end;
  for (p = first + 1; p != e; p++) {
    fn_8256D528(p - 1, p);
    p[-1].f8 = p->f8;
  }
  e = v->end;
  for (p = e - 1; p != e; p++) {
    if (p->f4 != 0) fn_822315A0(p->f4);
  }
  e = v->end;
  *out = first;
  v->end = e - 1;
  return out;
}
