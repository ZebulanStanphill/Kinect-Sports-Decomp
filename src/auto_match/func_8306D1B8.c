extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int fStack_5c;
extern unsigned int fStack_6c;
extern int fn_8306D698();
extern int fn_8306D7E0();
extern int fn_8306EEF8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82005344;
extern unsigned int lbl_820162A0;
extern unsigned int lbl_8217EB78;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;


void fn_8306D1B8(int param_1,int param_2,char param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int in_r0;
  char cVar4;
  int iVar3;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  double dVar7;
  unsigned char in_vs32 [16];
  unsigned char in_vs43 [16];
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char auStack_70 [4];
  float fStack_6c;
  unsigned char auStack_60 [4];
  float fStack_5c;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [64];
  
  puVar6 = (unsigned int *)(param_1 + 0xdc10);
  cVar4 = fn_8306D7E0(*puVar6);
  if (cVar4 == '\0') {
    if (param_3 == '\0') {
      fn_8306D698(auStack_40,*puVar6,9);
      uVar1 = *puVar6;
      altv207_13(in_vs32,in_vs43);
      puVar2 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
      *puVar2 = in_register_000103f0;
      puVar2[1] = in_register_000103f4;
      puVar2[2] = in_register_000103f8;
      puVar2[3] = in_vr63;
      iVar3 = fn_8306D698(auStack_50,uVar1,0xb);
      uVar5 = 7;
    }
    else {
      fn_8306D698(auStack_60,*puVar6,5);
      uVar1 = *puVar6;
      altv207_13(in_vs32,in_vs43);
      puVar2 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
      *puVar2 = in_register_000103f0;
      puVar2[1] = in_register_000103f4;
      puVar2[2] = in_register_000103f8;
      puVar2[3] = in_vr63;
      iVar3 = fn_8306D698(auStack_50,uVar1,7);
      uVar5 = 0xb;
    }
    puVar2 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    uVar1 = *puVar6;
    puVar6 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar6 = *puVar2;
    puVar6[1] = uVar8;
    puVar6[2] = uVar9;
    puVar6[3] = uVar10;
    fn_8306D698(auStack_40,uVar1,uVar5);
    dVar7 = (double)fn_8306EEF8();
    uVar1 = lbl_82005344;
    iVar3 = *(int *)(param_2 + 0xd80);
    if ((double)lbl_82002C28 <= dVar7) {
      if (iVar3 == 0) {
        if (fStack_5c - fStack_6c <= lbl_82186E6C) {
          return;
        }
        *(unsigned int *)(param_2 + 0xd80) = 1;
        *(unsigned int *)(param_2 + 0xd84) = uVar1;
        uVar8 = lbl_821AAD20;
        *(unsigned int *)(param_2 + 0xd88) = lbl_821AAD20;
        *(unsigned int *)(param_2 + 0xd94) = 1;
        uVar1 = lbl_82002AE0;
        *(unsigned int *)(param_2 + 0xd98) = 0;
        *(unsigned int *)(param_2 + 0xd8c) = uVar8;
        *(unsigned int *)(param_2 + 0xd9c) = 0;
        *(unsigned int *)(param_2 + 0xd90) = uVar1;
        *(unsigned int *)(param_2 + 0xda4) = 0;
        *(unsigned int *)(param_2 + 0xda0) = uVar8;
        *(unsigned int *)(param_2 + 0xda8) = uVar8;
        return;
      }
      if (iVar3 != 1) {
        return;
      }
      if (lbl_8217EB78 <= fStack_5c - fStack_6c) {
        return;
      }
      goto LAB_8306d344;
    }
  }
  else {
    iVar3 = *(int *)(param_2 + 0xd80);
  }
  uVar1 = lbl_820162A0;
  if (iVar3 == 0) {
    return;
  }
LAB_8306d344:
  *(unsigned int *)(param_2 + 0xd84) = uVar1;
  *(unsigned int *)(param_2 + 0xd80) = 0;
  uVar1 = lbl_821AAD20;
  *(unsigned int *)(param_2 + 0xd88) = lbl_821AAD20;
  *(unsigned int *)(param_2 + 0xda8) = uVar1;
  *(unsigned int *)(param_2 + 0xda0) = uVar1;
  *(unsigned int *)(param_2 + 0xda4) = 0;
  *(unsigned int *)(param_2 + 0xd90) = lbl_82002AE0;
  *(unsigned int *)(param_2 + 0xd9c) = 0;
  *(unsigned int *)(param_2 + 0xd8c) = uVar1;
  *(unsigned int *)(param_2 + 0xd98) = 0;
  *(unsigned int *)(param_2 + 0xd94) = 1;
  return;
}

