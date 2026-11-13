extern int fn_82F377E8();
extern int fn_82F37AA8();
extern int fn_82F382F0();


__int64 fn_82F387B0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  __int64 lVar3;
  int iVar4;
  int * apiStack_30;
  
  lVar3 = fn_82F382F0();
  piVar2 = apiStack_30;
  if (-1 < lVar3) {
    if (param_4 != (int *)0x0) {
      fn_82F377E8(param_1 + 8,apiStack_30,&apiStack_30);
      piVar1 = (int *)*apiStack_30;
      *param_4 = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(int (***)())(*piVar1 + 4))();
      }
    }
    iVar4 = param_1 + 8;
    fn_82F377E8(iVar4,piVar2,&apiStack_30);
    if (*apiStack_30 != 0) {
      fn_82F377E8(iVar4,piVar2,&apiStack_30);
      (**(int (***)())(*(int *)*apiStack_30 + 8))();
    }
    if (((int)piVar2 + 1U <= *(unsigned int *)(param_1 + 0x70)) &&
       (iVar4 = fn_82F37AA8(iVar4,piVar2), -1 < iVar4)) {
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
    }
  }
  return lVar3;
}

