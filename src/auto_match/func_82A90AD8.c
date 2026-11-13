extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82A86EA8();
extern int fn_82A8F350();
extern unsigned int lbl_8201DCB8;
extern unsigned int uStack_94;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


unsigned __int64
fn_82A90AD8(int *param_1,int *param_2,int *param_3,__int64 param_4,__int64 param_5,
             __int64 param_6,__int64 param_7)

{
  char cVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int uVar7;
  struct { unsigned int first; unsigned int second; } stack_pair_a0;

  unsigned int uStack_94;
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [112];
  
  uVar4 = param_5 - 1;
  if (-1 < (__int64)uVar4) {
    lVar2 = (uVar4 & 0x3fffffff) * 4 + param_6;
    uVar3 = uVar4;
    do {
      if (*(int *)lVar2 < 0) {
        return 0;
      }
      if (*param_3 <= *(int *)lVar2) {
        return 0;
      }
      uVar3 = uVar3 - 1;
      lVar2 = lVar2 + -4;
    } while (-1 < (__int64)uVar3);
  }
  puVar5 = (unsigned int *)*param_1;
  uStack_94 = lbl_8201DCB8;
  stack_pair_a0.first = lbl_8201DCB8;
  stack_pair_a0.second = lbl_8201DCB8;
  if (puVar5 == (unsigned int *)0x0) {
    puVar5 = &stack_pair_a0.first;
  }
  iVar6 = param_3[0xd] + param_3[0xc] + param_3[0xb] + param_3[0x1a] + param_3[0x19] + param_3[0x18]
  ;
  if (-1 < (int)uVar4) {
    do {
      uVar7 = *(int *)param_6 * iVar6 + 0x144;
      if (0 < iVar6) {
        cVar1 = (**(int (***)())(*param_2 + 4))(param_2);
        if (((cVar1 == '\0') ||
            (cVar1 = (**(int (***)())(*param_2 + 0xc))(param_2,(__int64)((int)uVar7 >> 3)),
            cVar1 == '\0')) ||
           (cVar1 = (**(int (***)())(*param_2 + 0x10))
                              (param_2,auStack_90,
                               (__int64)((int)(uVar7 + iVar6 + 7) >> 3) -
                               (__int64)((int)uVar7 >> 3),&stack_pair_a0.first), cVar1 == '\0')) {
          return 0;
        }
      }
      fn_82A86EA8(auStack_70,auStack_90,0x18);
      fn_82A8F350(puVar5,param_3 + 1,auStack_70,uVar7 & 7,param_4);
      uVar4 = uVar4 - 1;
      param_4 = param_4 + param_7;
      param_6 = param_6 + 4;
    } while (-1 < (__int64)uVar4);
  }
  return 1;
}

