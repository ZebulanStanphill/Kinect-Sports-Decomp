extern unsigned int *auStack_240;


void fn_82D6F740(int param_1,int param_2,__int64 param_3,int param_4)

{
  unsigned short uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  int iVar4;
  unsigned short *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_240 [576];
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    puVar5 = (unsigned short *)(param_2 + -2);
    do {
      puVar5 = puVar5 + 1;
      uVar1 = *puVar5;
      iVar4 = (**(int (***)())(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x14))
                        (*(int *)(param_1 + 0x20) + 0x10,
                         *(unsigned int *)((uVar1 / 3) * 4 + *(int *)(param_1 + 0x24)),auStack_240);
      param_3 = param_3 + -1;
      puVar2 = (unsigned int *)
               ((int)(((unsigned __int64)uVar1 + ((unsigned __int64)(__int64)(int)(unsigned int)uVar1 / 3) * -3 + 2 &
                      0xffffffff) << 4) + iVar4 & 0xfffffff0);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3 = (unsigned int *)((int)in_r0 + param_4 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      *(unsigned int *)(param_4 + 0xc) = uVar1 | 0x3f000000;
      param_4 = param_4 + 0x10;
    } while (-1 < param_3);
  }
  return;
}

