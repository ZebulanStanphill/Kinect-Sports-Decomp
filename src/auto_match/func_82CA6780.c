extern int fn_82C4E5E8();
extern int fn_82CA4F58();


unsigned __int64 fn_82CA6780(int param_1,unsigned int *param_2)

{
  unsigned __int64 *puVar1;
  unsigned char uVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  
  if (*(unsigned int *)(param_1 + 0xfc4) == 0) {
    if (*(int *)(param_1 + 0x1dc) == 0) {
      uVar3 = fn_82CA4F58(param_1,0);
      *(unsigned char *)(param_2 + 1) = uVar3;
    }
    else {
      puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar7 = 1;
      lVar6 = 0;
      uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar5 = uVar4 + 0x10;
      if ((uVar5 & 0xffffffff) == 0) {
        do {
          if ((uVar5 & 0xffffffff) == 0) break;
          uVar7 = uVar7 - uVar5;
          *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
          lVar6 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar7 & 0x3f))
                  + lVar6;
          *puVar1 = *puVar1 << (uVar5 & 0x7f);
          if ((__int64)(uVar4 - uVar5) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
          uVar5 = uVar4 + 0x10;
        } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
      }
      uVar5 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar7);
      *puVar1 = uVar5 << (uVar7 & 0x7f);
      if ((__int64)(uVar4 - uVar7) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar5 >> (0x40 - uVar7 & 0x7f) & 0xffffffff) + lVar6 & 0xffffffff) == 0) {
        *(char *)(param_2 + 1) =
             (char)*(unsigned int *)(param_1 + 0xf8) * '\x02' + (char)*(unsigned int *)(param_1 + 0xfc)
             + -1;
      }
      else {
        *(char *)(param_2 + 1) = (char)*(unsigned int *)(param_1 + 0xfcc) * '\x02' + -1;
      }
    }
  }
  else if ((*param_2 >> 0xc & *(unsigned int *)(param_1 + 0xfc4) & 0xf) == 0) {
    *(char *)(param_2 + 1) =
         (char)*(unsigned int *)(param_1 + 0xf8) * '\x02' + (char)*(unsigned int *)(param_1 + 0xfc) + -1
    ;
  }
  else {
    *(char *)(param_2 + 1) = (char)*(unsigned int *)(param_1 + 0xfcc) * '\x02' + -1;
  }
  if ((*(unsigned char *)(param_2 + 1) == 0) || (uVar2 = 0, 0x3e < *(unsigned char *)(param_2 + 1))) {
    uVar2 = 1;
  }
  return uVar2;
}

