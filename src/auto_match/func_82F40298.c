#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82F68CC0();
extern unsigned int uStack_38;
extern unsigned int uStack_40;


unsigned __int64 fn_82F40298(int *param_1,int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uStack_40;
  unsigned __int64 uStack_38;
  
  if (param_1[3] == 0) {
    uVar3 = 0xffffffffc00d36b6;
  }
  else if ((param_4 == (unsigned int *)0x0) || ((param_3 != 0 && (param_2 == 0)))) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    (**(int (***)())(*param_1 + 0x14))(param_1,&uStack_40,0);
    if (uStack_40 < 0x100000000) {
      *param_4 = (unsigned int)uStack_40;
      if (param_3 < (unsigned int)uStack_40) {
        return 0xffffffffc00d36b1;
      }
      uStack_38 = *(unsigned __int64 *)(param_1 + 6);
      uStack_40 = CONCAT44((unsigned int)*(unsigned char *)((int)param_1 + 0x13) << 0x18 |
                           (unsigned int)*(unsigned char *)((int)param_1 + 0x12) << 0x10 |
                           (unsigned int)*(unsigned char *)((int)param_1 + 0x11) << 8 | (unsigned int)*(unsigned char *)(param_1 + 4),
                           CONCAT22(*(unsigned short *)(param_1 + 5) << 8 | *(unsigned short *)(param_1 + 5) >> 8,
                                    *(unsigned short *)((int)param_1 + 0x16) << 8 |
                                    *(unsigned short *)((int)param_1 + 0x16) >> 8));
      fn_82F68CC0(param_2,&uStack_40,0x10);
      uVar1 = *(unsigned __int64 *)(param_1 + 8);
      uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar1)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar1 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      *(unsigned __int64 *)(param_2 + 0x10) =
           ((uVar1 & 0xff) << 0x18 |
           (uVar1 & 0xff00) << 8 |
           (unsigned __int64)((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18)) <<
           0x20 | ((unsigned __int64)(((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                  ((unsigned __int64)(((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                  (unsigned __int64)((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18);
      uStack_38 = *(unsigned __int64 *)(param_1 + 0x14);
      uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(CONCAT22(*(unsigned short *)(param_1 + 0x13) << 8 | *(unsigned short *)(param_1 + 0x13) >> 8,
                    *(unsigned short *)((int)param_1 + 0x4e) << 8 | *(unsigned short *)((int)param_1 + 0x4e) >> 8))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      uStack_40 = CONCAT44((unsigned int)*(unsigned char *)((int)param_1 + 0x4b) << 0x18 |
                           (unsigned int)*(unsigned char *)((int)param_1 + 0x4a) << 0x10 |
                           (unsigned int)*(unsigned char *)((int)param_1 + 0x49) << 8 |
                           (unsigned int)*(unsigned char *)(param_1 + 0x12),(((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF));
      fn_82F68CC0(param_2 + 0x18,&uStack_40,0x10);
      *(unsigned short *)(param_2 + 0x28) =
           *(unsigned short *)(param_1 + 0x16) << 8 | *(unsigned short *)(param_1 + 0x16) >> 8;
      if (0x2d < *(unsigned __int64 *)(param_1 + 8)) {
        uVar2 = (int)*(unsigned __int64 *)(param_1 + 8) - 0x2e;
        *(unsigned int *)(param_2 + 0x2a) =
             uVar2 * 0x1000000 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00 | uVar2 >> 0x18;
        return 0;
      }
    }
    uVar3 = 0xffffffffc00d3a9a;
  }
  return uVar3;
}

