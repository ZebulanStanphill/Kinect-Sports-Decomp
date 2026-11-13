typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_824060E8();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_824066B8(int param_1,int param_2)

{
  unsigned int uVar1;
  char cVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int *piVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  int *piStack_30;
  int *piStack_2c;
  
  uVar1 = *(unsigned int *)(param_2 + 0xc);
  if (*(int *)(param_1 + 0x2c) == 0) {
    if ((uVar1 < 3) || ((5 < uVar1 && (uVar1 == 6)))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else if ((uVar1 < 3) || (uVar1 == 6)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  if (*(int *)(param_1 + 0xc) == 2) {
    *(unsigned int *)(param_1 + 0xc) = uVar3;
  }
  fn_824060E8(&piStack_30,param_1 + 4);
  uVar7 = ZEXT48(piStack_2c);
  uVar6 = 0;
  piVar8 = (int *)0x0;
  if (uVar7 != 0) {
    cVar2 = fn_8223AAC0(uVar7);
    in_cr0 = (cVar2 == '\0') << 1;
    if (cVar2 != '\0') {
      uVar6 = uVar7;
      piVar8 = piStack_30;
    }
  }
  (**(int (***)())(*piVar8 + 0x14))(piVar8);
  if (uVar6 != 0) {
    fn_822315A0(uVar6);
  }
  if (uVar7 != 0) {
    do {
      puVar5 = (unsigned int *)(uVar7 + 8);
      lVar4 = (unsigned __int64)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar4,0,uVar7 + 8);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar4 == 0) {
      (**(int (***)())(*piStack_2c + 4))(uVar7);
    }
  }
  return;
}

