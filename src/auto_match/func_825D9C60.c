extern unsigned int *auStack_40;
extern int fn_8255DEA0();
extern int fn_8255E320();
extern int fn_82592430();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_825D9C60(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  int iVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned char auStack_40 [64];
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xb80)) {
    puVar5 = (unsigned int *)(param_1 + 0xb58);
    do {
      iVar1 = *(int *)(param_1 + 0x4c);
      fn_8255DEA0(param_1,puVar5[3],auStack_40);
      fn_8255E320(param_1,puVar5[3],&uStack_50);
      puVar5 = puVar5 + 2;
      puVar2 = (unsigned int *)((unsigned int)(auStack_40 + (int)in_r0) & 0xfffffff0);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      iVar4 = iVar4 + 1;
      iVar1 = *(int *)(*(int *)(*(int *)((((int)*puVar5 >> 8 & 0xffU) + 0x1ff) * 4 + iVar1) + 4) +
                      (*puVar5 & 0xff) * 4);
      puVar3 = (unsigned int *)(iVar1 + 0x30U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      *(unsigned int *)(iVar1 + 0x94) = uStack_50;
      *(unsigned int *)(iVar1 + 0x98) = uStack_4c;
      *(unsigned int *)(iVar1 + 0x9c) = uStack_48;
    } while (iVar4 < *(int *)(param_1 + 0xb80));
  }
  fn_82592430(param_1,param_2);
  return;
}

