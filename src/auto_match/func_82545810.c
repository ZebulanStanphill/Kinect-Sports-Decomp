typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82544E80();
extern int fn_8262FEC8();
extern unsigned int lbl_8320A898;


void fn_82545810(int *param_1)

{
  bool bVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  
  puVar2 = (unsigned int *)*param_1;
  bVar1 = false;
  uVar3 = *puVar2 & 0xf;
  if (8 < uVar3 - 1) goto LAB_82545928;
  if (uVar3 == 2) {
    if (*(unsigned int **)(lbl_8320A898 + 0x3144) != puVar2) goto LAB_82545928;
  }
  else {
    if (uVar3 == 3) {
      puVar4 = (unsigned int *)(lbl_8320A898 + 0x31b0);
      lVar6 = 0x1a;
      do {
        if ((unsigned int *)*puVar4 == puVar2) {
          bVar1 = true;
        }
        puVar4 = puVar4 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    else if (uVar3 == 4) {
      bVar1 = *(unsigned int **)(lbl_8320A898 + 0x3148) == puVar2;
      if (*(unsigned int **)(lbl_8320A898 + 0x3158) == puVar2) {
        bVar1 = true;
      }
    }
    else {
      if (uVar3 == 5) {
        puVar5 = *(unsigned int **)(lbl_8320A898 + 0x2ed8);
      }
      else if (uVar3 == 6) {
        puVar5 = *(unsigned int **)(lbl_8320A898 + 0x3248);
      }
      else {
        if (uVar3 != 7) {
          if ((uVar3 == 8) || (uVar3 != 1)) {
            bVar1 = false;
          }
          else {
            puVar4 = (unsigned int *)(lbl_8320A898 + 0x315c);
            lVar6 = 0x10;
            do {
              if ((unsigned int *)*puVar4 == puVar2) {
                bVar1 = true;
              }
              puVar4 = puVar4 + 1;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          goto LAB_8254591c;
        }
        puVar5 = *(unsigned int **)(lbl_8320A898 + 0x3244);
      }
      bVar1 = puVar2 == puVar5;
    }
LAB_8254591c:
    if (!bVar1) goto LAB_82545928;
  }
  fn_82544E80();
LAB_82545928:
  fn_8262FEC8(*param_1);
  *param_1 = 0;
  return;
}

