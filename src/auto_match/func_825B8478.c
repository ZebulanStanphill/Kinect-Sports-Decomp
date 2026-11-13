extern int fn_82230040();
extern int fn_8251FA58();
extern int fn_825B8B40();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern unsigned int lbl_82002B04;
extern unsigned int *lbl_83297038;
extern unsigned int uStack_24;


unsigned __int64 fn_825B8478(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned char **ppuVar3;
  unsigned char ***pppuVar4;
  unsigned char **appuStack_30 [2];
  unsigned char **ppuStack_28;
  unsigned int uStack_24;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      appuStack_30[0] = lbl_83297038;
      ppuVar3 = (unsigned char **)lbl_83297038[1];
      while (*(char *)((int)ppuVar3 + 0x11) == '\0') {
        if (ppuVar3[3] < param_1) {
          ppuVar3 = (unsigned char **)ppuVar3[2];
        }
        else {
          appuStack_30[0] = ppuVar3;
          ppuVar3 = (unsigned char **)*ppuVar3;
        }
      }
      if ((appuStack_30[0] == lbl_83297038) || (param_1 < appuStack_30[0][3])) {
        ppuStack_28 = lbl_83297038;
        pppuVar4 = &ppuStack_28;
      }
      else {
        pppuVar4 = appuStack_30;
      }
      if (*pppuVar4 == lbl_83297038) {
        puVar2 = (unsigned int *)fn_8265C9E0(0x14);
        if (puVar2 == (unsigned int *)0x0) {
          uStack_24 = 0;
          ppuStack_28 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
          fn_82230040(&ppuStack_28);
        }
        *puVar2 = lbl_83297038;
        puVar2[1] = lbl_83297038;
        ppuVar3 = lbl_83297038;
        *(unsigned char *)(puVar2 + 4) = 0;
        *(unsigned char *)((int)puVar2 + 0x11) = 0;
        puVar2[2] = ppuVar3;
        if (puVar2 + 3 != (unsigned int *)0x0) {
          puVar2[3] = param_1;
        }
        fn_825B8B40(appuStack_30);
      }
      return 0;
    }
    if (uVar1 < 3) {
      if (*(char *)(param_1 + 4) == '\0') {
        sync(1);
        *(unsigned char *)(param_1 + 4) = 1;
      }
      fn_8251FA58(param_1[1]);
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else if (uVar1 != 3) {
      sync(1);
      goto code_r0x825b84b0;
    }
    *param_1 = 0;
  }
code_r0x825b84b0:
  fn_8265CA20(param_1);
  return 1;
}

