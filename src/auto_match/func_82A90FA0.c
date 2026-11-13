extern unsigned int *auStack_120;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_f0;
extern int fn_82A8D448();
extern int fn_82A90998();
extern unsigned int lbl_8201DCB8;
extern unsigned int uStack_104;
extern unsigned int uStack_110;
extern unsigned int uStack_114;
extern unsigned int uStack_118;


unsigned __int64
fn_82A90FA0(int *param_1,int *param_2,int *param_3,__int64 param_4,__int64 param_5,
             __int64 param_6,__int64 param_7)

{
  int iVar1;
  char cVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int auStack_120;
  struct { unsigned int first; unsigned int second; } stack_pair_118;

  unsigned int uStack_110;
  unsigned int uStack_104;
  unsigned char auStack_f0 [80];
  unsigned char auStack_a0 [96];
  
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
  uStack_110 = 3;
  auStack_120 = lbl_8201DCB8;
  uStack_104 = lbl_8201DCB8;
  stack_pair_118.first = lbl_8201DCB8;
  stack_pair_118.second = lbl_8201DCB8;
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = &stack_pair_118.first;
  }
  iVar1 = param_3[2];
  if (-1 < (int)uVar5) {
    do {
      uVar7 = *(int *)param_6 * iVar1 + 0x3ac;
      if (0 < iVar1) {
        cVar2 = (**(int (***)())(*param_2 + 4))(param_2);
        if (((cVar2 == '\0') ||
            (cVar2 = (**(int (***)())(*param_2 + 0xc))(param_2,(__int64)((int)uVar7 >> 3)),
            cVar2 == '\0')) ||
           (cVar2 = (**(int (***)())(*param_2 + 0x10))
                              (param_2,auStack_f0,
                               (__int64)((int)(uVar7 + iVar1 + 7) >> 3) -
                               (__int64)((int)uVar7 >> 3),&auStack_120), cVar2 == '\0')) {
          return 0;
        }
      }
      fn_82A8D448(auStack_a0,auStack_f0,0x48);
      fn_82A90998(puVar6,param_3 + 1,auStack_a0,uVar7 & 7,param_4);
      uVar5 = uVar5 - 1;
      param_4 = param_4 + param_7;
      param_6 = param_6 + 4;
    } while (-1 < (__int64)uVar5);
  }
  return 1;
}

