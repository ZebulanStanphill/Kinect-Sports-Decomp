#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern int fn_82F68CC0();
extern unsigned int uStack_3e;


void fn_82AA75B8(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned char uVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned short uStack_3e;
  
  if (param_3 == 0x40001) {
    uVar6 = *param_2;
    *param_1 = uVar6 << 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 8 & 0xff00 | uVar6 >> 0x18;
  }
  else if (param_3 == 0x20001) {
    *(unsigned short *)param_1 = *(unsigned short *)param_2 >> 8 | *(unsigned short *)param_2 << 8;
  }
  else if (param_3 == 0x40002) {
    bVar2 = *(unsigned char *)((int)param_2 + 1);
    uStack_3e = CONCAT11(bVar2,*(unsigned char *)param_2);
    *(unsigned short *)param_1 =
         (unsigned short)(((unsigned int)(unsigned char)*param_2 << 0x18) >> 0x18) | (unsigned short)*(unsigned char *)((int)param_2 + 2) << 8
    ;
    *(unsigned short *)((int)param_1 + 2) = (unsigned short)bVar2 | uStack_3e << 8;
  }
  else {
    uVar3 = param_3 & 0xffff;
    uVar6 = param_3 >> 0x10;
    if (((param_3 & 0xffff) == 0) || (uVar3 == uVar6)) {
      if (uVar6 != 0) {
        fn_82F68CC0();
      }
    }
    else {
      uVar6 = uVar6 >> (0x20U - (int)LZCOUNT(uVar3 - 1) & 0x3f);
      uVar5 = (unsigned __int64)uVar6;
      if (param_1 == param_2) {
        uVar5 = (uVar5 + 1 & 0xffffffff) >> 1;
        if (uVar5 != 0) {
          param_2 = (unsigned int *)((uVar6 - 1) * uVar3 + (int)param_2);
          do {
            if ((param_3 & 0xffff) != 0) {
              uVar6 = uVar3;
              puVar4 = param_2;
              do {
                uVar1 = *(unsigned char *)(((int)param_1 - (int)param_2) + (int)puVar4);
                *(unsigned char *)(((int)param_1 - (int)param_2) + (int)puVar4) = *(unsigned char *)puVar4
                ;
                *(unsigned char *)puVar4 = uVar1;
                puVar4 = (unsigned int *)((int)puVar4 + 1);
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            uVar5 = uVar5 - 1;
            param_1 = (unsigned int *)((int)param_1 + uVar3);
            param_2 = (unsigned int *)((int)param_2 - uVar3);
          } while (uVar5 != 0);
        }
      }
      else if (uVar5 != 0) {
        param_2 = (unsigned int *)((uVar6 - 1) * uVar3 + (int)param_2);
        do {
          fn_82F68CC0(param_1,param_2,uVar3);
          uVar5 = uVar5 - 1;
          param_2 = (unsigned int *)((int)param_2 - uVar3);
          param_1 = (unsigned int *)((int)param_1 + uVar3);
        } while (uVar5 != 0);
      }
    }
  }
  return;
}

