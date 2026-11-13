#define true 1
extern unsigned int fStack_60;
extern int fn_82AA66A8();
extern int fn_82AEFCD8();
extern int fn_82AF4BA8();
extern int fn_82B86888();
extern unsigned int lbl_821AAD20;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82AF6CC8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  float *pfVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  int *piVar7;
  double dVar8;
  float fStack_60;
  float afStack_5c [23];
  
  uVar6 = 0;
  dVar8 = (double)lbl_821AAD20;
  piVar7 = (int *)(param_2 + 0x2c);
  do {
    if ((*(unsigned int *)(param_2 + 8) >> 0x13 & 7) <= uVar6) {
      return;
    }
    puVar1 = (unsigned int *)*piVar7;
    if ((*(unsigned int *)(puVar1[3] + 8) & 0x3f80) == 16000) {
      uVar3 = *puVar1;
      fn_82AF4BA8(param_1,puVar1[3],uVar3 >> 0x19 & 7,uVar3 >> 5 & 0xff,uVar3 & 0x1f,&fStack_60);
      uVar3 = fn_82B86888(param_1,*puVar1 >> 0x19 & 7,&fStack_60,0);
      puVar5 = (unsigned int *)(puVar1[3] + 4);
      for (puVar2 = (unsigned int *)*puVar5; puVar2 != puVar1; puVar2 = (unsigned int *)puVar2[2]) {
        puVar5 = puVar2 + 2;
      }
      *puVar5 = puVar1[2];
      puVar1[2] = *(unsigned int *)(uVar3 + 4);
      *(unsigned int **)(uVar3 + 4) = puVar1;
      puVar1[3] = uVar3;
      *puVar1 = *puVar1 & 0xffffe01f | 0x1c80;
      fn_82AEFCD8(uVar3);
      *(unsigned int *)(uVar3 + 8) = *(unsigned int *)(uVar3 + 8) | 0x1000000;
      if ((param_3 & 4) == 0) {
        uVar3 = *puVar1 & 0xffffffe0;
      }
      else {
        if ((double)fStack_60 < dVar8) {
          uVar3 = 1;
          if (0x2000000 < (*puVar1 & 0xe000000)) {
            pfVar4 = afStack_5c;
            do {
              if (dVar8 < (double)*pfVar4) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0x12c0);
              }
              uVar3 = uVar3 + 1;
              pfVar4 = pfVar4 + 1;
            } while (uVar3 < (*puVar1 >> 0x19 & 7));
          }
          *puVar1 = *puVar1 & 0xffffffe0 | 6;
          goto LAB_82af6e3c;
        }
        uVar3 = *puVar1 & 0xffffffe0 | 2;
      }
      *puVar1 = uVar3;
    }
LAB_82af6e3c:
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 1;
  } while( true );
}

