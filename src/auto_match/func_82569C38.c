extern unsigned int *auStack_38;
extern int fn_82549610();
extern int fn_82569B10();
extern int fn_8256AF38();
extern int fn_8256B080();
extern int fn_8256BD38();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82569C38(unsigned int *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned char auStack_38 [56];
  
  uVar2 = fn_82569B10();
  fn_82549610(&uStack_3c,uVar2);
  if (param_1 != (unsigned int *)0x0) {
    uVar1 = *param_1;
    uStack_40 = uVar1;
    lVar3 = fn_82569B10();
    piVar4 = (int *)fn_8256BD38(auStack_38,lVar3 + 0x10,&uStack_40);
    iVar6 = *piVar4;
    iVar5 = fn_82569B10();
    if (iVar6 == *(int *)(iVar5 + 0x14)) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar6 + 0xc);
    }
    if (iVar6 == 0) {
      fn_8256AF38(uVar1,param_1,param_2);
    }
    else {
      *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
      *(int *)(param_2 + 0x14) = iVar6;
    }
    fn_8256B080(param_1,param_3,*(unsigned int *)(param_2 + 0x14));
  }
  fn_82A1BB18();
  fn_8259C738(uStack_3c);
  return;
}

