typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822C1A38();
extern int fn_822C9EF8();
extern int fn_822DBD60();
extern int fn_823B3808();
extern int fn_82536690();
extern int fn_8256E1D8();
extern unsigned int lbl_82002B14;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_c0;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_822C9BF8(unsigned int *param_1,__int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar4;
  char cVar7;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  char in_RESERVE;
  unsigned char bVar12;
  unsigned int uStack0000001c;
  unsigned int uStack_c0;
  int *piStack_bc;
  unsigned char **ppuStack_b8;
  char *pcStack_b4;
  unsigned int auStack_b0 [8];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [112];
  
  iVar1 = param_1[1];
  uVar2 = *param_1;
  uStack0000001c = (unsigned int)param_2;
  if (iVar1 != 0) {
    cVar7 = fn_8223AAC0(iVar1);
    bVar12 = (cVar7 == '\0') << 1;
    if (cVar7 != '\0') {
      uStack_c0 = 0;
      piStack_bc = (int *)0x0;
      fn_8256E1D8(&uStack_c0,uVar2,iVar1);
      uVar5 = fn_823B3808(auStack_70,param_3);
      fn_822C1A38(param_2);
      piVar4 = piStack_bc;
      uVar10 = ZEXT48(piStack_bc);
      fn_8256E1D8(param_2,uStack_c0,uVar10);
      uVar11 = param_2 + 8;
      uVar6 = fn_823B3808(auStack_90,uVar5);
      if ((uVar11 & 0xffffffff) != (uVar6 & 0xffffffff)) {
        auStack_b0[0] = 0;
        fn_822C9EF8(auStack_b0,uVar6);
        fn_822C9EF8(uVar6,uVar11);
        fn_822C9EF8(uVar11,auStack_b0);
        fn_822DBD60(auStack_b0);
      }
      fn_822DBD60(auStack_90);
      if (uVar10 != 0) {
        do {
          puVar9 = (unsigned int *)(uVar10 + 8);
          lVar8 = (unsigned __int64)*puVar9 - 1;
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed(lVar8,0,uVar10 + 8);
            *puVar9 = uVar3;
            bVar12 = 2;
          }
        } while (!(bool)(bVar12 >> 1 & 1));
        if ((int)lVar8 == 0) {
          (**(int (***)())(*piVar4 + 4))(uVar10);
        }
      }
      fn_822DBD60(uVar5);
      fn_822315A0(iVar1);
      fn_82536690(param_1 + 2,&stack0x0000001c);
      fn_822DBD60(param_3);
      return;
    }
  }
  pcStack_b4 = "unknown";
  ppuStack_b8 = &lbl_82002B14;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_b8);
}

