extern int fn_82FA5060();
extern int fn_82FAFA90();
extern int fn_82FB0028();
extern int fn_82FB0530();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_831BC768;


unsigned __int64 fn_82FAFB18(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  __int64 lVar6;
  
  uVar3 = (unsigned int)param_3;
  if (uVar3 == 0) {
    fn_82FAFA90();
  }
  else {
    iVar2 = *(int *)(param_1 + 0x9c);
    uVar5 = 0;
    if (iVar2 == 0) {
      puVar1 = (unsigned int *)fn_82FA5060(lbl_831BC768,0x10);
      if (puVar1 == (unsigned int *)0x0) {
        puVar1 = (unsigned int *)0x0;
      }
      else {
        *puVar1 = &lbl_8217D040;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      *(unsigned int **)(param_1 + 0x9c) = puVar1;
      if ((puVar1 == (unsigned int *)0x0) ||
         (iVar2 = fn_82FB0028(puVar1 + 1,param_3), iVar2 != 1)) {
        return 2;
      }
    }
    else {
      *(unsigned int *)(iVar2 + 8) = *(unsigned int *)(iVar2 + 4);
    }
    if (uVar3 != 0) {
      do {
        iVar2 = fn_82FB0530((unsigned __int64)*(unsigned int *)(param_1 + 0x9c) + 4);
        if (iVar2 != 0) {
          puVar1 = (unsigned int *)(param_2 + -4);
          puVar4 = (unsigned int *)(iVar2 + -4);
          lVar6 = 5;
          do {
            puVar1 = puVar1 + 1;
            puVar4 = puVar4 + 1;
            *puVar4 = *puVar1;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        param_2 = param_2 + 0x14;
        if (iVar2 == 0) {
          return 2;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
    }
  }
  return 1;
}

