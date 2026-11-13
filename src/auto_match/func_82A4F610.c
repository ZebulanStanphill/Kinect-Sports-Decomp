extern int fn_82A3FF60();
extern int fn_82A5ED20();
extern int fn_82A68B48();
extern int fn_82A68BB0();


__int64 fn_82A4F610(int param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4,int *param_5)

{
  unsigned short uVar1;
  unsigned short uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  
  lVar4 = fn_82A5ED20(param_1,1,param_3,1);
  if (-1 < lVar4) {
    iVar6 = *param_3;
    iVar3 = *param_5;
    uVar1 = *(unsigned short *)(iVar6 + 2);
    *(unsigned short *)(param_1 + 0x24) = uVar1;
    uVar2 = *(unsigned short *)(iVar6 + 0xc);
    *(unsigned short *)(param_1 + 0x26) = uVar2;
    *(unsigned short *)(param_1 + 0x28) = *(unsigned short *)(iVar3 + 0xc);
    uVar5 = fn_82A68BB0(uVar2,uVar1);
    iVar6 = (unsigned int)*(unsigned short *)(param_1 + 0x28) * (uVar5 & 0xffff);
    *(int *)(param_1 + 0x30) = iVar6;
    iVar6 = fn_82A3FF60(0xffffffff83219d50,iVar6,0x2097000a,0);
    *(int *)(param_1 + 0x2c) = iVar6;
    if (iVar6 == 0) {
      lVar4 = -0x7ff8fff2;
    }
    else {
      lVar4 = 0;
      uVar7 = fn_82A68B48(*(unsigned short *)(param_1 + 0x24),*(unsigned short *)(iVar3 + 0xe));
      *(unsigned int *)(param_1 + 0x38) = uVar7;
    }
  }
  return lVar4;
}

