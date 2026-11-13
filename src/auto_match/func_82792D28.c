typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_826BCD88();
extern int fn_82790148();
extern int fn_827901D8();
extern int fn_82790A58();
extern int fn_82791560();
extern int fn_827917E8();


__int64 fn_82792D28(int param_1,unsigned int *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  __int64 lVar5;
  short *psVar6;
  unsigned int *puVar7;
  
  if (*(int *)(param_1 + 4) != 3) goto LAB_82792f54;
  puVar7 = (unsigned int *)(param_1 + 8);
  bVar3 = false;
  *param_2 = *(unsigned int *)(param_1 + 8);
  *param_3 = 0;
  cVar1 = *(char *)(param_1 + 0x18);
  *(unsigned char *)(param_1 + 0x18) = 1;
  if ((cVar1 == '\0') && (*(short *)*puVar7 == 0x26)) {
    fn_82790A58(puVar7);
  }
  psVar6 = (short *)*puVar7;
  if (psVar6 < *(short **)(param_1 + 0x10)) {
    do {
      if (*(unsigned int *)(param_1 + 0x14) == 0x3c) {
        if ((*(char *)(param_1 + 0x18) == '\0') || (bVar2 = true, *psVar6 != 0x26)) {
          bVar2 = false;
        }
        if (!bVar2) break;
      }
      iVar4 = fn_826BCD88(0xffffffff820094c8,*(unsigned int *)(param_1 + 0x14) & 0xffff);
      if ((iVar4 == 0) || (*(char *)(param_1 + 0x28) == '\0')) {
        if ((*(char *)(param_1 + 0x18) == '\0') || (bVar2 = true, *psVar6 != 0x26)) {
          bVar2 = false;
        }
        if (bVar2) {
          if (!bVar3) {
            *(unsigned int *)(param_1 + 0x24) = 0;
            fn_82790148(param_1,*param_2,*param_3);
            bVar3 = true;
          }
          fn_827901D8(param_1,*(unsigned int *)(param_1 + 0x14));
        }
        else {
          iVar4 = *(int *)(param_1 + 0xc) - (int)psVar6 >> 1;
          if (bVar3) {
            fn_82790148(param_1,*puVar7,iVar4);
          }
          else {
            *param_3 = iVar4 + *param_3;
          }
        }
        fn_82791560(puVar7);
      }
      else {
        if (!bVar3) {
          *(unsigned int *)(param_1 + 0x24) = 0;
          fn_82790148(param_1,*param_2,*param_3);
          bVar3 = true;
        }
        fn_827901D8(param_1,0x20);
        fn_827917E8(param_1);
      }
      psVar6 = (short *)*puVar7;
    } while (psVar6 < *(short **)(param_1 + 0x10));
  }
  if (bVar3) {
    *param_2 = *(unsigned int *)(param_1 + 0x1c);
    *param_3 = *(int *)(param_1 + 0x24);
  }
  if ((short *)*puVar7 < *(short **)(param_1 + 0x10)) {
    if (*(int *)(param_1 + 0x14) == 0x3c) {
      if ((*(char *)(param_1 + 0x18) == '\0') || (bVar3 = true, *(short *)*puVar7 != 0x26)) {
        bVar3 = false;
      }
      if (!bVar3) goto LAB_82792f44;
    }
    *(unsigned int *)(param_1 + 4) = 1;
  }
  else {
LAB_82792f44:
    *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_1 + 4) | 0x8000;
  }
  *(unsigned char *)(param_1 + 0x18) = 0;
LAB_82792f54:
  lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 4) - 1;
  return lVar5 - (((unsigned __int64)*(unsigned int *)(param_1 + 4) - 2) + (unsigned __int64)(lVar5 == 0));
}

