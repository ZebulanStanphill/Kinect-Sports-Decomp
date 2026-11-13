extern int fn_82A93C18();
extern int fn_82A93DE0();
extern int fn_82A93C18();


/* WARNING: Removing unreachable block (ram,0x82838848) */
/* WARNING: Removing unreachable block (ram,0x82838940) */
/* WARNING: Removing unreachable block (ram,0x82838988) */
/* WARNING: Removing unreachable block (ram,0x82838934) */
/* WARNING: Removing unreachable block (ram,0x82838840) */
/* WARNING: Removing unreachable block (ram,0x82838990) */

void fn_828387E0(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;

  uVar1 = *(unsigned int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x30) != '\0') {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 == 0) {
      fn_82A93C18(*(unsigned short *)(param_1 + 0x24),*(unsigned short *)(param_1 + 0x26),
                        *(unsigned char *)(param_2 + 0x30),0,*(unsigned int *)(param_1 + 0x18),0,uVar1,
                        *(unsigned int *)(param_2 + 0x2c));
    }
    else if (iVar3 == 2) {
      fn_82A93DE0(*(unsigned short *)(param_1 + 0x24),*(unsigned char *)(param_2 + 0x30),0,
                        *(unsigned int *)(param_1 + 0x18),0,uVar1,*(unsigned int *)(param_2 + 0x2c),
                        *(unsigned int *)(param_1 + 0x34));
    }
    else if (iVar3 == 4) {
      uVar2 = 0;
      if (*(int *)(param_1 + 0x38) != 0) {
        iVar3 = 0;
        do {
          fn_82A93C18(*(unsigned int *)(iVar3 + *(int *)(param_1 + 0x44)),
                            *(unsigned int *)(*(int *)(param_1 + 0x48) + iVar3),
                            *(unsigned int *)(iVar3 + *(int *)(param_2 + 0x4c)),0,
                            *(unsigned int *)(param_1 + 0x18),0,
                            *(unsigned int *)(*(int *)(param_1 + 0x3c) + iVar3),
                            *(unsigned int *)(*(int *)(param_2 + 0x40) + iVar3));
          uVar2 = uVar2 + 1;
          *(unsigned int *)(*(int *)(param_1 + 0x4c) + iVar3) =
               *(unsigned int *)(iVar3 + *(int *)(param_2 + 0x4c));
          iVar3 = iVar3 + 4;
        } while (uVar2 < *(unsigned int *)(param_1 + 0x38));
      }
    }
    else {
      if (iVar3 != 5) {
        return;
      }
      fn_82A93C18(*(unsigned short *)(param_1 + 0x24),*(unsigned short *)(param_1 + 0x26),
                        *(unsigned int *)(param_1 + 0x38),*(unsigned char *)(param_2 + 0x30),0,
                        *(unsigned int *)(param_1 + 0x18),0,uVar1);
    }
    *(unsigned char *)(param_1 + 0x30) = *(unsigned char *)(param_2 + 0x30);
  }
  return;
}
