extern unsigned int *auStack_4f;
extern char cRam83264344;
extern int fn_82F691F0();
extern int fn_82FA4EB8();
extern int fn_82FA57F0();
extern int fn_82FE7D90();
extern int fn_82FE7E50();
extern int fn_82FE8110();
extern int fn_82FEA7C0();
extern int fn_82FEBED0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_831BC76C;
extern unsigned int lbl_83264308;
extern unsigned int lbl_8326430C;
extern unsigned int lbl_83264318;
extern unsigned int lbl_8326431C;
extern unsigned int lbl_83265044;
extern unsigned int uRam83264310;
extern unsigned int uRam83264314;
extern unsigned int uRam83264320;
extern unsigned int uRam83264324;
extern unsigned int uRam83264328;
extern unsigned int uRam8326432c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_82FEAC00(int param_1,unsigned __int64 param_2)

{
  char cVar3;
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  unsigned char auStack_4f [79];
  
  lbl_831BC76C = 3;
  cVar3 = fn_82FA4EB8();
  if (cVar3 == '\0') {
    uVar1 = 0x4a;
  }
  else {
    if (lbl_83265044 != 0) {
      if (param_1 == 0) {
        lbl_8326430C = 0;
        uRam83264310 = 0xff;
        lbl_8326431C = lbl_82002AE0;
        uRam83264314 = 0xff;
        lbl_83264318 = 0x1000000;
        uRam83264320 = 0x40000;
        uRam83264324 = 0xffffffff;
        uRam83264328 = 0;
      }
      else {
        puVar5 = (unsigned int *)(param_1 + -4);
        puVar4 = &lbl_83264308;
        lVar6 = 8;
        do {
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = *puVar5;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      uRam8326432c = lbl_8326430C;
      fn_82FEBED0(param_2);
      if (cRam83264344 == '\0') {
        iVar2 = fn_82FE7D90();
        if (iVar2 == 1) {
          iVar2 = fn_82FEA7C0(param_1);
          if ((iVar2 == 1) && (iVar2 = fn_82FE7E50(), iVar2 == 1)) {
            cRam83264344 = '\x01';
          }
          else {
            fn_82FE8110();
          }
        }
        if ((cRam83264344 == '\0') && (lbl_831BC768 != -1)) {
          fn_82FA57F0();
          lbl_831BC768 = -1;
        }
      }
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_4f,0,0x23);
    }
    uVar1 = 0x4b;
  }
  return uVar1;
}

