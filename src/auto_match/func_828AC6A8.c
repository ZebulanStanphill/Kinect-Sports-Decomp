typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern unsigned int uStack_44;


void fn_828AC6A8(int param_1,unsigned __int64 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned char uVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  unsigned int uStack_44;
  unsigned int auStack_40 [16];
  
  lVar7 = 4;
  puVar6 = &uStack_44;
  do {
    iVar2 = fn_828E9DA8(param_2);
    iVar3 = fn_828E9D90(param_2);
    if (iVar2 - iVar3 < 6) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_828E9FF8(param_2,6);
    }
    lVar7 = lVar7 + -1;
    puVar6 = puVar6 + 1;
    *puVar6 = uVar4;
  } while (lVar7 != 0);
  *(unsigned int *)(param_1 + 0x10) = auStack_40[2];
  *(unsigned int *)(param_1 + 0x14) = auStack_40[3];
  *(unsigned int *)(param_1 + 8) = auStack_40[0];
  *(unsigned int *)(param_1 + 0xc) = auStack_40[1];
  if (((unsigned __int64)auStack_40[2] + (unsigned __int64)auStack_40[3] == 0) ||
     (bVar1 = true, auStack_40[2] < auStack_40[0])) {
    bVar1 = false;
  }
  if ((!bVar1) || (uVar5 = 1, auStack_40[3] < auStack_40[1])) {
    uVar5 = 0;
  }
  *(unsigned char *)(param_1 + 4) = uVar5;
  return;
}

