extern int fn_82240E68();
extern int fn_82240EC0();
extern int fn_8240D928();
extern int fn_82897BA8();
extern int fn_82897F68();
extern int fn_828996C8();
extern int fn_8289AC08();
extern int fn_8289D8D0();
extern int fn_828A1318();
extern int fn_82BA02A8();


void fn_82897FE8(int param_1,int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  char cVar4;
  int iVar3;
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 4))(), iVar2 == 0)) {
    if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
       (iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0xc))(), iVar2 == 0)) {
      if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
         (iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x10))(), iVar2 == 0))
      goto LAB_828981f0;
      if (*(int **)(param_1 + 0x20) == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x10))();
      }
      fn_8289D8D0(*(unsigned int *)(param_1 + 0x28));
      iVar3 = fn_8240D928();
      if (param_2 == *(int **)((iVar3 + 4) * 4 + iVar2)) goto LAB_828981f0;
      fn_8289AC08(param_1,1,0,1,0);
      fn_82BA02A8(param_1);
      fn_82240E68(iVar2 + 8,iVar3,param_2);
    }
    else {
      if (param_2 == *(int **)(param_1 + 0xc)) goto LAB_828981f0;
      fn_8289AC08(param_1,1,0,1,0);
      fn_82BA02A8(param_1);
      fn_82240EC0(param_1 + 4,param_2);
    }
    fn_8289AC08(param_1,1,1,1,0);
    cVar4 = fn_82897BA8(*(unsigned int *)(param_1 + 0x18));
    if (cVar4 != '\0') goto LAB_828981f0;
  }
  else {
    if (param_2 == *(int **)(param_1 + 0xc)) goto LAB_828981f0;
    fn_8289AC08(param_1,1,0,1,0);
    fn_82BA02A8(param_1);
    fn_82897F68(param_1 + 0xc,0);
    fn_82897F68(param_1 + 0xc,param_2);
    fn_8289AC08(param_1,1,1,1,0);
    cVar4 = fn_82897BA8(*(unsigned int *)(param_1 + 0x18));
    if (cVar4 != '\0') {
      fn_828996C8(param_1,0xffffffffffffffff);
      goto LAB_828981f0;
    }
  }
  fn_828A1318(*(unsigned int *)(param_1 + 0x28),param_1);
LAB_828981f0:
  uVar1 = param_2[1];
  param_2[1] = (int)((unsigned __int64)uVar1 - 1);
  if ((unsigned __int64)uVar1 - 1 == 0) {
    (**(int (***)())(*param_2 + 0x14))(param_2,1);
  }
  return;
}

