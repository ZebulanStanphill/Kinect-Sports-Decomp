#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82F68CC0();
extern unsigned int uStack_38;
extern unsigned int uStack_40;


unsigned __int64 fn_82E621E8(int *param_1,int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uStack_40;
  unsigned __int64 uStack_38;
  
  if (param_1[3] == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else if ((param_4 == (unsigned int *)0x0) || ((param_3 != 0 && (param_2 == 0)))) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    (**(int (***)())(*param_1 + 0x14))(param_1,&uStack_40,0);
    if (uStack_40 < 0x100000000) {
      *param_4 = (unsigned int)uStack_40;
      if (param_3 < (unsigned int)uStack_40) {
        uVar1 = 0xffffffffc00d36b1;
      }
      else {
        uStack_38 = *(unsigned __int64 *)(param_1 + 6);
        uStack_40 = CONCAT44((unsigned int)*(unsigned char *)((int)param_1 + 0x13) << 0x18 |
                             (unsigned int)*(unsigned char *)((int)param_1 + 0x12) << 0x10 |
                             (unsigned int)*(unsigned char *)((int)param_1 + 0x11) << 8 |
                             (unsigned int)*(unsigned char *)(param_1 + 4),
                             CONCAT22(*(unsigned short *)(param_1 + 5) << 8 | *(unsigned short *)(param_1 + 5) >> 8,
                                      *(unsigned short *)((int)param_1 + 0x16) << 8 |
                                      *(unsigned short *)((int)param_1 + 0x16) >> 8));
        fn_82F68CC0(param_2,&uStack_40,0x10);
        uVar2 = *(unsigned __int64 *)(param_1 + 8);
        uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar2)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
        uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar2 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        *(unsigned __int64 *)(param_2 + 0x10) =
             ((uVar2 & 0xff) << 0x18 |
             (uVar2 & 0xff00) << 8 |
             (unsigned __int64)((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18)) <<
             0x20 | ((unsigned __int64)(((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                    ((unsigned __int64)(((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                    (unsigned __int64)((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                    (unsigned __int64)((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18);
        uStack_38 = *(unsigned __int64 *)(param_1 + 0x14);
        uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(CONCAT22(*(unsigned short *)(param_1 + 0x13) << 8 | *(unsigned short *)(param_1 + 0x13) >> 8,
                      *(unsigned short *)((int)param_1 + 0x4e) << 8 | *(unsigned short *)((int)param_1 + 0x4e) >> 8))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
        uStack_40 = CONCAT44((unsigned int)*(unsigned char *)((int)param_1 + 0x4b) << 0x18 |
                             (unsigned int)*(unsigned char *)((int)param_1 + 0x4a) << 0x10 |
                             (unsigned int)*(unsigned char *)((int)param_1 + 0x49) << 8 |
                             (unsigned int)*(unsigned char *)(param_1 + 0x12),(((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF));
        fn_82F68CC0(param_2 + 0x18,&uStack_40,0x10);
        uVar2 = *(unsigned __int64 *)(param_1 + 0x16);
        uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar2)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
        uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar2 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        *(unsigned __int64 *)(param_2 + 0x28) =
             ((uVar2 & 0xff) << 0x18 |
             (uVar2 & 0xff00) << 8 |
             (unsigned __int64)((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18)) <<
             0x20 | ((unsigned __int64)(((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                    ((unsigned __int64)(((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                    (unsigned __int64)((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                    (unsigned __int64)((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18);
        uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)((unsigned __int64)*(unsigned __int64 *)(param_1 + 0x18) >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)*(unsigned __int64 *)(param_1 + 0x18))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
        *(unsigned int *)(param_2 + 0x30) =
             (((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) << 0x18 | ((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) & 0xff00) << 8 |
             (((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8 & 0xff00 | (((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18;
        *(unsigned int *)(param_2 + 0x34) =
             (((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) << 0x18 | ((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
             (((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8 & 0xff00 | (((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18;
        uVar2 = *(unsigned __int64 *)(param_1 + 0x1a);
        uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar2)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
        uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar2 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        *(unsigned __int64 *)(param_2 + 0x38) =
             ((uVar2 & 0xff) << 0x18 |
             (uVar2 & 0xff00) << 8 |
             (unsigned __int64)((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18)) <<
             0x20 | ((unsigned __int64)(((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                    ((unsigned __int64)(((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                    (unsigned __int64)((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                    (unsigned __int64)((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18);
        uVar2 = *(unsigned __int64 *)(param_1 + 0x1c);
        uVar1 = 0;
        uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar2)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
        uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar2 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        *(unsigned __int64 *)(param_2 + 0x40) =
             ((uVar2 & 0xff) << 0x18 |
             (uVar2 & 0xff00) << 8 |
             (unsigned __int64)((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18)) <<
             0x20 | ((unsigned __int64)(((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                    ((unsigned __int64)(((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                    (unsigned __int64)((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                    (unsigned __int64)((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18);
        uVar2 = *(unsigned __int64 *)(param_1 + 0x1e);
        uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar2)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
        uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar2 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        *(unsigned __int64 *)(param_2 + 0x48) =
             ((uVar2 & 0xff) << 0x18 |
             (uVar2 & 0xff00) << 8 |
             (unsigned __int64)((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18)) <<
             0x20 | ((unsigned __int64)(((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                    ((unsigned __int64)(((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                    (unsigned __int64)((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                    (unsigned __int64)((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18);
        uVar2 = *(unsigned __int64 *)(param_1 + 0x20);
        uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar2)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
        uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar2 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        *(unsigned __int64 *)(param_2 + 0x50) =
             ((uVar2 & 0xff) << 0x18 |
             (uVar2 & 0xff00) << 8 |
             (unsigned __int64)((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18)) <<
             0x20 | ((unsigned __int64)(((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                    ((unsigned __int64)(((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                    (unsigned __int64)((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                    (unsigned __int64)((((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18);
        *(unsigned int *)(param_2 + 0x58) =
             (unsigned int)*(unsigned char *)((int)param_1 + 0x8b) << 0x18 |
             (unsigned int)*(unsigned char *)((int)param_1 + 0x8a) << 0x10 |
             (unsigned int)*(unsigned char *)((int)param_1 + 0x89) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x22);
        *(unsigned int *)(param_2 + 0x5c) =
             (unsigned int)*(unsigned char *)((int)param_1 + 0x8f) << 0x18 |
             (unsigned int)*(unsigned char *)((int)param_1 + 0x8e) << 0x10 |
             (unsigned int)*(unsigned char *)((int)param_1 + 0x8d) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x23);
        *(unsigned int *)(param_2 + 0x60) =
             (unsigned int)*(unsigned char *)((int)param_1 + 0x93) << 0x18 |
             (unsigned int)*(unsigned char *)((int)param_1 + 0x92) << 0x10 |
             (unsigned int)*(unsigned char *)((int)param_1 + 0x91) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x24);
        *(unsigned int *)(param_2 + 100) =
             (unsigned int)*(unsigned char *)((int)param_1 + 0x97) << 0x18 |
             (unsigned int)*(unsigned char *)((int)param_1 + 0x96) << 0x10 |
             (unsigned int)*(unsigned char *)((int)param_1 + 0x95) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x25);
      }
    }
    else {
      uVar1 = 0xffffffffc00d3a9a;
    }
  }
  return uVar1;
}

