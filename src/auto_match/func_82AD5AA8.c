#define true 1
extern int fn_82AA66A8();
extern int fn_82ABDAA0();
extern int fn_82AD1400();
extern int fn_82ADD198();


int fn_82AD5AA8(unsigned __int64 param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  char cVar4;
  int iVar3;
  unsigned int uVar5;
  int iVar6;
  
  iVar2 = fn_82ADD198(param_1,param_3);
  uVar5 = *(unsigned int *)(param_2 + 0x1c);
  uVar1 = *(unsigned int *)((param_2 & 0xfffffffe) + 0x24);
  if ((uVar1 & 1) != 0) goto LAB_82ad5bb8;
  do {
    iVar6 = (uVar1 & 0xfffffffe) - 0x28;
joined_r0x82ad5aec:
    for (; iVar6 != 0; iVar6 = (*(unsigned int *)(iVar6 + 0x24) & 0xfffffffe) - 0x28) {
      cVar4 = fn_82ABDAA0(iVar6);
      if (cVar4 != '\0') {
        if ((*(unsigned int *)(iVar6 + 8) >> 0x17 & 1) != 0) {
          cVar4 = fn_82ABDAA0(iVar6);
          if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          iVar3 = fn_82ADD198(param_1,*(unsigned short *)(iVar6 + 0x12));
          if (iVar3 == iVar2) {
            return iVar6;
          }
        }
        iVar3 = fn_82AD1400(param_1,iVar6);
        if ((iVar3 != 0) && ((*(unsigned int *)(iVar3 + 8) >> 0x17 & 1) != 0)) {
          cVar4 = fn_82ABDAA0(iVar3);
          if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          iVar3 = fn_82ADD198(param_1,*(unsigned short *)(iVar3 + 0x12));
          if (iVar3 == iVar2) {
            return iVar6;
          }
        }
      }
      if ((*(unsigned int *)(iVar6 + 0x24) & 1) != 0) break;
    }
    if ((*(unsigned int *)(uVar5 & 0xfffffffe) & 1) != 0) {
LAB_82ad5be4:
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    uVar1 = *(unsigned int *)(uVar5 & 0xfffffffe) & 0xfffffffe;
    uVar5 = uVar1 - 4;
    if (uVar5 == 0) goto LAB_82ad5be4;
    if ((*(unsigned int *)(uVar1 + 0x18) & 1) != 0) {
LAB_82ad5bb8:
      iVar6 = 0;
      goto joined_r0x82ad5aec;
    }
    uVar1 = *(unsigned int *)(uVar1 + 0x14);
  } while( true );
}

