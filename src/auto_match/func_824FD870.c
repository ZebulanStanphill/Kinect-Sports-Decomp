typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int fStack_40;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_82230040();
extern int fn_8234E6D8();
extern int fn_824A1C90();
extern int fn_8250DA48();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_8265C9E0();
extern int fn_827F04B0();
extern int fn_827F0FB8();
extern int fn_827F1148();
extern int fn_827F2038();
extern int fn_827F2D60();
extern int fn_827F2DD0();
extern int fn_827F3070();
extern int fn_827F46E8();
extern int fn_827F4818();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821C21B4;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_44;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_ac;


void fn_824FD870(int param_1)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned int uVar6;
  unsigned __int64 uVar3;
  unsigned int uVar7;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned char **ppuStack_b0;
  unsigned int uStack_ac;
  struct { unsigned int first; unsigned int second; } stack_pair_a0;

  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned char auStack_90 [16];
  unsigned int *puStack_80;
  unsigned char auStack_70 [16];
  float fStack_60;
  float fStack_5c;
  unsigned int uStack_44;
  float fStack_40;
  
  bVar2 = false;
  ppuStack_b0 = (unsigned char **)0x0;
  if (*(int *)(param_1 + 0xb6c) == 0) {
    if (*(int *)(param_1 + 0x18c) == 0) {
      uVar6 = (**(int (***)())(**(int **)(param_1 + 0x8c0) + 0x4c))();
      *(unsigned int *)(param_1 + 0x18c) = uVar6;
    }
    uVar6 = *(unsigned int *)(param_1 + 0x18c);
    uVar1 = *(unsigned int *)(param_1 + 0x8c0);
    uVar3 = fn_827F04B0(0x18c);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = fn_827F1148(uVar3,uVar6,0);
    }
    *(unsigned int *)(param_1 + 0xb70) = uVar7;
    fn_827F2DD0((double)lbl_8218E8E8,uVar6);
    uVar3 = fn_827F2038(0x110);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_827F3070(uVar3,uVar6);
    }
    *(unsigned int *)(param_1 + 0xb74) = uVar6;
    uVar3 = fn_8265C9E0(0xe0);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_824A1C90(uVar3,uVar1,*(unsigned int *)(param_1 + 0xb60));
    }
    *(unsigned int *)(param_1 + 0xb78) = uVar6;
    fn_827F4818(auStack_70,0,*(unsigned int *)(param_1 + 0xb74));
    fStack_40 = lbl_8218E8E8;
    uStack_44 = 1;
    fStack_60 = lbl_821CA460;
    fStack_5c = lbl_821CA460;
    uVar3 = fn_827F46E8(0x118);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_8250DA48(uVar3,auStack_70);
    }
    *(unsigned int *)(param_1 + 0xb7c) = uVar6;
    fn_827F0FB8(*(unsigned int *)(param_1 + 0xb70),*(unsigned int *)(param_1 + 0xb74),0);
    fn_827F0FB8(*(unsigned int *)(param_1 + 0xb70),*(unsigned int *)(param_1 + 0xb78),0);
    fn_827F0FB8(*(unsigned int *)(param_1 + 0xb70),*(unsigned int *)(param_1 + 0xb7c),1);
    if (*(int *)(param_1 + 0xb90) != 0) {
      fn_8255F880(&stack_pair_a0.first,param_1 + 0xb90);
      uVar4 = fn_8255F8D0((double)ltcg_pool_0_0f,(double)lbl_821CA460,&stack_pair_a0.first);
      fn_827F2D60((double)lbl_8218E8E8,*(unsigned int *)(param_1 + 0xb74),uVar4);
    }
    lVar5 = fn_8265C9E0(0x70);
    if (lVar5 == 0) {
      uVar3 = ZEXT48(ppuStack_b0);
      uVar6 = 0;
    }
    else {
      bVar2 = true;
      uVar3 = fn_8251F720(param_1 + 0xb8c,0);
      stack_pair_a0.second = *(unsigned int *)(param_1 + 0xb7c);
      puStack_80 = (unsigned int *)fn_8265C9E0(0x14);
      if (puStack_80 == (unsigned int *)0x0) {
        uStack_ac = 0;
        ppuStack_b0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_b0);
      }
      *puStack_80 = &lbl_821C21B4;
      puStack_80[1] = stack_pair_a0.first;
      puStack_80[2] = stack_pair_a0.second;
      puStack_80[3] = uStack_98;
      puStack_80[4] = uStack_94;
      uVar6 = fn_8234E6D8(lVar5,auStack_90,uVar1,uVar3);
    }
    *(unsigned int *)(param_1 + 0xb84) = uVar6;
    if ((bVar2) && ((uVar3 & 0xffffffff) != 0)) {
      fn_8251FA58(uVar3);
    }
    *(unsigned int *)(param_1 + 0xb6c) = 1;
  }
  return;
}

