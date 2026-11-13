extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F68CC0();


unsigned __int64 fn_82647020(int param_1)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  __int64 lVar5;
  
  iVar3 = fn_8265C940(0x1000,0xffffffffb5800000);
  *(int *)(param_1 + 0x5e90) = iVar3;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = fn_8265C940(0x200,0x64800000);
    *(int *)(param_1 + 0x5e98) = iVar3;
    if (iVar3 == 0) {
      fn_8265C990(*(unsigned int *)(param_1 + 0x5e90),0xffffffffb1800000);
      uVar2 = 0;
      *(unsigned int *)(param_1 + 0x5e90) = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x5e90);
      *(unsigned int *)(iVar3 + 0x20) = 0xc0003b00;
      *(unsigned int *)(iVar3 + 0x24) = 0x300;
      *(unsigned int *)(iVar3 + 0x28) = 0xc0192b00;
      *(unsigned int *)(iVar3 + 0x2c) = 0;
      *(unsigned int *)(iVar3 + 0x30) = 0x18;
      fn_82F68CC0(iVar3 + 0x34,0xffffffff8218d780,0x60);
      *(unsigned int *)(iVar3 + 0x94) = 0x2205;
      lVar5 = 0xf;
      *(unsigned int *)(iVar3 + 0x98) = *(unsigned int *)(param_1 + 0x2948) & 0xfffff807;
      *(unsigned int *)(iVar3 + 0x9c) = 0x12180;
      *(unsigned int *)(iVar3 + 0xa0) = 1;
      puVar4 = (unsigned int *)(iVar3 + 0xa4);
      *puVar4 = 0;
      uVar1 = *(unsigned int *)(param_1 + 0x5e90);
      do {
        puVar4[1] = 0xc0032201;
        puVar4[2] = 0;
        puVar4[3] = 0x30004;
        puVar4[4] = ((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1fffffff);
        puVar4 = puVar4 + 5;
        *puVar4 = 0x40000003;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      uVar2 = 1;
      *(int *)(param_1 + 0x5e94) = (int)puVar4 + (-0x1c - *(int *)(param_1 + 0x5e90)) >> 2;
    }
  }
  return uVar2;
}

