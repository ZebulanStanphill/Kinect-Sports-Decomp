extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_8253D448();
extern int fn_82D81CC8();
extern unsigned int iStack_3c;
extern unsigned int iStack_70;
extern unsigned int lbl_821C91AC;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


int fn_825CD180(int param_1,int param_2,int param_3,unsigned int param_4,int param_5,
                 unsigned int *param_6,unsigned __int64 param_7)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [16];
  unsigned char uStack_90;
  unsigned int uStack_8c;
  unsigned char **ppuStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  int iStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [20];
  int iStack_3c;
  
  iVar1 = *(int *)(param_1 + 0x1f8);
  if (iVar1 == 0) {
    iStack_3c = 0;
  }
  else {
    puVar2 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar3 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    uVar7 = *puVar3;
    uVar8 = puVar3[1];
    uVar9 = puVar3[2];
    uVar10 = puVar3[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    puVar2 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
    *puVar2 = uVar7;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    uStack_90 = 0;
    uStack_8c = 0;
    fn_8253D448(param_1 + 0x1f0,param_7);
    uStack_8c = 0xe;
    uStack_90 = 1;
    uStack_68 = 0;
    iStack_3c = 0;
    uStack_7c = lbl_821CA460;
    ppuStack_80 = &lbl_821C91AC;
    puVar2 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    uStack_78 = *param_6;
    uStack_74 = param_6[1];
    puVar2 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar8;
    puVar3[2] = uVar9;
    puVar3[3] = uVar10;
    puVar2 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar2 = uVar4;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    iStack_70 = param_5;
    uStack_6c = param_4;
    fn_82D81CC8(iVar1,auStack_b0,&ppuStack_80);
    if (iStack_3c != 0) {
      puVar2 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar5;
      puVar3[3] = uVar6;
    }
  }
  return iStack_3c;
}

