#define TBLr 0
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_200;
extern unsigned int *auStack_210;
extern unsigned int *auStack_220;
extern unsigned int *auStack_e0;
extern unsigned int fStack_204;
extern int fn_82CE6820();
extern int fn_82DD5FF0();
extern int fn_82DD9828();
extern int fn_82DD9A10();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_82139648;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1b4;
extern unsigned int uStack_1b8;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c0;


void fn_82D74E60(int *param_1,int *param_2,unsigned __int64 param_3,int *param_4)

{
  unsigned int *puVar1;
  int *piVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  unsigned char auStack_220 [8];
  unsigned char bStack_218;
  unsigned char bStack_217;
  unsigned char bStack_216;
  unsigned char auStack_210 [12];
  float fStack_204;
  unsigned char auStack_200 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_1c0;

  unsigned int uStack_1b8;
  unsigned int uStack_1b4;
  unsigned int uStack_1b0;
  unsigned int uStack_1ac;
  unsigned char auStack_1a0 [192];
  unsigned char auStack_e0 [224];
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar5 + 4);
  if (puVar1 < *(unsigned int **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_82139648;
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(unsigned int **)(iVar5 + 4) = puVar1 + 3;
  }
  piVar2 = (int *)*param_1;
  piVar3 = (int *)*param_2;
  fn_82CE6820(auStack_200,param_1[2],param_2[2]);
  if (piVar3[3] == 3) {
    fn_82DD9A10();
  }
  else {
    fn_82DD9828(auStack_220,piVar2,piVar3,auStack_200);
  }
  uStack_1b8 = (unsigned int)(bStack_216 >> 4);
  uStack_1b4 = bStack_216 & 0xf;
  uStack_1b0 = 1;
  stack_pair_1c0.second = (unsigned int)bStack_217;
  stack_pair_1c0.first = (unsigned int)bStack_218;
  uStack_1ac = 0;
  (**(int (***)())(*piVar2 + 0x3c))(piVar2,auStack_220,bStack_218,auStack_1a0);
  (**(int (***)())(*piVar3 + 0x3c))(piVar3,auStack_220 + stack_pair_1c0.first * 2,stack_pair_1c0.second,auStack_e0);
  iVar5 = fn_82DD5FF0(&stack_pair_1c0.first,piVar2,piVar3,auStack_200,auStack_210);
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar6 + 4);
  if (puVar1 < *(unsigned int **)(iVar6 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(unsigned int **)(iVar6 + 4) = puVar1 + 3;
  }
  if ((iVar5 != 0) || ((fStack_204 - (float)piVar2[4]) - (float)piVar3[4] < lbl_821AAD20)) {
    (**(int (***)())(*param_4 + 4))(param_4,param_1,param_2);
  }
  return;
}

