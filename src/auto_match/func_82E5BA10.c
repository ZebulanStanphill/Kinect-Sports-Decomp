#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_40;
extern int fn_82E57888();
extern int fn_82E5AFB0();
extern int fn_82E5B6B8();
extern int fn_82E5B788();
extern int fn_82E5C290();
extern int fn_82F68CC0();
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


unsigned __int64 fn_82E5BA10(int *param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned short *puVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned short *apuStack_60 [2];
  unsigned __int64 uStack_58;
  unsigned __int64 uStack_50;
  unsigned __int64 uStack_48;
  unsigned __int64 auStack_40 [8];
  
  if (param_1[3] == 0) {
    return 0xffffffffc00d36b6;
  }
  if ((param_4 == (unsigned int *)0x0) || (((param_3 & 0xffffffff) != 0 && (param_2 == 0)))) {
    return 0xffffffff80070057;
  }
  (**(int (***)())(*param_1 + 0x14))(param_1,0,auStack_40);
  if (auStack_40[0] < 0x100000000) {
    *param_4 = (int)auStack_40[0];
    if ((param_3 & 0xffffffff) < (auStack_40[0] & 0xffffffff)) {
      return 0xffffffffc00d36b1;
    }
    uStack_48 = *(unsigned __int64 *)(param_1 + 6);
    uStack_50 = CONCAT44((unsigned int)*(unsigned char *)((int)param_1 + 0x13) << 0x18 |
                         (unsigned int)*(unsigned char *)((int)param_1 + 0x12) << 0x10 |
                         (unsigned int)*(unsigned char *)((int)param_1 + 0x11) << 8 | (unsigned int)*(unsigned char *)(param_1 + 4),
                         CONCAT22(*(unsigned short *)(param_1 + 5) << 8 | *(unsigned short *)(param_1 + 5) >> 8,
                                  *(unsigned short *)((int)param_1 + 0x16) << 8 |
                                  *(unsigned short *)((int)param_1 + 0x16) >> 8));
    fn_82F68CC0(param_2,&uStack_50,0x10);
    uVar4 = *(unsigned __int64 *)(param_1 + 8);
    uStack_58 = ((((unsigned __int64)(uStack_58)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar4)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    uStack_58 = ((((unsigned __int64)(uStack_58)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar4 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    *(unsigned __int64 *)(param_2 + 0x10) =
         ((uVar4 & 0xff) << 0x18 |
         (uVar4 & 0xff00) << 8 |
         (unsigned __int64)((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) >> 0x18)) << 0x20
         | ((unsigned __int64)(((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
           ((unsigned __int64)(((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
           (unsigned __int64)((((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) >> 0x18);
    uVar4 = *(unsigned __int64 *)(param_1 + 0x12);
    uStack_58 = ((((unsigned __int64)(uStack_58)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar4)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    uStack_58 = ((((unsigned __int64)(uStack_58)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar4 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    *(unsigned __int64 *)(param_2 + 0x18) =
         ((uVar4 & 0xff) << 0x18 |
         (uVar4 & 0xff00) << 8 |
         (unsigned __int64)((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) >> 0x18)) << 0x20
         | ((unsigned __int64)(((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
           ((unsigned __int64)(((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
           (unsigned __int64)((((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) >> 0x18);
    uVar4 = *(unsigned __int64 *)(param_1 + 0x14);
    uStack_58 = ((((unsigned __int64)(uStack_58)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar4)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    uStack_58 = ((((unsigned __int64)(uStack_58)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar4 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    *(unsigned __int64 *)(param_2 + 0x20) =
         ((uVar4 & 0xff) << 0x18 |
         (uVar4 & 0xff00) << 8 |
         (unsigned __int64)((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) >> 0x18)) << 0x20
         | ((unsigned __int64)(((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
           ((unsigned __int64)(((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
           (unsigned __int64)((((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) >> 0x18);
    *(unsigned int *)(param_2 + 0x28) =
         (unsigned int)*(unsigned char *)((int)param_1 + 0x5b) << 0x18 | (unsigned int)*(unsigned char *)((int)param_1 + 0x5a) << 0x10
         | (unsigned int)*(unsigned char *)((int)param_1 + 0x59) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x16);
    *(unsigned int *)(param_2 + 0x2c) =
         (unsigned int)*(unsigned char *)((int)param_1 + 0x5f) << 0x18 | (unsigned int)*(unsigned char *)((int)param_1 + 0x5e) << 0x10
         | (unsigned int)*(unsigned char *)((int)param_1 + 0x5d) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x17);
    *(unsigned int *)(param_2 + 0x30) =
         (unsigned int)*(unsigned char *)((int)param_1 + 99) << 0x18 | (unsigned int)*(unsigned char *)((int)param_1 + 0x62) << 0x10 |
         (unsigned int)*(unsigned char *)((int)param_1 + 0x61) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x18);
    *(unsigned int *)(param_2 + 0x34) =
         (unsigned int)*(unsigned char *)((int)param_1 + 0x67) << 0x18 | (unsigned int)*(unsigned char *)((int)param_1 + 0x66) << 0x10
         | (unsigned int)*(unsigned char *)((int)param_1 + 0x65) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x19);
    *(unsigned int *)(param_2 + 0x38) =
         (unsigned int)*(unsigned char *)((int)param_1 + 0x6b) << 0x18 | (unsigned int)*(unsigned char *)((int)param_1 + 0x6a) << 0x10
         | (unsigned int)*(unsigned char *)((int)param_1 + 0x69) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x1a);
    *(unsigned int *)(param_2 + 0x3c) =
         (unsigned int)*(unsigned char *)((int)param_1 + 0x6f) << 0x18 | (unsigned int)*(unsigned char *)((int)param_1 + 0x6e) << 0x10
         | (unsigned int)*(unsigned char *)((int)param_1 + 0x6d) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x1b);
    *(unsigned int *)(param_2 + 0x40) =
         (unsigned int)*(unsigned char *)((int)param_1 + 0x73) << 0x18 | (unsigned int)*(unsigned char *)((int)param_1 + 0x72) << 0x10
         | (unsigned int)*(unsigned char *)((int)param_1 + 0x71) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x1c);
    *(unsigned int *)(param_2 + 0x44) =
         (unsigned int)*(unsigned char *)((int)param_1 + 0x77) << 0x18 | (unsigned int)*(unsigned char *)((int)param_1 + 0x76) << 0x10
         | (unsigned int)*(unsigned char *)((int)param_1 + 0x75) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x1d);
    *(unsigned short *)(param_2 + 0x48) =
         *(unsigned short *)(param_1 + 0x1e) << 8 | *(unsigned short *)(param_1 + 0x1e) >> 8;
    *(unsigned short *)(param_2 + 0x4a) =
         *(unsigned short *)((int)param_1 + 0x7a) << 8 | *(unsigned short *)((int)param_1 + 0x7a) >> 8;
    uVar4 = *(unsigned __int64 *)(param_1 + 0x20);
    uStack_58 = ((((unsigned __int64)(uStack_58)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar4)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    uStack_58 = ((((unsigned __int64)(uStack_58)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar4 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    *(unsigned __int64 *)(param_2 + 0x4c) =
         ((uVar4 & 0xff) << 0x18 |
         (uVar4 & 0xff00) << 8 |
         (unsigned __int64)((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) >> 0x18)) << 0x20
         | ((unsigned __int64)(((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
           ((unsigned __int64)(((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
           (unsigned __int64)((((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) >> 0x18);
    *(unsigned short *)(param_2 + 0x54) =
         (unsigned short)(((unsigned __int64)(unsigned int)param_1[0x58] & 0xff) << 8) |
         (unsigned short)((unsigned int)param_1[0x58] >> 8) & 0xff;
    apuStack_60[0] = (unsigned short *)(param_2 + 0x56);
    uStack_58 = uVar4;
    fn_82E5B6B8(param_1,apuStack_60);
    uVar4 = 0;
    if (param_1[0x58] != 0) {
      do {
        puVar1 = apuStack_60[0];
        lVar3 = fn_82E5AFB0(param_1 + 0x3e,uVar4,&uStack_58);
        puVar5 = (unsigned int *)(-(unsigned int)(lVar3 != 0) & (((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF));
        *puVar1 = *(unsigned short *)(puVar5 + 1) << 8 | *(unsigned short *)(puVar5 + 1) >> 8;
        puVar1[1] = *(unsigned short *)((int)puVar5 + 6) << 8 | *(unsigned short *)((int)puVar5 + 6) >> 8;
        apuStack_60[0] = puVar1 + 2;
        if (*(short *)((int)puVar5 + 6) != 0) {
          fn_82E57888(apuStack_60,*puVar5);
        }
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (unsigned __int64)(unsigned int)param_1[0x58]);
    }
    uVar2 = fn_82E5B788(param_1,apuStack_60);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if (param_1[0x22] != 0) {
      uStack_50 = 0;
      uVar2 = (**(int (***)())(*param_1 + 0x14))(param_1,&uStack_50,0);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if (0xffffffff < uStack_50) goto LAB_82e5ba8c;
      uStack_58 = uStack_58 & 0xffffffff;
      uVar2 = fn_82E5C290(param_1[0x22],apuStack_60[0],param_3 - (uStack_50 & 0xffffffff),
                                &uStack_58);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  else {
LAB_82e5ba8c:
    uVar2 = 0xffffffffc00d3a9a;
  }
  return uVar2;
}

