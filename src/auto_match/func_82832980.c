typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82820EF8();
extern int fn_82824308();
extern int fn_82824338();
extern int fn_82824378();
extern int fn_828243B8();
extern int fn_828243E8();
extern int fn_82827750();
extern int fn_82829830();
extern int fn_82833628();
extern unsigned int iStack_50;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


bool fn_82832980(unsigned __int64 param_1,int param_2,unsigned int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar5;
  int *piVar4;
  int iVar6;
  int iStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  
  cVar5 = fn_82824338(param_2);
  if (cVar5 == '\0') {
    iVar1 = *param_4;
    iVar2 = *(int *)(iVar1 + 8);
    iVar6 = **(int **)(iVar2 + 0x388) + param_4[1] * 0x20;
    stack_pair_40.first = param_3;
    fn_82829830(iVar1,&stack_pair_40.first);
    cVar5 = fn_828243E8(param_2);
    if (cVar5 != '\0') {
      return *(int *)(param_2 + 0x14) == 0;
    }
    cVar5 = fn_82824378(iVar6);
    if ((((param_2 == iVar6) && (cVar5 != '\0')) &&
        (uStack_4c = *(unsigned int *)(iVar6 + 0x1c), uStack_4c != 0)) && (*(int *)(iVar6 + 0x18) == 0)) {
      if (uStack_4c < 2) {
        return false;
      }
      iStack_50 = (*(unsigned int *)(iVar6 + 0x10) / uStack_4c) * param_4[3];
      uStack_48 = uStack_4c;
      piVar4 = (int *)fn_82833628(*(unsigned int *)(iVar1 + 0x50),&iStack_50);
      iVar1 = *piVar4;
      iVar6 = iVar1 * 4 + *(int *)(iVar2 + 0x2e4);
    }
    else {
      cVar5 = fn_82824308(param_2);
      if ((cVar5 == '\0') && (cVar5 = fn_828243B8(param_2), cVar5 == '\0')) {
        return true;
      }
      uStack_4c = *(unsigned int *)(param_2 + 0x10);
      if (uStack_4c < 2) {
        return false;
      }
      uStack_48 = *(unsigned int *)(iVar6 + 0x10);
      iStack_50 = param_4[3];
      piVar4 = (int *)fn_82833628(*(unsigned int *)(iVar1 + 0x50),&iStack_50);
      iVar1 = *piVar4;
      iVar6 = iVar1 * 4 + *(int *)(iVar2 + 0x2e4);
    }
    iVar3 = *(int *)(iVar2 + 0x2d8);
    *piVar4 = iVar1 + 1;
    *(unsigned int *)(iVar6 + iVar3) = stack_pair_40.second;
    cVar5 = fn_82827750(iVar2);
    if (cVar5 != '\0') {
      fn_82820EF8(iVar6 + iVar3,4);
    }
    *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x40) + 1;
  }
  return false;
}

