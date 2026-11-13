typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern int fn_8268CC00();
extern int fn_8268CCB0();
extern int fn_8268CEC0();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82695370();
extern int fn_82696330();
extern int fn_8269A240();
extern int fn_826B44A0();
extern int fn_826F6FA8();
extern unsigned int lbl_8200571C;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


bool fn_826FD6B0(int param_1,unsigned __int64 param_2,float *param_3,unsigned int *param_4,
                  unsigned __int64 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  __int64 lVar5;
  int aiStack_a0;
  float fStack_98;
  float fStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned char auStack_80 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned char auStack_50 [48];
  
  piVar1 = (int *)fn_826F6FA8(param_1,0);
  iVar2 = (**(int (***)())(*piVar1 + 0x5c))();
  auStack_80[0] = 0;
  aiStack_a0 = fn_82694700((unsigned __int64)*(unsigned int *)(iVar2 + 0x78) + 0x254,param_2);
  *(int *)(aiStack_a0 + 8) = *(int *)(aiStack_a0 + 8) + 1;
  cVar3 = fn_826B44A0(iVar2,&aiStack_a0,auStack_80,0,0,0,0);
  lVar5 = (unsigned __int64)*(unsigned int *)(aiStack_a0 + 8) - 1;
  *(int *)(aiStack_a0 + 8) = (int)lVar5;
  if (lVar5 == 0) {
    fn_826944C8(aiStack_a0);
  }
  if (cVar3 == '\0') {
    fn_82696330();
    bVar4 = false;
  }
  else {
    lVar5 = fn_82695370(auStack_80,iVar2);
    bVar4 = lVar5 != 0;
    if (bVar4) {
      fStack_98 = *param_3 * lbl_8200571C;
      fStack_94 = param_3[1] * lbl_8200571C;
      fn_8268CC00(auStack_50);
      fn_8269A240(lVar5,auStack_50);
      stack_pair_70.first = *(unsigned int *)(param_1 + 0xe8);
      stack_pair_70.second = *(unsigned int *)(param_1 + 0xec);
      uStack_68 = *(unsigned int *)(param_1 + 0xf0);
      uStack_64 = *(unsigned int *)(param_1 + 0xf4);
      uStack_60 = *(unsigned int *)(param_1 + 0xf8);
      uStack_5c = *(unsigned int *)(param_1 + 0xfc);
      fn_8268CEC0(&stack_pair_70.first,param_5);
      fn_8268CEC0(&stack_pair_70.first,auStack_50);
      fn_8268CCB0(&stack_pair_70.first,&uStack_90,&fStack_98);
      *param_4 = uStack_90;
      param_4[1] = uStack_8c;
    }
    fn_82696330(auStack_80);
  }
  return bVar4;
}

