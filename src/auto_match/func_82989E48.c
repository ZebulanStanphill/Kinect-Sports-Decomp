extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82931D88();
extern int fn_82932B38();
extern int fn_82980C18();
extern int fn_82981668();
extern int fn_829846B0();
extern int fn_829885C0();
extern unsigned int uStack_40;


unsigned __int64 fn_82989E48(int param_1,int *param_2,int param_3,int *param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  int iVar3;
  unsigned int uStack_40;
  
  *(unsigned int *)(*(int *)(param_1 + 0x78) + 0x1c) = 1;
  if (param_3 == 0) {
    uVar1 = (unsigned __int64)uStack_40;
  }
  else {
    if ((*(int *)(param_3 + 0x18) * *(int *)(param_3 + 0x14) != 1) ||
       (iVar2 = fn_82981668(param_1,*(unsigned int *)(param_3 + 0x10)), iVar2 == 0)) {
      fn_82980C18(param_1,param_3 + 0x30,0xbcb,0xffffffff8204ea70);
      return 0;
    }
    uVar1 = fn_82930318(0x28);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_82931D88(uVar1,2,9,0,1,1,0x200);
    }
    if ((uVar1 & 0xffffffff) == 0) {
      return 0;
    }
    iVar2 = fn_829846B0(param_1,uVar1,*(unsigned int *)(param_3 + 0x10),0);
    if (iVar2 == 0) {
      fn_82980C18(param_1,param_3 + 0x30,0xbcc,0xffffffff8204ea88);
    }
  }
  iVar2 = fn_82930318(0x34);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82932B38();
  }
  if (iVar2 == 0) {
    return 0;
  }
  *(unsigned int *)(iVar2 + 0x10) = 0xc;
  *(unsigned int *)(iVar2 + 0x30) = *(unsigned int *)(param_1 + 0x70);
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  if (param_3 != 0) {
    if ((uVar1 & 0xffffffff) == 0) {
      return 0;
    }
    iVar3 = fn_829885C0(param_1,uVar1,param_3,0,0);
    *(int *)(iVar2 + 0x18) = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  if (param_2 != (int *)0x0) {
    iVar3 = (**(int (***)())(*param_2 + 4))(param_2);
    *(int *)(iVar2 + 0x2c) = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  if (param_4 != (int *)0x0) {
    iVar3 = (**(int (***)())(*param_4 + 4))(param_4);
    *(int *)(iVar2 + 0x1c) = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  uVar1 = fn_82930318(0x14);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_829304E0(uVar1,iVar2,0,0xffffffff8202df2c);
  }
  if ((uVar1 & 0xffffffff) == 0) {
    return 0;
  }
  return uVar1;
}

