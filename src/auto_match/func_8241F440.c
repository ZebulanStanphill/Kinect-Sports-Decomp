extern void fn_82536070(void *, void *);

typedef struct { char pad[0x14]; unsigned m14; unsigned m18; } Arg_8241F440;
typedef struct {
  char pad[0xc40]; int mc40;
  char pad2[0x12fc - 0xc44]; char m12fc[1];
  char pad3[0x2b20 - 0x12fd]; void *m2b20;
  char pad4[0x2b98 - 0x2b24]; int m2b98;
} Obj_8241F440;

void fn_8241F440(Obj_8241F440 **param_1, Arg_8241F440 *param_2)
{
  Obj_8241F440 *o;
  int v;

  o = *param_1;
  if (o->mc40 == 0) {
    return;
  }
  switch (param_2->m14) {
  case 2:
    if (param_1 != (Obj_8241F440 **)o->m2b20) return;
    if (o->m2b98 == 2) return;
    fn_82536070(o->m12fc, (char *)o + 0x13bc);
    v = 2;
    break;
  case 3:
    if (param_1 != (Obj_8241F440 **)o->m2b20) return;
    if (o->m2b98 == 2) return;
    fn_82536070(o->m12fc, (char *)o + 0x13bc);
    v = 2;
    break;
  case 0xc:
    if (param_1 != (Obj_8241F440 **)o->m2b20) return;
    if (o->m2b98 == 2) return;
    fn_82536070(o->m12fc, (char *)o + 0x13bc);
    v = 2;
    break;
  default:
    if (param_1 != (Obj_8241F440 **)o->m2b20) return;
    if (o->m2b98 == 2) return;
    fn_82536070(o->m12fc, (char *)o + 0x13bc);
    v = 2;
    break;
  case 1:
    if (param_1 != (Obj_8241F440 **)o->m2b20) return;
    if (o->m2b98 == 1) return;
    fn_82536070(o->m12fc, (char *)o + 0x137c);
    v = 1;
    break;
  case 0:
    switch (param_2->m18) {
    case 0:
      if (param_1 != (Obj_8241F440 **)o->m2b20) return;
      if (o->m2b98 == 0) return;
      fn_82536070(o->m12fc, (char *)o + 0x133c);
      v = 0;
      break;
    case 1:
      if (param_1 != (Obj_8241F440 **)o->m2b20) return;
      if (o->m2b98 == 3) return;
      fn_82536070(o->m12fc, (char *)o + 0x13fc);
      v = 3;
      break;
    default:
      if (param_1 != (Obj_8241F440 **)o->m2b20) return;
      if (o->m2b98 == 4) return;
      fn_82536070(o->m12fc, (char *)o + 0x143c);
      v = 4;
      break;
    }
    break;
  }
  o->m2b98 = v;
}
