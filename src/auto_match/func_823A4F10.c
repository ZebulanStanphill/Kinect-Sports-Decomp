typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_822AA770();
extern int fn_82359698();
extern int fn_82359C70();
extern int fn_82399BA0();
extern int fn_8239FF60();
extern int fn_823A52F0();
extern int fn_823A53F0();
extern int fn_8288B760();


void fn_823A4F10(double param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  
  iVar1 = *(int *)(param_2 + 8);
  if ((*(int *)(iVar1 + 0x58) != *(int *)(iVar1 + 0x54)) && (*(int *)(iVar1 + 0x58) != 0)) {
    return;
  }
  *(float *)(iVar1 + 0x208) = (float)((double)*(float *)(iVar1 + 0x208) + param_1);
  fn_82359C70(param_2 + 0xc);
  iVar3 = *(int *)(param_2 + 0x20);
  if (iVar3 == 3) {
    if (*(int *)(iVar1 + 0x178) != 1) {
      return;
    }
    fn_823A53F0(param_2);
    return;
  }
  if (iVar3 == 4) {
    uVar5 = 4;
    goto LAB_823a503c;
  }
  if (iVar3 != 5) {
    return;
  }
  iVar3 = fn_82399BA0(iVar1);
  if (iVar3 != 0) {
    if (*(int *)(iVar1 + 0x178) == 0) {
      if ((*(int *)(iVar1 + 0xa0) == 0) || (*(int *)(*(int *)(iVar1 + 0xa0) + 0x40) != 1)) {
        iVar3 = (**(int (***)())(**(int **)(iVar1 + 0x2e0) + 0x34))();
        iVar3 = fn_822AA770(*(unsigned int *)(**(int **)(iVar1 + 8) + iVar3 * 4));
        if (iVar3 == 0) {
LAB_823a500c:
          bVar2 = false;
        }
        else {
          if (*(int *)(iVar3 + 0x168) == 0) {
            uVar4 = *(unsigned int *)(iVar3 + 0x16c);
          }
          else {
            uVar4 = fn_8288B760();
            uVar4 = uVar4 & 0xff;
          }
          bVar2 = true;
          if (uVar4 == 0) goto LAB_823a500c;
        }
        if ((unsigned char)(!bVar2 + 7U) < 0x1d) {
          fn_8239FF60(*(unsigned int *)(*(int *)(param_2 + 8) + 0x2dc));
        }
      }
    }
    else {
      fn_823A52F0(param_2);
    }
  }
  uVar5 = 9;
LAB_823a503c:
  fn_82359698(iVar1,uVar5);
  return;
}

