extern unsigned int *auStack_40;
extern int fn_82ACA5E0();
extern int fn_82AF8968();


__int64 fn_82AF8E30(unsigned __int64 param_1,int param_2,int param_3,unsigned __int64 *param_4)

{
  unsigned int uVar1;
  char cVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 auStack_40 [2];
  
  *(unsigned int *)(param_4 + 1) = *(unsigned int *)(param_4 + 1) & 0xffffffe0;
  uVar5 = 0;
  cVar2 = fn_82ACA5E0(param_2);
  if (cVar2 == '\0') {
    uVar3 = *(unsigned int *)(param_2 + 8) >> 1;
    uVar6 = 0;
    uVar7 = 0;
    uVar1 = *(unsigned int *)(param_3 + 8) >> 1;
    if ((uVar3 & 3) != 0) {
      uVar6 = 2;
    }
    if ((uVar3 & 0xc) != 0) {
      uVar6 = uVar6 + 2;
    }
    if ((uVar1 & 3) != 0) {
      uVar7 = 2;
    }
    if ((uVar1 & 0xc) != 0) {
      uVar7 = uVar7 + 2;
    }
  }
  else {
    uVar6 = (unsigned __int64)(*(unsigned int *)(param_2 + 8) >> 0xe) & 7;
    uVar7 = (unsigned __int64)(*(unsigned int *)(param_3 + 8) >> 0xe) & 7;
    fn_82AF8968(param_1,param_2,param_3,param_4);
    if ((param_4[1] & 0x1f00000000) != 0) {
      uVar5 = 0;
      uVar3 = 0;
      auStack_40[0] = *param_4;
      if ((param_4[1] & 0x1f00000000) != 0) {
        uVar4 = 0;
        do {
          uVar3 = uVar3 + 1;
          uVar5 = (unsigned int)(1 << ((unsigned int)(((2L << (uVar4 + 3 & 0x3f)) - 1U &
                                       *(unsigned __int64 *)
                                        ((int)auStack_40 + ((unsigned int)uVar4 >> 3 & 0x1ffffff8)) &
                                      -1L << (uVar4 & 0x3f)) >> (uVar4 & 0x3f)) & 3)) | uVar5;
          uVar4 = uVar4 + 4;
        } while (uVar3 < (*(unsigned int *)(param_4 + 1) & 0x1f));
      }
      uVar5 = ((0x8da691691448U >> (uVar5 & 0x7f)) >> (uVar5 & 0x7f)) >> (uVar5 & 0x7f) & 7;
    }
  }
  *(unsigned int *)(param_4 + 1) = (unsigned int)(uVar5 << 5) | *(unsigned int *)(param_4 + 1) & 0xffffff1f;
  return (uVar7 - uVar5) + uVar6;
}

