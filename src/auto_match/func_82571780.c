extern int fn_82571CC8();
extern int fn_825721E0();
extern unsigned int lbl_83296D90;
extern unsigned int lbl_83296D94;


void fn_82571780(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  lbl_83296D90 = 0;
  lbl_83296D94 = 0xffffffff;
  *(unsigned int *)(param_1 + 0x108) = *(unsigned int *)(param_1 + 0x108) & 0xffffffbf;
  if (param_3 == 0) {
    param_3 = *(int *)(param_1 + 0x28);
  }
  if (*(char *)(param_3 + 0xc0) != '\0') {
    fn_82571CC8(param_1,param_1,param_2,param_3 + 0x60,param_4);
  }
  *(unsigned char *)(param_3 + 0xc0) = 0;
  if (*(char *)(param_3 + 0x130) != '\0') {
    fn_82571CC8(param_1,param_1,param_2,param_3 + 0xd0,param_4);
  }
  *(unsigned char *)(param_3 + 0x130) = 0;
  if (*(unsigned short *)(param_1 + 0x10) < 0x20) {
    uVar1 = *(unsigned int *)(param_3 + 8);
    for (uVar5 = (unsigned __int64)*(unsigned int *)(param_3 + 4); (uVar5 & 0xffffffff) < (unsigned __int64)uVar1;
        uVar5 = uVar5 + 0x60) {
      fn_82571CC8(param_1,param_1,param_2,uVar5,param_4);
    }
  }
  if (*(unsigned short *)(param_1 + 0x10) < 0x20) {
    uVar1 = *(unsigned int *)(param_3 + 0x1c);
    for (uVar5 = (unsigned __int64)*(unsigned int *)(param_3 + 0x18); (uVar5 & 0xffffffff) < (unsigned __int64)uVar1;
        uVar5 = uVar5 + 0x60) {
      fn_82571CC8(param_1,param_1,param_2,uVar5,param_4);
    }
  }
  if (*(unsigned short *)(param_1 + 0x10) < 0x20) {
    uVar1 = *(unsigned int *)(param_3 + 0x30);
    for (uVar5 = (unsigned __int64)*(unsigned int *)(param_3 + 0x2c); (uVar5 & 0xffffffff) < (unsigned __int64)uVar1;
        uVar5 = uVar5 + 0x50) {
      fn_825721E0(param_1,param_1,param_2,uVar5,param_4);
    }
  }
  if (*(unsigned short *)(param_1 + 0x10) < 0x20) {
    uVar1 = *(unsigned int *)(param_3 + 0x44);
    for (uVar5 = (unsigned __int64)*(unsigned int *)(param_3 + 0x40); (uVar5 & 0xffffffff) < (unsigned __int64)uVar1;
        uVar5 = uVar5 + 0x50) {
      fn_825721E0(param_1,param_1,param_2,uVar5,param_4);
    }
  }
  *(unsigned short *)(param_3 + 0x14) = 0;
  *(unsigned int *)(param_3 + 8) = *(unsigned int *)(param_3 + 4);
  *(unsigned int *)(param_3 + 0x1c) = *(unsigned int *)(param_3 + 0x18);
  *(unsigned short *)(param_3 + 0x28) = 0;
  *(unsigned int *)(param_3 + 0x30) = *(unsigned int *)(param_3 + 0x2c);
  *(unsigned short *)(param_3 + 0x3c) = 0;
  *(unsigned int *)(param_3 + 0x44) = *(unsigned int *)(param_3 + 0x40);
  *(unsigned short *)(param_3 + 0x50) = 0;
  iVar3 = (int)param_2;
  puVar2 = (unsigned int *)(iVar3 + 0x1c0U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar4 = (unsigned int *)(param_1 + 0xd0U & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  puVar2 = (unsigned int *)(iVar3 + 0x120U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar4 = (unsigned int *)(param_1 + 0xe0U & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  puVar2 = (unsigned int *)(iVar3 + 0x160U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar4 = (unsigned int *)(param_1 + 0xf0U & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  return;
}

