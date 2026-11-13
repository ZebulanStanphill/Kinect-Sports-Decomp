extern unsigned int *auStack_14a0;
extern unsigned int *auStack_a80;
extern int fn_82A8D1A8();
extern int fn_82A908E0();
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_82196284;
extern unsigned int uStack_14b8;
extern unsigned int uStack_14d0;
extern unsigned int uStack_14d4;
extern unsigned int uStack_14d8;
extern unsigned int uStack_14dc;
extern unsigned int uStack_14e0;
extern unsigned int uStack_14ec;
extern unsigned int uStack_14f0;


unsigned __int64
fn_82A90E00(int *param_1,int *param_2,int *param_3,__int64 param_4,__int64 param_5,
             __int64 param_6,__int64 param_7)

{
  int iVar1;
  char cVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  struct { unsigned int first; unsigned int second; } stack_pair_14f0;

  struct { unsigned int first; unsigned int second; } stack_pair_14e0;

  unsigned int uStack_14d8;
  unsigned int uStack_14d4;
  unsigned int uStack_14d0;
  unsigned int uStack_14b8;
  unsigned char auStack_14a0 [2592];
  unsigned char auStack_a80 [2656];

  uVar5 = param_5 - 1;
  if (-1 < (__int64)uVar5) {
    lVar3 = (uVar5 & 0x3fffffff) * 4 + param_6;
    uVar4 = uVar5;
    do {
      if (*(int *)lVar3 < 0) {
        return 0;
      }
      if (*param_3 <= *(int *)lVar3) {
        return 0;
      }
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + -4;
    } while (-1 < (__int64)uVar4);
  }
  puVar6 = (unsigned int *)*param_1;
  uStack_14d0 = 0x48;
  stack_pair_14f0.first = lbl_8201DCB8;
  stack_pair_14f0.second = lbl_8201DCB8;
  uStack_14b8 = lbl_8201DCB8;
  uStack_14d4 = lbl_82196284;
  stack_pair_14e0.first = lbl_8201DCB8;
  uStack_14d8 = lbl_8201DCB8;
  stack_pair_14e0.second = lbl_8201DCB8;
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = &stack_pair_14e0.first;
  }
  iVar1 = param_3[2];
  if (-1 < (int)uVar5) {
    do {
      uVar7 = *(int *)param_6 * iVar1 + 0x7b70;
      if (0 < iVar1) {
        cVar2 = (**(int (***)())(*param_2 + 4))(param_2);
        if (((cVar2 == '\0') ||
            (cVar2 = (**(int (***)())(*param_2 + 0xc))(param_2,(__int64)((int)uVar7 >> 3)),
            cVar2 == '\0')) ||
           (cVar2 = (**(int (***)())(*param_2 + 0x10))
                              (param_2,auStack_14a0,
                               (__int64)((int)(uVar7 + iVar1 + 7) >> 3) -
                               (__int64)((int)uVar7 >> 3),&stack_pair_14f0.first), cVar2 == '\0')) {
          return 0;
        }
      }
      fn_82A8D1A8(auStack_a80,auStack_14a0,0xa20);
      fn_82A908E0(puVar6,param_3 + 1,auStack_a80,uVar7 & 7,param_4);
      uVar5 = uVar5 - 1;
      param_4 = param_4 + param_7;
      param_6 = param_6 + 4;
    } while (-1 < (__int64)uVar5);
  }
  return 1;
}
