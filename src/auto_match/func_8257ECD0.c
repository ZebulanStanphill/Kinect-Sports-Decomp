typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8255B0D8();
extern int fn_8257EE08();
extern int fn_825907D0();
extern unsigned int lbl_8218E8E8;


bool fn_8257ECD0(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  short sVar5;
  unsigned int *puVar6;
  bool bVar7;
  __int64 lVar8;
  
  iVar1 = *param_1;
  if (param_1[0xf] != 0) {
    iVar4 = *(int *)(*(int *)(iVar1 + 0x844) + 0x358);
    if (((iVar4 == 0) || (*(int *)(iVar4 + 0x11c) != 0)) ||
       (bVar7 = true, *(float *)(iVar4 + 0x88) < *(float *)(iVar4 + 0x94))) {
      bVar7 = false;
    }
    if (!bVar7) {
      return true;
    }
    fn_8255B0D8();
    sVar5 = 1;
    param_1[0xf] = 0;
    uVar3 = lbl_8218E8E8;
    puVar6 = (unsigned int *)(iVar1 + 0x58);
    lVar8 = 4;
    do {
      if ((sVar5 != 0) &&
         (uVar2 = *puVar6, *puVar6 = (unsigned int)((unsigned __int64)uVar2 - 1), (unsigned __int64)uVar2 - 1 == 0)) {
        puVar6[4] = uVar3;
      }
      puVar6 = puVar6 + 1;
      sVar5 = sVar5 << 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  iVar4 = fn_825907D0(iVar1);
  if (iVar4 == 0) {
    while (iVar4 = fn_8257EE08(iVar1 + 0x7a4), iVar4 != 0) {
      fn_825907D0(iVar1);
    }
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x88c) * 0xc + iVar1 + 0x85c);
  if (iVar1 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(int *)(iVar1 + 4) != *(int *)(iVar1 + 8);
  }
  return bVar7;
}

