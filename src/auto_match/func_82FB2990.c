typedef struct { void *f0; void (*f4)(void *); } VT;
typedef struct { VT *vt; } Obj;
typedef struct { int a; int b; int c; } Trip;
extern Obj *fn_82FB2828();
extern int fn_82FA8948();

int fn_82FB2990(void *param_1, int param_2)
{
  Obj *piVar2;
  int aiStack_30;
  Trip t;
  int uVar1;

  piVar2 = fn_82FB2828(param_1, 0, *(int *)(param_2 + 8), param_2 + 0x10, &aiStack_30);
  if (piVar2 != 0) {
    piVar2->vt->f4(piVar2);
    t.a = **(int **)(param_2 + 0xc);
    t.b = (*(int **)(param_2 + 0xc))[1];
    t.c = *(int *)(*(int *)(aiStack_30 + 0x40) + 0x68);
    uVar1 = fn_82FA8948(piVar2, &t, 0);
  } else {
    uVar1 = 2;
  }
  return uVar1;
}
