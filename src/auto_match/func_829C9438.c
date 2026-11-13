typedef unsigned char bool;
extern int fn_8264D1C8();
extern unsigned int lbl_8321501C;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_829C9438(__int64 param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 in_r7;
  unsigned __int64 in_r8;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned __int64 in_MSR;
  char in_RESERVE;
  unsigned char in_cr0;
  
  sync(0);
  do {
    puVar4 = (unsigned int *)(param_1 + 0x24);
    uVar3 = (unsigned __int64)*puVar4 + 1;
    if (in_RESERVE != '\0') {
      uVar5 = storeWordConditionalIndexed(uVar3,0,param_1 + 0x24);
      *puVar4 = uVar5;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if ((uVar3 & 0xffffffff) == 2) {
    puVar1 = (unsigned int *)param_1;
    fn_8264D1C8(lbl_8321501C,*puVar1,puVar1[1],puVar1[2],in_r7,in_r8,in_MSR);
    if (puVar1[3] != 0) {
      if (puVar1[7] == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(unsigned int *)puVar1[7];
      }
      fn_8264D1C8(lbl_8321501C,puVar1[3],uVar2,0);
      uVar3 = 1;
      uVar5 = 0;
      do {
        if ((puVar1[7] == 0) || (((unsigned int)puVar1[8] & uVar3) == 0)) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(unsigned int *)(puVar1[7] + uVar5 + 4);
        }
        fn_8264D1C8(lbl_8321501C,*(unsigned int *)((int)puVar1 + uVar5 + 0x10),uVar2,0);
        uVar5 = uVar5 + 4;
        uVar3 = (uVar3 & 0x7fffffff) << 1 | uVar3 >> 0x1f;
      } while (uVar5 < 0xc);
    }
    *puVar1 = 0;
    puVar1[3] = 0;
  }
  return;
}

