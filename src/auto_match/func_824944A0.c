typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822315A0();
extern int fn_8223AAC0();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_824944A0(unsigned int *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  char cVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  char in_RESERVE;
  unsigned char in_cr0;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    piVar1 = *(int **)(*param_2 + 0x60);
    uVar9 = ZEXT48(piVar1);
    iVar2 = *(int *)(*param_2 + 0x5c);
    if (uVar9 != 0) {
      do {
        puVar6 = (unsigned int *)(uVar9 + 8);
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar6 + 1,0,uVar9 + 8);
          *puVar6 = uVar3;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    uVar8 = 0;
    iVar7 = 0;
    if (uVar9 != 0) {
      cVar4 = fn_8223AAC0(uVar9);
      in_cr0 = (cVar4 == '\0') << 1;
      if (cVar4 != '\0') {
        uVar8 = uVar9;
        iVar7 = iVar2;
      }
    }
    iVar2 = *param_4;
    if (uVar8 != 0) {
      fn_822315A0(uVar8);
    }
    if (uVar9 != 0) {
      do {
        puVar6 = (unsigned int *)(uVar9 + 8);
        lVar5 = (unsigned __int64)*puVar6 - 1;
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed(lVar5,0,uVar9 + 8);
          *puVar6 = uVar3;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if ((int)lVar5 == 0) {
        (**(int (***)())(*piVar1 + 4))(uVar9);
      }
    }
    in_cr0 = (iVar7 != iVar2) << 1;
    if (iVar7 == iVar2) break;
  }
  *param_1 = param_2;
  return param_1;
}

