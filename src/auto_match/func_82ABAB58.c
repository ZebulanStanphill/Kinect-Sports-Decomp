#define true 1


unsigned int fn_82ABAB58(unsigned int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0x10;
  do {
    uVar1 = param_1 >> (uVar5 & 0x3f);
    uVar2 = uVar1 & 3;
    if ((uVar1 & 3) == 0) {
LAB_82abab9c:
      iVar6 = 0;
    }
    else if (uVar2 == 1) {
      iVar6 = 1;
    }
    else if (uVar2 < 3) {
      iVar6 = 2;
    }
    else {
      if (uVar2 != 3) goto LAB_82abab9c;
      iVar6 = 3;
    }
    uVar5 = uVar5 + 2;
    uVar3 = iVar6 << (uVar4 & 0x3f) | uVar3;
    uVar4 = uVar4 + 4;
    if (0x17 < uVar5) {
      return uVar3;
    }
  } while( true );
}

