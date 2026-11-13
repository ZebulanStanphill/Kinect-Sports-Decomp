typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_40;
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8223B688();
extern int fn_822ABA88();
extern int fn_82397F30();
extern int fn_8247B210();
extern int fn_8260D428();
extern unsigned int uStack_30;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned __int64 storeWordConditionalIndexed();


bool fn_822EC248(int param_1,unsigned int *param_2)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  char in_RESERVE;
  unsigned char bVar7;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned char auStack_40 [16];
  unsigned int uStack_30;
  
  iVar4 = fn_82397F30(*(unsigned int *)(param_1 + 0x10));
  bVar7 = (iVar4 == 0) << 1;
  if (iVar4 != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x1c);
    iVar4 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),
                         *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x28) ^ 1);
    if (*(int *)(*(int *)(iVar4 + 0x110) + 0x18) == 2) {
      fn_8247B210(&uStack_50,*(int *)(iVar4 + 0x110) + 4,2);
      uVar6 = (unsigned __int64)uStack_4c;
      if (uVar6 != 0) {
        do {
          puVar5 = (unsigned int *)(uVar6 + 4);
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar5 + 1,0,uVar6 + 4);
            *puVar5 = uVar2;
            bVar7 = 2;
          }
        } while (!(bool)(bVar7 >> 1 & 1));
        fn_822315A0(uVar6);
      }
      fn_8223B688(auStack_40,(unsigned __int64)uStack_50 + 0x28);
      puVar3 = param_2 + 4;
      if (0xf < (unsigned int)param_2[5]) {
        param_2 = (unsigned int *)*param_2;
      }
      iVar4 = fn_8260D428(auStack_40,0,uStack_30,param_2,*puVar3);
      fn_82230300(auStack_40,1,0);
      if (uVar6 == 0) {
        return iVar4 == 0;
      }
      fn_822315A0(uVar6);
      return iVar4 == 0;
    }
  }
  return false;
}

