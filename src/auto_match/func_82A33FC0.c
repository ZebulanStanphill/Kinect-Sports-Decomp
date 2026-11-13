typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_cc;
extern int fn_82A33D80();
extern int fn_82A37680();
extern int MmLockAndMapSegmentArray();
extern unsigned int iStack_88;
extern unsigned int iStack_a8;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_d0;


unsigned __int64 fn_82A33FC0(int *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned int *param_5,__int64 *param_6,unsigned __int64 param_7,int param_8)

{
  bool bVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int in_stack_00000054;
  unsigned int uStack_d0;
  unsigned int auStack_cc [3];
  struct { unsigned int first; unsigned int second; } stack_pair_c0;

  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  int iStack_a8;
  unsigned int *puStack_a4;
  __int64 lStack_a0;
  unsigned int uStack_98;
  unsigned int *puStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  int iStack_88;
  struct { unsigned int first; unsigned int second; } stack_pair_84;

  unsigned int *puStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;

  auStack_cc[0] = 0;
  if (param_6 == (__int64 *)0x0) {
    uVar3 = *(unsigned __int64 *)(param_2 + 0xc) & 0xffffffff;
  }
  else {
    uVar3 = (unsigned __int64)(unsigned int)*param_6;
  }
  iVar2 = fn_82A33D80(param_1,param_2,uVar3,param_4);
  if (iVar2 == 0) {
    uVar3 = 0xffffffffc000000d;
  }
  else {
    param_5[1] = 0;
    uStack_98 = (unsigned int)param_4;
    *param_5 = 0x103;
    uStack_b4 = param_2[4];
    uStack_ac = param_2[1];
    stack_pair_c0.second = *param_2;
    uStack_90 = (unsigned int)param_7;
    stack_pair_c0.first = 2;
    uStack_b0 = 0xffffffff;
    stack_pair_84.first = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    stack_pair_84.second = (unsigned int)((param_2[10] & 8) == 0);
    puStack_a4 = param_5;
    iStack_88 = param_8;
    if (in_stack_00000054 == 0) {
      iStack_a8 = (int)param_3;
    }
    else if ((param_4 & 0xffffffff) != 0) {
      iStack_a8 = MmLockAndMapSegmentArray(0,param_3,param_4,0);
      if (iStack_a8 == 0) {
        return 0xffffffffc000009a;
      }
      stack_pair_84.first = 1;
    }
    if ((param_8 == 0) && ((param_2[10] & 0x20) != 0)) {
      uStack_b8 = param_2[5];
      puStack_7c = &uStack_d0;
      puStack_94 = auStack_cc;
      RtlEnterCriticalSection(param_2 + 0xe);
      lVar4 = *(__int64 *)(param_2 + 0xc);
      lStack_a0 = lVar4;
      if (param_6 != (__int64 *)0x0) {
        lStack_a0 = *param_6;
      }
      bVar1 = true;
    }
    else {
      lStack_a0 = *param_6;
      uStack_b8 = 0;
      puStack_7c = (unsigned int *)0x0;
      puStack_94 = (unsigned int *)0x0;
      if ((param_8 != 0) &&
         (uVar3 = (**(int (***)())(*param_1 + 8))(0xfffffffffffffffe,&stack_pair_84.first,0), (int)uVar3 < 0)) {
        return uVar3;
      }
      lVar4 = 0;
      uStack_d0 = 0;
      bVar1 = false;
    }
    if (((param_2[6] & 0x100000) == 0) && (((param_7 & 0xffffffff) != 0 || (param_8 != 0)))) {
      uStack_8c = 0;
    }
    else {
      uStack_8c = *param_2;
      NtClearEvent();
    }
    if ((param_8 == 0) && ((param_7 & 0xffffffff) != 0)) {
      NtClearEvent(param_7);
    }
    iVar2 = fn_82A37680(param_1 + 0x31,&stack_pair_c0.first);
    if (bVar1) {
      if (iVar2 == 0) {
        uStack_d0 = 0xc0000017;
      }
      else {
        uStack_d0 = NtWaitForSingleObjectEx(param_2[5],1,0,0);
        *(unsigned __int64 *)(param_2 + 0xc) = (unsigned __int64)auStack_cc[0] + lVar4;
      }
      *param_5 = uStack_d0;
      param_5[1] = auStack_cc[0];
      RtlLeaveCriticalSection(param_2 + 0xe);
      uVar3 = (unsigned __int64)uStack_d0;
    }
    else if (iVar2 == 0) {
      (**(int (***)())(*param_1 + 4))(stack_pair_84.first);
      uVar3 = 0xffffffffc0000017;
    }
    else {
      uVar3 = 0x103;
    }
  }
  return uVar3;
}
