typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern unsigned int *auStack_7c;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern int fn_8268CEC0();
extern int fn_8268D280();
extern int fn_8268D5D8();
extern int fn_8269A3C0();
extern int fn_8275EC80();
extern int memcpy();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_82760470(int *param_1,int *param_2,int *param_3)

{
  unsigned int *puVar1;
  bool bVar2;
  unsigned int uVar3;
  int iVar4;
  struct { float first; float second; } stack_pair_d0;

  float fStack_c8;
  float fStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  int *piStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  struct { unsigned int first; unsigned int second; } stack_pair_94;

  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned char auStack_7c [1];
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned char auStack_50 [80];

  puVar1 = (unsigned int *)param_2[0x10];
  uStack_c0 = *puVar1;
  uStack_bc = puVar1[1];
  uStack_b8 = puVar1[2];
  uStack_b4 = puVar1[3];
  uStack_b0 = puVar1[4];
  uStack_ac = puVar1[5];
  fn_8268CEC0(&uStack_c0,param_3 + 0x11);
  memcpy(auStack_50,param_2[0x11],0x20);
  fn_8268D5D8(auStack_50,param_3 + 9);
  uVar3 = fn_8269A3C0(param_3);
  bVar2 = false;
  uStack_9c = 0;
  stack_pair_94.first = uStack_c0;
  uStack_98 = 0;
  stack_pair_94.second = uStack_bc;
  uStack_8c = uStack_b8;
  uStack_88 = uStack_b4;
  uStack_84 = uStack_b0;
  uStack_80 = uStack_ac;
  piStack_a0 = param_2;
  memcpy(auStack_7c,auStack_50,0x20);
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_5c = uVar3;
  if ((*(unsigned char *)(param_1 + 9) & 0x10) != 0) {
    stack_pair_d0.first = lbl_821AAD20;
    stack_pair_d0.second = lbl_821AAD20;
    fStack_c8 = lbl_821AAD20;
    fStack_c4 = lbl_821AAD20;
    fn_8268D280(&stack_pair_94.first,&stack_pair_d0.first,param_1 + 1);
    iVar4 = (**(int (***)())(*param_3 + 0x40))(param_3);
    if ((((stack_pair_d0.second <= *(float *)(iVar4 + 0xd4)) && (*(float *)(iVar4 + 0xcc) <= fStack_c4)) &&
        (*(float *)(iVar4 + 200) <= fStack_c8)) && (stack_pair_d0.first <= *(float *)(iVar4 + 0xd0))) {
      bVar2 = true;
    }
    if ((!bVar2) && ((*(unsigned int *)(*param_2 + 0x14) & 0x100) == 0)) {
      return;
    }
  }
  if ((*(unsigned char *)(param_1 + 9) & 0x40) != 0) {
    (**(int (***)())(*param_1 + 0x30))(param_1,&uStack_9c,&uStack_58,&uStack_98,&uStack_54);
  }
  fn_8275EC80(param_1,&piStack_a0,*(short *)(param_3 + 0x19) != 0,param_3);
  return;
}
