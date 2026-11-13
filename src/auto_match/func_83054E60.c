typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_83051330();
extern int fn_83051C68();
extern int fn_83054920();
extern int fn_83054B68();
extern int fn_83056268();
extern unsigned int stack0x00000020;


void fn_83054E60(int param_1,unsigned __int64 *param_2,__int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  bool bVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int iVar5;
  __int64 lStack00000020;
  
  iVar5 = param_1 + 0x38;
  lStack00000020 = param_3;
  RtlEnterCriticalSection(iVar5);
  if ((int)param_6 == 1) {
    if (((param_2[6] & 0xe000000000000000) == 0x4000000000000000) ||
       (bVar1 = true, (param_5 & 0xffffffff) + lStack00000020 < *param_2)) {
      bVar1 = false;
    }
    lVar4 = 1;
    if (bVar1) goto LAB_83054ee0;
  }
  lVar4 = 0;
LAB_83054ee0:
  if ((lVar4 == 0) || (*(unsigned __int64 **)(param_1 + 0xb0) == param_2)) {
    uVar3 = fn_83051330(param_1,&stack0x00000020,param_4,param_5,lVar4);
    if ((param_2 != (unsigned __int64 *)0x0) &&
       (uVar2 = param_2[6],
       fn_83054920(param_1,param_2,(uVar3 & 0xffffffff) + lStack00000020,lVar4),
       (uVar2 & 0xe000000000000000) != 0x4000000000000000)) {
      fn_83054B68(param_1);
    }
    fn_83051C68(param_1,param_6);
    fn_83056268(*(unsigned int *)(param_1 + 0x60));
    RtlLeaveCriticalSection(iVar5);
  }
  else {
    *(unsigned int *)(param_2 + 6) = *(unsigned int *)(param_2 + 6) & 0x1fffffff | 0x20000000;
    RtlLeaveCriticalSection(iVar5);
  }
  return;
}

