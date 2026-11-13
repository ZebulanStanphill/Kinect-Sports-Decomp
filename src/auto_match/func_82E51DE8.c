extern unsigned int *auStack_40;
extern int fn_82E50330();
extern unsigned int uStack_38;


unsigned __int64 fn_82E51DE8(unsigned __int64 param_1,unsigned int *param_2,int *param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piStack_50;
  int * apiStack_4c;
  unsigned char auStack_40 [8];
  unsigned __int64 uStack_38;
  
  if (((param_2 == (unsigned int *)0x0) || (param_3 == (int *)0x0)) || (param_4 == (unsigned int *)0x0))
  {
    return 0xffffffff80004003;
  }
  *param_3 = 0;
  *param_4 = 0;
  piStack_50 = (int *)0x0;
  uVar2 = 0;
  uStack_38 = 0;
  apiStack_4c = (int *)0x0;
  iVar1 = (**(int (***)())*param_2)(param_2,0xffffffff821531c8,&piStack_50);
  if (iVar1 < 0) {
    iVar1 = (**(int (***)())*param_2)(param_2,0xffffffff821531d8,&apiStack_4c);
    if (iVar1 < 0) goto LAB_82e51ee4;
    iVar1 = (**(int (***)())(*apiStack_4c + 0x98))();
    iVar1 = (int)*(unsigned __int64 *)(iVar1 + 0x88);
  }
  else {
    iVar1 = (**(int (***)())(*piStack_50 + 0x98))();
    if ((*(unsigned int *)(iVar1 + 8) & 0x7fffff00) == 0x7fffff00) {
      uVar2 = 0xffffffffc00d3aa0;
      goto LAB_82e51ee4;
    }
    iVar1 = *(unsigned int *)(iVar1 + 8) << 3;
  }
  *param_3 = iVar1;
LAB_82e51ee4:
  if (piStack_50 != (int *)0x0) {
    (**(int (***)())(*piStack_50 + 8))();
    piStack_50 = (int *)0x0;
  }
  if (apiStack_4c != (int *)0x0) {
    (**(int (***)())(*apiStack_4c + 8))();
    apiStack_4c = (int *)0x0;
  }
  fn_82E50330(auStack_40);
  return uVar2;
}

