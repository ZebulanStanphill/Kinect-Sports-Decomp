#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _iStack_78 ((*(unsigned __int64*)&iStack_78))
#define _iStack_80 ((*(unsigned __int64*)&iStack_80))
extern unsigned int *auStack_90;
extern int fn_829F5000();
extern int fn_82A0CB88();
extern unsigned int iStack_78;
extern unsigned int iStack_80;
extern unsigned int iStack_a0;
extern unsigned int *lbl_83218C34;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;
extern unsigned int uStack_88;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


unsigned __int64
fn_829F5FF8(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,int param_8)

{
  int in_r0;
  unsigned __int64 uVar1;
  int *piVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  unsigned char in_vs32 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs61 [16];
  unsigned int in_register_000103e0;
  unsigned int in_register_000103e4;
  unsigned int in_register_000103e8;
  unsigned int in_vr62;
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  struct { int first; unsigned int second; } stack_pair_a0;

  unsigned int uStack_98;
  unsigned char auStack_90 [8];
  unsigned __int64 uStack_88;
  int iStack_80;
  unsigned int uStack_7c;
  int iStack_78;
  unsigned int uStack_74;
  
  *(unsigned int *)(param_1 + 8) = 1;
  altv207_13(in_vs32,in_vs36);
  *(unsigned int *)(param_1 + 0x10698) = (int)param_4;
  puVar3 = (unsigned int *)(param_1 + 0x10650U & 0xfffffff0);
  *puVar3 = in_register_000103f0;
  puVar3[1] = in_register_000103f4;
  puVar3[2] = in_register_000103f8;
  puVar3[3] = in_vr63;
  if (lbl_83218C34 != (int *)0x0) {
    (**(int (***)())(*lbl_83218C34 + 0x30))(lbl_83218C34,param_4);
  }
  stack_pair_a0.first = *(int *)(param_2 + 0xb8);
  stack_pair_a0.second = *(unsigned int *)(param_2 + 0xbc);
  uStack_98 = *(unsigned int *)(param_2 + 0xc0);
  if (lbl_83218C34 != (int *)0x0) {
    (**(int (***)())(*lbl_83218C34 + 4))(lbl_83218C34,2);
  }
  *(unsigned int *)(param_1 + 8) = 2;
  uStack_88 = CONCAT44((int)param_3,(int)param_4);
  _iStack_80 = CONCAT44(param_2,uStack_7c);
  fn_829F5000(6,auStack_90,0x14);
  puVar3 = (unsigned int *)(param_2 + 0xc4);
  uVar1 = fn_82A0CB88(param_1 + 0xd0,param_5,param_6,param_2 + 0xb8,puVar3,param_2 + 0xd0,
                            param_7,param_3);
  piVar2 = &stack_pair_a0.first;
  lVar4 = 3;
  do {
    if (*piVar2 == 2) {
      if (puVar3[-3] == 0) {
        *(unsigned int *)((*(int *)(param_1 + 0x10678) + 0x4198) * 4 + param_1) = *puVar3;
        *(int *)(param_1 + 0x10678) = *(int *)(param_1 + 0x10678) + 1;
      }
      else if (puVar3[-3] == 1) {
        *(unsigned int *)((*(int *)(param_1 + 0x10694) + 0x419f) * 4 + param_1) = *puVar3;
        *(int *)(param_1 + 0x10694) = *(int *)(param_1 + 0x10694) + 1;
        *(unsigned int *)((puVar3[3] + 0x1b) * 4 + param_2) = 1;
        puVar3[3] = 0;
        *puVar3 = 0;
        puVar3[-3] = 0;
      }
    }
    piVar2 = piVar2 + 1;
    puVar3 = puVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uStack_88 = CONCAT44((int)param_6,param_8);
  _iStack_80 = CONCAT44(param_1 + 0x10660,*(unsigned int *)(param_1 + 0x10678));
  _iStack_78 = CONCAT44(param_1 + 0x1067c,*(unsigned int *)(param_1 + 0x10694));
  fn_829F5000(7,auStack_90,0x20);
  if (lbl_83218C34 != (int *)0x0) {
    (**(int (***)())(*lbl_83218C34 + 8))(lbl_83218C34,*(unsigned int *)(param_1 + 8));
    (**(int (***)())(*lbl_83218C34 + 4))(lbl_83218C34,3);
  }
  *(unsigned int *)(param_1 + 0x10698) = 0;
  *(unsigned int *)(param_1 + 8) = 3;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  if (param_8 != 0) {
    altv207_13(in_vs32,in_vs61);
    puVar3 = (unsigned int *)(in_r0 + param_8 & 0xfffffff0);
    *puVar3 = in_register_000103e0;
    puVar3[1] = in_register_000103e4;
    puVar3[2] = in_register_000103e8;
    puVar3[3] = in_vr62;
  }
  return uVar1;
}

