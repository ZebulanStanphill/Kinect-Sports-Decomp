extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_8267C498();
extern int fn_826826A8();
extern int fn_826828D8();
extern int fn_82683270();
extern int fn_82695DA0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_826BF178();
extern int fn_826C0700();
extern unsigned int iStack_60;
extern unsigned int iStack_68;
extern unsigned int iStack_ac;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;


unsigned __int64
fn_826C1398(int *param_1,int param_2,int *param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int *puVar5;
  unsigned __int64 uVar4;
  unsigned char auStack_b0 [4];
  int iStack_ac;
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned char **ppuStack_80;
  unsigned char *puStack_7c;
  int *piStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned char uStack_6c;
  int iStack_68;
  unsigned int uStack_64;
  int iStack_60;
  
  auStack_90[0] = 0;
  (**(int (***)())(param_1[4] + 0x10))(param_1 + 4,param_2,param_3,auStack_90);
  auStack_a0[0] = 0;
  if (*(unsigned char *)(param_2 + 0x7c) < 7) {
    puVar2 = (unsigned int *)fn_826C0700(param_1[10],param_3);
  }
  else {
    iVar1 = fn_826BF178();
    puVar2 = (unsigned int *)(-(unsigned int)(iVar1 != 0) & iVar1 + 8U);
  }
  if ((puVar2 == (unsigned int *)0x0) || (param_1[10] == 0)) {
    uVar4 = 0;
  }
  else {
    puVar5 = (unsigned int *)(param_2 + 8);
    uVar3 = *(int *)(param_2 + 8) + 0x10;
    *(unsigned int *)(param_2 + 8) = uVar3;
    if (*(unsigned int *)(param_2 + 0x10) <= uVar3) {
      fn_826826A8(puVar5);
    }
    if (*puVar5 != 0) {
      fn_82695DA0(*puVar5,puVar2 + 4);
    }
    uVar3 = *puVar5;
    *puVar5 = uVar3 + 0x10;
    if (*(unsigned int *)(param_2 + 0x10) <= uVar3 + 0x10) {
      fn_826826A8(puVar5);
    }
    if (*puVar5 != 0) {
      fn_82695DA0(*puVar5,param_4);
    }
    uVar3 = *puVar5;
    *puVar5 = uVar3 + 0x10;
    if (*(unsigned int *)(param_2 + 0x10) <= uVar3 + 0x10) {
      fn_826826A8(puVar5);
    }
    if (*puVar5 != 0) {
      fn_82695DA0(*puVar5,auStack_90);
    }
    iStack_ac = *param_3;
    auStack_b0[0] = 5;
    *(int *)(iStack_ac + 8) = *(int *)(iStack_ac + 8) + 1;
    uVar3 = *puVar5;
    *puVar5 = uVar3 + 0x10;
    if (*(unsigned int *)(param_2 + 0x10) <= uVar3 + 0x10) {
      fn_826826A8(puVar5);
    }
    if (*puVar5 != 0) {
      fn_82695DA0(*puVar5,auStack_b0);
    }
    fn_82696330(auStack_b0);
    iVar1 = (**(int (***)())(*param_1 + 0x1c))(param_1);
    piStack_78 = param_1 + 4;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      piStack_78 = (int *)(iVar1 + 0x68);
    }
    puStack_7c = auStack_a0;
    ppuStack_80 = &lbl_8200579C;
    uStack_6c = 0;
    uStack_74 = 0;
    iStack_60 = ((int)(*puVar5 - *(int *)(param_2 + 0xc)) >> 4) + *(int *)(param_2 + 0x1c) * 0x20 +
                -0x20;
    uStack_70 = 0;
    uStack_64 = 4;
    iStack_68 = param_2;
    (**(int (***)())(*(int *)*puVar2 + 0x28))((int *)*puVar2,&ppuStack_80,puVar2[1],0);
    fn_826828D8(&ppuStack_80);
    fn_82683270(puVar5,4);
    fn_82695FA0(param_5,auStack_a0);
    if (iVar1 != 0) {
      fn_8267C498(iVar1);
    }
    uVar4 = 1;
  }
  fn_82696330(auStack_a0);
  fn_82696330(auStack_90);
  return uVar4;
}

