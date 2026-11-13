extern int fn_82FA5060();
extern int fn_8300CE00();
extern int fn_8300CE88();
extern int fn_8300CF30();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_82FB7AC0(int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int *piVar4;
  
  *param_1 = param_2;
  *(unsigned char *)((int)param_1 + 6) =
       (unsigned char)(LZCOUNT((unsigned int)*(unsigned short *)(param_2 + 0xc)) << 1) & 0x40 | 0x80 |
       *(unsigned char *)((int)param_1 + 6) & 0x3f;
  *(unsigned short *)(param_1 + 1) = *(unsigned short *)(param_2 + 0xc);
  uVar1 = *(unsigned int *)(param_2 + 0x1c);
  if (uVar1 < 4) {
    if (uVar1 == 0) {
      iVar3 = fn_82FA5060(lbl_831BC768,0x10);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_8300CE88();
      }
      param_1[2] = iVar3;
      if (iVar3 != 0) {
        return 1;
      }
    }
    else {
      if ((uVar1 == 1) || (uVar1 != 2)) {
        *(unsigned char *)((int)param_1 + 6) = *(unsigned char *)((int)param_1 + 6) | 0x40;
        return 1;
      }
      uVar2 = fn_82FA5060(lbl_831BC768,0x2c);
      if ((uVar2 & 0xffffffff) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_8300CF30(uVar2,*(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10) >> 2 & 0xffff
                            );
      }
      param_1[2] = (int)uVar2;
      if ((uVar2 & 0xffffffff) != 0) {
        iVar3 = fn_8300CE00(uVar2,*(unsigned short *)(param_2 + 0x28));
        if (iVar3 == 1) {
          if (*(char *)(param_2 + 0x24) == '\0') {
            return 1;
          }
          iVar3 = 0;
          for (piVar4 = *(int **)(param_2 + 0x10); piVar4 != *(int **)(param_2 + 0x14);
              piVar4 = piVar4 + 1) {
            iVar3 = (unsigned int)*(unsigned short *)(*piVar4 + 0xe) + iVar3;
          }
          *(int *)(param_1[2] + 0x10) = iVar3;
          *(int *)(param_1[2] + 0xc) = iVar3;
          return 1;
        }
        (**(int (***)())(*(int *)param_1[2] + 4))();
        param_1[2] = 0;
      }
    }
  }
  return 2;
}

