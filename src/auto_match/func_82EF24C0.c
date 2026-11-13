#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT42(h,l) ((unsigned __int64)((((unsigned int)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define CONCAT62(h,l) ((unsigned __int64)((((unsigned __int64)(h)) << 16) | ((unsigned short)(l))))
extern int fn_82E57888();
extern int fn_82EF1D58();
extern int fn_82F64CE0();
extern int memcpy();
extern int memset();
extern unsigned int lbl_82154BB8;
extern unsigned int lbl_82154BBC;
extern unsigned int lbl_82154BBE;
extern unsigned int lbl_82154BC0;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


unsigned __int64 fn_82EF24C0(int *param_1,int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned __int64 *puVar1;
  unsigned __int64 uVar2;
  unsigned __int64 *puVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 *puVar6;
  unsigned __int64 *apuStack_a0 [4];
  unsigned __int64 uStack_90;
  unsigned __int64 uStack_88;
  unsigned __int64 uStack_80;
  unsigned __int64 uStack_78;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  
  if (param_1[3] == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else if ((param_4 == (unsigned int *)0x0) || ((param_3 != 0 && (param_2 == 0)))) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    (**(int (***)())(*param_1 + 0x14))(param_1,&uStack_80,0);
    if (uStack_80 < 0x100000000) {
      *param_4 = (unsigned int)uStack_80;
      if (param_3 < (unsigned int)uStack_80) {
        uVar2 = 0xffffffffc00d36b1;
      }
      else {
        uStack_88 = *(unsigned __int64 *)(param_1 + 6);
        uStack_90 = CONCAT44((unsigned int)*(unsigned char *)((int)param_1 + 0x13) << 0x18 |
                             (unsigned int)*(unsigned char *)((int)param_1 + 0x12) << 0x10 |
                             (unsigned int)*(unsigned char *)((int)param_1 + 0x11) << 8 |
                             (unsigned int)*(unsigned char *)(param_1 + 4),
                             CONCAT22(*(unsigned short *)(param_1 + 5) << 8 | *(unsigned short *)(param_1 + 5) >> 8,
                                      *(unsigned short *)((int)param_1 + 0x16) << 8 |
                                      *(unsigned short *)((int)param_1 + 0x16) >> 8));
        memcpy(param_2,&uStack_90,0x10);
        uVar4 = *(unsigned __int64 *)(param_1 + 8);
        uStack_90 = ((((unsigned __int64)(uStack_90)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar4)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
        uStack_90 = ((((unsigned __int64)(uStack_90)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar4 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        *(unsigned __int64 *)(param_2 + 0x10) =
             ((uVar4 & 0xff) << 0x18 |
             (uVar4 & 0xff00) << 8 |
             (unsigned __int64)((((unsigned __int64)(uStack_90) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_90) >> 32) & 0xFFFFFFFF) >> 0x18)) <<
             0x20 | ((unsigned __int64)(((unsigned __int64)(uStack_90) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                    ((unsigned __int64)(((unsigned __int64)(uStack_90) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                    (unsigned __int64)((((unsigned __int64)(uStack_90) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                    (unsigned __int64)((((unsigned __int64)(uStack_90) >> 0) & 0xFFFFFFFF) >> 0x18);
        uStack_88 = lbl_82154BC0;
        uStack_90 = CONCAT62(CONCAT42(lbl_82154BB8 << 0x18 |
                                      (lbl_82154BB8 & 0xff00) << 8 |
                                      lbl_82154BB8 >> 8 & 0xff00 | lbl_82154BB8 >> 0x18,
                                      lbl_82154BBC << 8 | lbl_82154BBC >> 8),
                             lbl_82154BBE << 8 | lbl_82154BBE >> 8);
        memcpy(param_2 + 0x18,&uStack_90,0x10);
        lVar5 = 0;
        *(unsigned int *)(param_2 + 0x28) =
             (unsigned int)*(unsigned char *)((int)param_1 + 0x3bb) << 0x18 |
             (unsigned int)*(unsigned char *)((int)param_1 + 0x3ba) << 0x10 |
             (unsigned int)*(unsigned char *)((int)param_1 + 0x3b9) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0xee);
        *(unsigned short *)(param_2 + 0x2c) = 0;
        if (param_1[0x12] != 0) {
          lVar5 = fn_82F64CE0();
          lVar5 = (lVar5 + 1U & 0x7fff) << 1;
        }
        apuStack_a0[0] = (unsigned __int64 *)(param_2 + 0x30);
        *(unsigned short *)(param_2 + 0x2e) = (unsigned short)(lVar5 << 8) | (unsigned short)((unsigned __int64)lVar5 >> 8);
        fn_82E57888(apuStack_a0,param_1[0x12],lVar5);
        puVar1 = apuStack_a0[0];
        if (param_1[0xee] != 0) {
          fn_82EF1D58(param_1 + 0x14,0,&uStack_90);
          puVar3 = &uStack_78;
          lVar5 = 5;
          puVar6 = (unsigned __int64 *)((((unsigned __int64)(uStack_90) >> 0) & 0xFFFFFFFF) + -8);
          do {
            puVar6 = puVar6 + 1;
            puVar3 = puVar3 + 1;
            *puVar3 = *puVar6;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
          uVar4 = ((unsigned __int64)uStack_54 + 6 & 0x7fffffff) * 2 + (unsigned __int64)uStack_50 & 0xffff;
          *puVar1 = (((unsigned __int64)uStack_6c & 0xff) << 0x18 |
                    ((unsigned __int64)uStack_6c & 0xff00) << 8 |
                    (unsigned __int64)(uStack_6c >> 8) & 0xff00 | (unsigned __int64)(uStack_6c >> 0x18)) << 0x20 |
                    ((unsigned __int64)uStack_70 & 0xff) << 0x18 |
                    ((unsigned __int64)uStack_70 & 0xff00) << 8 |
                    (unsigned __int64)(uStack_70 >> 8) & 0xff00 | (unsigned __int64)(uStack_70 >> 0x18);
          puVar1[1] = (((unsigned __int64)uStack_64 & 0xff) << 0x18 |
                      ((unsigned __int64)uStack_64 & 0xff00) << 8 |
                      (unsigned __int64)(uStack_64 >> 8) & 0xff00 | (unsigned __int64)(uStack_64 >> 0x18)) << 0x20
                      | ((unsigned __int64)uStack_68 & 0xff) << 0x18 |
                        ((unsigned __int64)uStack_68 & 0xff00) << 8 |
                        (unsigned __int64)(uStack_68 >> 8) & 0xff00 | (unsigned __int64)(uStack_68 >> 0x18);
          *(unsigned short *)(puVar1 + 2) = (unsigned short)(uVar4 << 8) | (unsigned short)(uVar4 >> 8);
          *(unsigned int *)((int)puVar1 + 0x12) =
               uStack_60 << 0x18 | (uStack_60 & 0xff00) << 8 | uStack_60 >> 8 & 0xff00 |
               uStack_60 >> 0x18;
          *(unsigned int *)((int)puVar1 + 0x16) =
               uStack_5c << 0x18 | (uStack_5c & 0xff00) << 8 | uStack_5c >> 8 & 0xff00 |
               uStack_5c >> 0x18;
          apuStack_a0[0] = (unsigned __int64 *)((int)puVar1 + 0x1e);
          *(unsigned int *)((int)puVar1 + 0x1a) =
               uStack_54 << 0x18 | (uStack_54 & 0xff00) << 8 | uStack_54 >> 8 & 0xff00 |
               uStack_54 >> 0x18;
          if ((unsigned __int64)uStack_54 != 0) {
            fn_82E57888(apuStack_a0,uStack_58,uStack_54 << 1);
          }
                    /* WARNING: Subroutine does not return */
          memset(apuStack_a0[0],0,(unsigned __int64)uStack_50);
        }
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0xffffffffc00d3a9a;
    }
  }
  return uVar2;
}

