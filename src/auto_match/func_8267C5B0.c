typedef struct Rc_8267C5B0 { int cnt; struct Obj_8267C5B0 *owner; } Rc_8267C5B0;
typedef struct Obj_8267C5B0 { char pad[8]; Rc_8267C5B0 *rc; } Obj_8267C5B0;
extern Rc_8267C5B0 *fn_8267BED0(Obj_8267C5B0 *, int, int *);

Rc_8267C5B0 *fn_8267C5B0(Obj_8267C5B0 *param_1)
{
  if (param_1->rc == 0) {
    int a = 2;
    Rc_8267C5B0 *t = fn_8267BED0(param_1, 8, &a);
    Rc_8267C5B0 *n;
    if (t != 0) {
      t->owner = param_1;
      t->cnt = 1;
      n = t;
    } else {
      n = 0;
    }
    param_1->rc = n;
    if (n == 0) {
      return 0;
    }
  }
  param_1->rc->cnt++;
  return param_1->rc;
}
