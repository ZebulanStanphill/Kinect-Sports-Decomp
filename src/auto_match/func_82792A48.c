typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82790148();
extern int fn_827901D8();
extern int fn_82790A58();
extern int fn_82791560();
extern int fn_827917E8();


unsigned __int64 fn_82792A48(int param_1,unsigned int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  bool bVar4;
  bool bVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  
  uVar7 = 0;
  if (*(int *)(param_1 + 4) == 8) {
    iVar2 = *(int *)(param_1 + 0x14);
    if ((iVar2 == 0x22) || (iVar2 == 0x27)) {
      puVar8 = (unsigned int *)(param_1 + 8);
      fn_82791560(puVar8);
      bVar4 = false;
      *param_2 = *(unsigned int *)(param_1 + 8);
      *param_3 = 0;
      cVar1 = *(char *)(param_1 + 0x18);
      *(unsigned char *)(param_1 + 0x18) = 1;
      if ((cVar1 == '\0') && (*(short *)*puVar8 == 0x26)) {
        fn_82790A58(puVar8);
      }
      while ((psVar3 = (short *)*puVar8, psVar3 < *(short **)(param_1 + 0x10) &&
             (*(int *)(param_1 + 0x14) != iVar2))) {
        if ((*(char *)(param_1 + 0x18) == '\0') || (bVar5 = true, *psVar3 != 0x26)) {
          bVar5 = false;
        }
        if (bVar5) {
          if (!bVar4) {
            *(unsigned int *)(param_1 + 0x24) = 0;
            fn_82790148(param_1,*param_2,*param_3);
            bVar4 = true;
          }
          fn_827901D8(param_1,*(unsigned int *)(param_1 + 0x14));
        }
        else if (bVar4) {
          fn_82790148(param_1,*puVar8,*(int *)(param_1 + 0xc) - (int)psVar3 >> 1);
        }
        else {
          *param_3 = (*(int *)(param_1 + 0xc) - (int)psVar3 >> 1) + *param_3;
        }
        fn_82791560(puVar8);
      }
      *(unsigned char *)(param_1 + 0x18) = 0;
      if (bVar4) {
        *param_2 = *(unsigned int *)(param_1 + 0x1c);
        *param_3 = *(int *)(param_1 + 0x24);
      }
      if (*puVar8 < *(unsigned int *)(param_1 + 0x10)) {
        uVar7 = 1;
        fn_82791560(puVar8);
        fn_827917E8(param_1);
        if ((*(int *)(param_1 + 0x14) == 0x3e) || (uVar6 = 7, *(int *)(param_1 + 0x14) == 0x2f)) {
          uVar6 = 9;
        }
        *(unsigned int *)(param_1 + 4) = uVar6;
        goto LAB_82792bf8;
      }
    }
    *(unsigned int *)(param_1 + 4) = 1;
  }
LAB_82792bf8:
  if (*(unsigned int *)(param_1 + 0x10) <= *(unsigned int *)(param_1 + 8)) {
    *(unsigned int *)(param_1 + 4) = 1;
  }
  return uVar7;
}

