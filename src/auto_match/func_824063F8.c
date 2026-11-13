typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_824060E8();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_824063F8(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  char cVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  int *piStack_30;
  int *piStack_2c;
  
  if (*(int *)(param_1 + 0xc) == 2) {
    *(unsigned int *)(param_1 + 0xc) = param_2;
  }
  fn_824060E8(&piStack_30,param_1 + 4);
  uVar6 = ZEXT48(piStack_2c);
  uVar5 = 0;
  piVar7 = (int *)0x0;
  if (uVar6 != 0) {
    cVar2 = fn_8223AAC0(uVar6);
    in_cr0 = (cVar2 == '\0') << 1;
    if (cVar2 != '\0') {
      uVar5 = uVar6;
      piVar7 = piStack_30;
    }
  }
  (**(int (***)())(*piVar7 + 0x14))(piVar7);
  if (uVar5 != 0) {
    fn_822315A0(uVar5);
  }
  if (uVar6 != 0) {
    do {
      puVar4 = (unsigned int *)(uVar6 + 8);
      lVar3 = (unsigned __int64)*puVar4 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar3,0,uVar6 + 8);
        *puVar4 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar3 == 0) {
      (**(int (***)())(*piStack_2c + 4))(uVar6);
    }
  }
  return;
}

