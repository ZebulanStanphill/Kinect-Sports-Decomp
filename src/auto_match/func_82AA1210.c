#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_826355E8();
extern int fn_82635E18();
extern int fn_82635E70();
extern int fn_82635ED0();
extern int fn_82635EE8();
extern unsigned int lbl_820D314C;
extern unsigned int uStack_10;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_20;


void fn_82AA1210(unsigned int *param_1,char param_2,char param_3,unsigned __int64 param_4,unsigned int param_5,
                  int *param_6)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uStack_20;
  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  iVar1 = param_6[5];
  if (param_2 == '\0') {
    uStack_20 = *(unsigned __int64 *)param_1;
    if ((1 << ((((unsigned __int64)(uStack_20) >> 32) & 0xFFFFFFFF) >> 0xc & 0xf) & 0x607eU) != 0) {
      uStack_20 = ((((unsigned __int64)(uStack_20)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)((unsigned __int64)uStack_20 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      uStack_20 = CONCAT44((((unsigned __int64)(uStack_20) >> 0) & 0xFFFFFFFF) & 0xfffff000 | (((unsigned __int64)(uStack_20) >> 0) & 0xFFFFFFFF) - *param_6 & 0xfff,
                           (((unsigned __int64)(uStack_20) >> 32) & 0xFFFFFFFF));
    }
    fn_826355E8(iVar1,&uStack_20);
  }
  else {
    param_6[1] = param_5;
    uVar3 = *param_1;
    if (param_3 == '\0') {
      if (((uVar3 & 0x8000) != 0) && ((uVar3 & 0x3f) == 0x3f)) {
        *param_1 = ((unsigned int)(((unsigned __int64)(unsigned char)(&lbl_820D314C)[*(unsigned char *)(param_6 + 3) & 7] & 0xf) <<
                          0x14) | 0xff0fffff) &
                   ((unsigned int)(((unsigned __int64)(unsigned char)(&lbl_820D314C)[*(unsigned char *)(param_6 + 3) & 7] & 0xf) <<
                          0x10) | 0xfff0ffff) & uVar3;
      }
      fn_82635EE8(iVar1,param_1);
    }
    else if ((uVar3 & 0x1f) == 0) {
      puVar2 = (unsigned int *)param_6[2];
      uVar3 = *puVar2;
      if (uVar3 != 0) {
        do {
          if ((uVar3 & 0xfff) == param_5) break;
          puVar2 = puVar2 + 1;
          uVar3 = *puVar2;
        } while (uVar3 != 0);
        if (uVar3 != 0) {
          uStack_18 = *param_1;
          uStack_10 = param_1[2];
          uStack_14 = param_1[1] & 0xfffff000 | 0x688;
          fn_82635ED0(iVar1,&uStack_18,
                       ((unsigned __int64)(*puVar2 >> 8) & 0xf00 | (unsigned __int64)*puVar2 & 0xf000) >> 8,0);
          return;
        }
      }
      fn_82635E70(iVar1,param_1,0);
    }
    else {
      if ((uVar3 & 0x1f) == 1) {
        param_1[2] = (*(unsigned char *)((uVar3 >> 0x14 & 0x1f) + param_6[6]) & 3) << 0xe |
                     param_1[2] & 0xffff3fff;
      }
      fn_82635E18(iVar1,param_1);
    }
  }
  return;
}

