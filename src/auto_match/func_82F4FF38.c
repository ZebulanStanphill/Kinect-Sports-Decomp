extern unsigned int *auStack_140;
extern unsigned int *auStack_180;
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_f0;
extern int fn_82F4EEC0();
extern int fn_82F595A0();
extern int fn_82F59668();
extern int fn_82F59850();
extern int fn_82F68CC0();
extern int fn_8306ED70();
extern unsigned int uStack_100;
extern unsigned int uStack_108;
extern unsigned int uStack_110;
extern unsigned int uStack_118;
extern unsigned int uStack_120;
extern unsigned int uStack_128;
extern unsigned int uStack_130;
extern unsigned int uStack_148;
extern unsigned int uStack_150;
extern unsigned int uStack_158;
extern unsigned int uStack_160;
extern unsigned int uStack_168;
extern unsigned int uStack_170;
extern unsigned int uStack_178;


int fn_82F4FF38(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  unsigned __int64 *puVar4;
  unsigned __int64 *puVar5;
  __int64 lVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char auStack_1c0 [64];
  unsigned char auStack_180 [8];
  unsigned __int64 uStack_178;
  unsigned __int64 uStack_170;
  unsigned __int64 uStack_168;
  unsigned __int64 uStack_160;
  unsigned __int64 uStack_158;
  unsigned __int64 uStack_150;
  unsigned __int64 uStack_148;
  unsigned __int64 auStack_140 [2];
  unsigned __int64 uStack_130;
  unsigned __int64 uStack_128;
  unsigned __int64 uStack_120;
  unsigned __int64 uStack_118;
  unsigned __int64 uStack_110;
  unsigned __int64 uStack_108;
  unsigned __int64 uStack_100;
  unsigned char auStack_f0 [64];
  unsigned char auStack_b0 [64];
  unsigned char auStack_70 [88];
  
  if (param_3 == 2) {
    puVar4 = (unsigned __int64 *)(param_1 + -8);
    puVar5 = (unsigned __int64 *)0x832623f8;
    lVar6 = 8;
    do {
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  else {
    if (param_3 == 1) {
      fn_82F4EEC0(auStack_180,param_2);
    }
    else if (param_3 == 3) {
      fn_82F4EEC0(auStack_180,param_2);
      fn_8306ED70();
    }
    fn_82F595A0(auStack_f0);
    fn_82F595A0(&uStack_130);
    fn_82F59850((double)*(float *)(param_2 + 0xce0),(double)*(float *)(param_2 + 0xce4),
                  (double)*(float *)(param_2 + 0xce8),auStack_b0);
    fn_82F68CC0(auStack_1c0,auStack_b0,0x40);
    fn_82F59668(&uStack_170,uStack_130,uStack_128,uStack_120,uStack_118,uStack_110,uStack_108,
                 uStack_100);
    fn_82F68CC0(auStack_1c0,auStack_f0,0x40);
    iVar3 = fn_82F59668(auStack_70,uStack_170,uStack_168,uStack_160,uStack_158,uStack_150,
                         uStack_148,auStack_140[0]);
    puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (unsigned int *)((int)&uStack_170 + in_r0 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar1 = (unsigned int *)(iVar3 + 0x10U & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (unsigned int *)((int)&uStack_160 + in_r0 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar1 = (unsigned int *)(iVar3 + 0x20U & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar5 = &uStack_178;
    puVar2 = (unsigned int *)((int)&uStack_150 + in_r0 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar4 = (unsigned __int64 *)(param_1 + -8);
    puVar1 = (unsigned int *)(iVar3 + 0x30U & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    lVar6 = 8;
    puVar2 = (unsigned int *)((int)auStack_140 + in_r0 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    do {
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return param_1;
}

