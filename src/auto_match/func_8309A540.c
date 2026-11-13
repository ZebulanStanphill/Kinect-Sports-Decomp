#define TBLr 0
extern unsigned int *auStack_a0;
extern unsigned int *auStack_e0;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CE8E78();
extern int fn_82DCB000();
extern unsigned int iStack_f0;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;


void fn_8309A540(unsigned __int64 param_1,int param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  int iVar5;
  struct { int first; unsigned int second; } stack_pair_f0;

  unsigned int uStack_e8;
  unsigned char auStack_e0 [16];
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned char auStack_a0 [144];
  
  iVar2 = KeTlsGetValue(lbl_8323B4A0);
  puVar4 = *(unsigned int **)(iVar2 + 4);
  if (puVar4 < *(unsigned int **)(iVar2 + 0xc)) {
    *puVar4 = "TtCollQueryMoppAabbQuery";
    uVar1 = TBLr;
    puVar4[1] = (int)uVar1;
    *(unsigned int **)(iVar2 + 4) = puVar4 + 3;
  }
  uStack_c0 = *(unsigned int *)(param_2 + 0x30);
  puVar4 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
  uStack_d0 = *puVar4;
  uStack_cc = puVar4[1];
  uStack_c8 = puVar4[2];
  uStack_c4 = puVar4[3];
  iVar2 = 0;
  uStack_bc = 0x200;
  uStack_b8 = 0x200;
  if (0 < *(int *)(param_2 + 0x3c)) {
    iVar5 = 0;
    do {
      iVar3 = iVar5 + *(int *)(param_2 + 0x38);
      stack_pair_f0.first = *(int *)(iVar3 + 0x20);
      stack_pair_f0.second = 0;
      uStack_e8 = 0x80001000;
      fn_82DCB000(auStack_a0,auStack_e0,iVar3,&stack_pair_f0.first);
      iVar3 = fn_82CE5410();
      if (stack_pair_f0.second == (uStack_e8 & 0x3fffffff)) {
        fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),&stack_pair_f0.first,4);
      }
      puVar4 = (unsigned int *)(stack_pair_f0.second * 4 + stack_pair_f0.first);
      if (puVar4 != (unsigned int *)0x0) {
        *puVar4 = 0xffffffff;
      }
      stack_pair_f0.second = stack_pair_f0.second + 1;
      iVar3 = fn_82CE5410();
      stack_pair_f0.second = 0;
      if ((uStack_e8 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar3 + 0x10) + 0x10))
                  (*(int **)(iVar3 + 0x10),stack_pair_f0.first,uStack_e8 & 0x3fffffff,4);
      }
      iVar2 = iVar2 + 1;
      stack_pair_f0.first = 0;
      iVar5 = iVar5 + 0x30;
      uStack_e8 = 0x80000000;
    } while (iVar2 < *(int *)(param_2 + 0x3c));
  }
  iVar2 = KeTlsGetValue(lbl_8323B4A0);
  puVar4 = *(unsigned int **)(iVar2 + 4);
  if (puVar4 < *(unsigned int **)(iVar2 + 0xc)) {
    *puVar4 = &lbl_82132BC4;
    uVar1 = TBLr;
    puVar4[1] = (int)uVar1;
    *(unsigned int **)(iVar2 + 4) = puVar4 + 3;
  }
  fn_82CE8E78(param_1,param_2,param_2,0);
  return;
}

