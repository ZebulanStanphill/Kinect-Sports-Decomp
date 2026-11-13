extern unsigned int fStack_98;
extern int fn_8277E680();
extern int fn_8277E700();
extern unsigned int iStack_80;
extern unsigned int iStack_90;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_94;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_8277EA70(int param_1,unsigned int param_2,unsigned int param_3,int param_4,unsigned int param_5,
                  unsigned int param_6)

{
  unsigned int uVar1;
  int iVar2;
  float *pfVar3;
  unsigned int uVar4;
  float *pfVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  float fStack_98;
  unsigned int uStack_94;
  struct { int first; unsigned int second; } stack_pair_90;

  unsigned int uStack_88;
  unsigned int uStack_84;
  int iStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  
  uVar1 = *(unsigned int *)(param_1 + 0x50);
  uVar7 = 0;
  if (param_3 != 0) {
    uStack_94 = 0;
    do {
      uVar8 = param_2 + param_4;
      pfVar3 = (float *)(*(int *)((uVar8 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x3c)) +
                        (uVar8 * 8 & 0x1ff8));
      pfVar5 = (float *)(*(int *)((param_2 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x3c)) +
                        (param_2 & 0x3ff) * 8);
      fStack_98 = (*pfVar3 - *pfVar5) / (pfVar3[1] - pfVar5[1]);
      uStack_a0 = param_2;
      uStack_9c = uVar8;
      fn_8277E680((int *)(param_1 + 0x50),&uStack_a0);
      if (uVar7 != 0) {
        iVar2 = *(int *)(param_1 + 0x50);
        uVar6 = iVar2 - 2;
        uVar4 = iVar2 - 1;
        *(unsigned int *)(*(int *)((uVar6 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x5c)) +
                  (uVar6 * 0x10 & 0x3ff0) + 0xc) =
             *(int *)((uVar4 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x5c)) + (uVar4 * 0x10 & 0x3ff0);
      }
      uVar7 = uVar7 + 1;
      param_2 = uVar8;
    } while (uVar7 < param_3);
  }
  uStack_74 = 0;
  uStack_70 = 0;
  stack_pair_90.first = *(int *)((uVar1 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x5c)) + (uVar1 & 0x3ff) * 0x10;
  stack_pair_90.second = lbl_821AAD20;
  uStack_84 = lbl_821AAD20;
  uStack_6c = 0;
  uStack_88 = lbl_821AAD20;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_5c = 0;
  uStack_60 = 0xffffffff;
  iStack_80 = param_4;
  uStack_7c = param_5;
  uStack_78 = param_6;
  fn_8277E700(param_1 + 0x60,&stack_pair_90.first);
  return;
}

