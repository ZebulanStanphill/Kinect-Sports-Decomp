extern int fn_822B17A8();
extern int fn_8255B740();


void fn_822B1860(int param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  
  uVar5 = 1;
  if (param_2 != 0) {
    do {
      uVar4 = 0;
      uVar6 = 0;
      if (uVar5 == 1) {
        uVar4 = 5;
        uVar6 = 0x37;
      }
      else if (uVar5 == 2) {
        uVar4 = 6;
        uVar6 = 0x38;
      }
      else if (uVar5 == 3) {
        uVar4 = 7;
        uVar6 = 0x39;
      }
      else if (uVar5 == 4) {
        uVar4 = 8;
        uVar6 = 0x3a;
      }
      else if (uVar5 == 5) {
        uVar4 = 9;
        uVar6 = 0x3b;
      }
      fn_822B17A8(param_1,uVar4,1);
      uVar2 = 1 << ((unsigned int)uVar6 & 7);
      iVar3 = (int)(uVar6 >> 3);
      if ((uVar2 & 0xff & (unsigned int)*(unsigned char *)(*(int *)(*(int *)(param_1 + 0xf4) + 8) + iVar3)) == 0) {
        fn_8255B740(param_1,uVar6 - 0x36);
        iVar1 = *(int *)(*(int *)(param_1 + 0xf4) + 8);
        *(unsigned char *)(iVar1 + iVar3) = *(unsigned char *)(iVar1 + iVar3) | (unsigned char)uVar2;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 <= param_2);
  }
  return;
}

