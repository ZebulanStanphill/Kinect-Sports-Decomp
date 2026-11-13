extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82932B38();
extern int fn_82933088();
extern int fn_82980C18();
extern int fn_829891B8();


unsigned __int64 fn_82989A78(int param_1,unsigned __int64 param_2)

{
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar1;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
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
  *(unsigned int *)(iVar2 + 0x10) = 1;
  *(unsigned int *)(iVar2 + 0x30) = *(unsigned int *)(param_1 + 0x70);
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  iVar4 = *(int *)(param_1 + 0x20);
  if ((param_2 & 0xffffffff) == 0) {
    if (*(int *)(iVar4 + 0x28) == 0) goto LAB_82989b54;
    uVar5 = 0xc08;
    uVar6 = 0xffffffff8202dfcc;
  }
  else {
    if (*(int *)(iVar4 + 0x28) != 0) {
      uVar3 = fn_829891B8(param_1,0x1b,*(unsigned int *)(iVar4 + 0x34),param_2,1,0);
      *(unsigned int *)(iVar2 + 0x14) = uVar3;
      goto LAB_82989b54;
    }
    uVar5 = 0xc07;
    uVar6 = 0xffffffff8204e9e0;
  }
  fn_82980C18(param_1,param_1 + 0x28,uVar5,uVar6,*(unsigned int *)(*(int *)(param_1 + 0x14) + 0x14))
  ;
LAB_82989b54:
  uVar1 = fn_82930318(0x50);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_82933088(uVar1,0,0,0,0,1,param_1 + 0x28);
  }
  if (iVar4 != 0) {
    *(int *)(iVar2 + 0x18) = iVar4;
    uVar1 = fn_82930318(0x14);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_829304E0(uVar1,iVar2,0,0xffffffff8202df2c);
    }
    if ((uVar1 & 0xffffffff) != 0) {
      return uVar1;
    }
  }
  return 0;
}

