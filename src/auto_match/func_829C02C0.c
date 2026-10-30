struct Obj_829C02C0;
typedef struct VT_829C02C0 { int f0, f4, f8; void (*fc)(struct Obj_829C02C0 *, int, int, int); } VT_829C02C0;
typedef struct Obj_829C02C0 { char pad[0x1c8]; VT_829C02C0 *f1c8; } Obj_829C02C0;

void fn_829C02C0(Obj_829C02C0 *o, int a, int *pi, int unused, char *base, unsigned *pu)
{
  o->f1c8->fc(o, a, *pi, (int)(base + *pu * 4));
  *pu = *pu + 1;
  *pi = *pi + 1;
}
