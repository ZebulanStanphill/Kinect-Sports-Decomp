extern unsigned int *auStack_5c;
extern int fn_825200A8();
extern int fn_8251F468();
extern int fn_82549610();
extern int fn_82549660();
extern int fn_8259C738();
extern int fn_825B49E8();
extern int fn_82A1BB18();
extern int fn_82A93C18();
extern int fn_82A93DE0();
extern int fn_82A93C18();
extern int iRam83296d40;


void fn_8256B398(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  unsigned int auStack_5c [23];

  if ((((*(int *)(param_1 + 0xc) == 0) &&
       (iVar1 = fn_825200A8(param_1 + 0x14,0xffffffff82196288), iVar1 == 0)) &&
      ((*(unsigned char *)(param_1 + 0x28) & 0x10) == 0)) && ((*(unsigned char *)(param_1 + 0x28) & 0x20) == 0)) {
    piVar3 = (int *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0x24) == 0) {
      if (piVar3 != (int *)0x0) {
        *piVar3 = 0;
      }
      iVar1 = *(int *)(param_1 + 8);
      iVar4 = *(int *)(*(int *)(iVar1 + 0x14) + 0x1c);
      if (iVar4 == 0) {
        iVar1 = *(int *)(iVar1 + 0x14);
        fn_82A93C18(*(unsigned short *)(iVar1 + 0x24),*(unsigned short *)(iVar1 + 0x26),
                          *(unsigned char *)(iVar1 + 0x30),0,*(unsigned int *)(iVar1 + 0x18),0,0,0);
      }
      else if (iVar4 == 2) {
        iVar1 = *(int *)(iVar1 + 0x14);
        fn_82A93DE0(*(unsigned short *)(iVar1 + 0x24),*(unsigned char *)(iVar1 + 0x30),0,
                          *(unsigned int *)(iVar1 + 0x18),1,0,0,0);
      }
      else if (iVar4 == 4) {
        iVar1 = *(int *)(iVar1 + 0x14);
        uVar2 = 0;
        auStack_5c[0] = 0;
        if (*(int *)(iVar1 + 0x38) != 0) {
          iVar4 = 0;
          do {
            fn_82A93C18(*(unsigned int *)(iVar4 + *(int *)(iVar1 + 0x44)),
                              *(unsigned int *)(*(int *)(iVar1 + 0x48) + iVar4),
                              *(unsigned int *)(iVar4 + *(int *)(iVar1 + 0x4c)),0,
                              *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + 0x18),0,0,0);
            if (piVar3 != (int *)0x0) {
              *piVar3 = *piVar3;
            }
            uVar2 = uVar2 + 1;
            iVar4 = iVar4 + 4;
          } while (uVar2 < *(unsigned int *)(iVar1 + 0x38));
        }
      }
      else if (iVar4 == 5) {
        iVar1 = *(int *)(iVar1 + 0x14);
        fn_82A93C18(*(unsigned short *)(iVar1 + 0x24),*(unsigned short *)(iVar1 + 0x26),
                          *(unsigned int *)(iVar1 + 0x38),*(unsigned char *)(iVar1 + 0x30),0,
                          *(unsigned int *)(iVar1 + 0x18),0,0);
      }
    }
    iVar1 = *piVar3;
    if (0 < iVar1) {
      fn_82549610(auStack_5c,0xffffffff83296d4c);
      if (iRam83296d40 == 0) {
        fn_82549660(0x200000,1);
      }
      iVar1 = fn_825B49E8(iRam83296d40,iVar1);
      fn_82A1BB18();
      fn_8259C738(auStack_5c[0]);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_8251F468(0xc);
      }
    }
  }
  return;
}
