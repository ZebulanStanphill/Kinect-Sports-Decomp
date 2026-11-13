extern unsigned int *auStack_30;
extern int fn_82F728D0();
extern int fn_82F72A98();
extern int fn_82F73228();
extern int fn_82F73680();
extern int fn_82F75708();
extern int fn_82F76E68();
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


int * fn_82F75998(int *param_1)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned __int64 *puVar3;
  unsigned __int64 uStack_40;
  unsigned __int64 uStack_38;
  unsigned char auStack_30 [48];
  
  *param_1 = 0;
  *(unsigned char *)(param_1 + 1) = 0;
  *(unsigned char *)((int)param_1 + 5) = 0;
  piVar2 = (int *)fn_82F75708(&uStack_38,1,0);
  *param_1 = *piVar2;
  uVar1 = piVar2[1];
  param_1[1] = uVar1;
  if ((uVar1 & 0xff000000) == 0) {
    if ((*lbl_832635C0 != '\0') && (*lbl_832635C0 != '@')) {
      puVar3 = (unsigned __int64 *)fn_82F76E68(auStack_30);
      uStack_40 = *puVar3;
      fn_82F73680(&uStack_40,0xffffffff8214b5d8);
      uStack_38 = uStack_40;
      fn_82F73228(&uStack_38,param_1);
      *(unsigned __int64 *)param_1 = uStack_38;
    }
  }
  if (*lbl_832635C0 == '@') {
    lbl_832635C0 = lbl_832635C0 + 1;
  }
  else if (*lbl_832635C0 == '\0') {
    if (*param_1 == 0) {
      fn_82F72A98(param_1);
    }
    else {
      puVar3 = (unsigned __int64 *)fn_82F728D0(auStack_30,1);
      uStack_38 = *puVar3;
      fn_82F73680(&uStack_38,0xffffffff8214b5d8);
      uStack_40 = uStack_38;
      fn_82F73228(&uStack_40,param_1);
      *(unsigned __int64 *)param_1 = uStack_40;
    }
  }
  else {
    *(unsigned char *)((int)param_1 + 5) = 0;
    *param_1 = 0;
    *(unsigned char *)(param_1 + 1) = 2;
  }
  return param_1;
}

