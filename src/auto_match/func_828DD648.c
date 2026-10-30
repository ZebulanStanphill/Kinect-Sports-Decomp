struct O_828DD648; typedef struct O_828DD648 { struct Vt_828DD648 *vt; } O_828DD648;
struct Vt_828DD648 { void *s[21]; void (*f54)(O_828DD648 *, int); };
extern int fn_828867D8(int);
extern void fn_828B57E8(int, int, int);
extern int fn_828BE968(int);
extern int fn_828E9D90(int);
extern int fn_828E9DA8(int);
extern int fn_828E9FF8(int, int);
void fn_828DD648(int param_1, int param_2)
{
  int uVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  O_828DD648 *piVar5;

  uVar1 = fn_828BE968(param_2);
  fn_828B57E8(param_1 + 0x80, *(int *)(param_1 + 0x6c), param_2);
  iVar2 = fn_828E9DA8(param_2);
  iVar3 = fn_828E9D90(param_2);
  if (iVar2 - iVar3 >= 0x10) uVar4 = fn_828E9FF8(param_2, 0x10); else uVar4 = 0;
  *(int *)(param_1 + 0x8c) = uVar4;
  piVar5 = (O_828DD648 *)fn_828867D8(uVar1);
  *(O_828DD648 **)(param_1 + 0x88) = piVar5;
  piVar5->vt->f54(piVar5, param_2);
}
