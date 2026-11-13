extern int fn_82FA5358();
extern int fn_830514A8();
extern int fn_83055E98();


void fn_83051D60(int *param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  
  (**(int (***)())(*param_1 + 0x30))(param_1,0);
  uVar3 = (unsigned int)*(unsigned char *)(param_1 + 0x2a);
  if (uVar3 < (unsigned int)param_1[0x29]) {
    iVar6 = param_1[0x27];
    uVar4 = 0;
    iVar5 = 0;
    if (uVar3 != 0) {
      do {
        iVar5 = iVar6;
        uVar4 = uVar4 + 1;
        iVar6 = *(int *)(iVar5 + 0x10);
      } while (uVar4 < uVar3);
    }
    uVar3 = param_1[0x18];
    RtlEnterCriticalSection((unsigned __int64)uVar3 + 0x10);
    while (iVar6 != 0) {
      param_1[0x26] = param_1[0x26] - *(int *)(iVar6 + 0xc);
      iVar1 = *(int *)(iVar6 + 0x10);
      if (iVar6 == param_1[0x27]) {
        param_1[0x27] = iVar1;
      }
      else {
        *(int *)(iVar5 + 0x10) = iVar1;
      }
      if (iVar6 == param_1[0x28]) {
        param_1[0x28] = iVar5;
      }
      param_1[0x29] = param_1[0x29] + -1;
      fn_82FA5358(*(unsigned int *)(param_1[0x18] + 0x8c),*(unsigned int *)(iVar6 + 8));
      iVar2 = param_1[0x18];
      if (*(int *)(iVar2 + 0x78) == 0) {
        *(int *)(iVar2 + 0x78) = iVar6;
        *(int *)(iVar6 + 0x10) = 0;
        iVar6 = iVar1;
      }
      else {
        *(int *)(iVar6 + 0x10) = *(int *)(iVar2 + 0x78);
        *(int *)(iVar2 + 0x78) = iVar6;
        iVar6 = iVar1;
      }
    }
    fn_83055E98(param_1[0x18]);
    RtlLeaveCriticalSection((unsigned __int64)uVar3 + 0x10);
  }
  fn_830514A8(param_1);
  return;
}

