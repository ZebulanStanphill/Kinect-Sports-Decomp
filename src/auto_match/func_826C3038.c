extern int fn_8267C498();
extern void *fn_8269A678(int, void *);

typedef struct Vt_826C3038 { char pad[0x5c]; unsigned int (*f5c)(void *); } Vt_826C3038;
typedef struct Rc_826C3038 { Vt_826C3038 *vt; int rc; } Rc_826C3038;
typedef struct A_826C3038 { char pad[0x30]; void *f30; int f34; } A_826C3038;
typedef struct B_826C3038 { char pad[0x18]; unsigned int f18; } B_826C3038;

unsigned int fn_826C3038(A_826C3038 *param_1, B_826C3038 *param_2, Rc_826C3038 **param_3)
{
  Rc_826C3038 *piVar1;
  unsigned int uVar2;

  if (param_1->f30 == 0) {
    piVar1 = 0;
  }
  else {
    piVar1 = (Rc_826C3038 *)fn_8269A678(param_1->f34, param_1->f30);
    if (piVar1 != 0) {
      piVar1->rc = piVar1->rc + 1;
    }
  }
  uVar2 = 0;
  if (piVar1 != 0) {
    uVar2 = piVar1->vt->f5c(piVar1);
  }
  if (param_3 != 0) {
    if (piVar1 != 0) {
      piVar1->rc = piVar1->rc + 1;
    }
    if (*param_3 != 0) {
      fn_8267C498(*param_3);
    }
    *param_3 = piVar1;
  }
  if (uVar2 == 0) {
    uVar2 = param_2->f18;
  }
  if (piVar1 != 0) {
    fn_8267C498(piVar1);
  }
  return uVar2;
}
