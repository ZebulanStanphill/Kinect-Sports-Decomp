extern unsigned int *auStack_230;
extern unsigned int *auStack_240;
extern int fn_82CE5410();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern unsigned int *lbl_8323B464;


void fn_82D11E18(int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 in_r0;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned char auStack_240 [16];
  unsigned char auStack_230 [512];
  
  if (param_2 == 0) {
    return;
  }
  iVar3 = 0;
  if (0 < param_1[1]) {
    puVar5 = (unsigned int *)*param_1;
    do {
      if ((*puVar5 <= param_2) && (param_2 <= *puVar5 + 0x8b8)) {
        uVar1 = ((unsigned int *)*param_1)[iVar3];
        iVar4 = *(int *)(uVar1 + 0x904) + -1;
        *(int *)(uVar1 + 0x904) = iVar4;
        if (iVar4 != 0) {
          return;
        }
        uVar2 = *(unsigned int *)(iVar3 * 4 + *param_1);
        iVar4 = fn_82CE5410();
        (**(int (***)())(**(int **)(iVar4 + 0x10) + 8))(*(int **)(iVar4 + 0x10),uVar2,0x908);
        iVar4 = param_1[1] + -1;
        param_1[1] = iVar4;
        if (iVar4 == iVar3) {
          return;
        }
        *(unsigned int *)(*param_1 + iVar3 * 4) = *(unsigned int *)(iVar4 * 4 + *param_1);
        return;
      }
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar3 < param_1[1]);
  }
  fn_82CEE578(auStack_240,auStack_230,0x200);
  fn_82CEDB38(auStack_240,0xffffffff82134614);
  iVar3 = (**(int (***)())(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,3,0xffffffff90355365,auStack_230,0xffffffff821345b8,0xa3);
  if (iVar3 != 0) {
    trapWord(0x1f,in_r0,0x16);
  }
                    /* WARNING: Subroutine does not return */
  fn_82CED958(auStack_240);
}

