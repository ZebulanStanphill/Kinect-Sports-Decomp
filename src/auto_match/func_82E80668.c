extern unsigned int *auStack_40;
extern int fn_82E7E7E0();
extern int fn_82E7E900();
extern int fn_82E7ED68();
extern int fn_82E7F868();
extern int fn_82E7F8F0();
extern unsigned int uStack_38;


/* WARNING: Removing unreachable block (ram,0x82e80738) */
/* WARNING: Removing unreachable block (ram,0x82e80720) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

__int64 fn_82E80668(unsigned short *param_1,unsigned __int64 param_2,unsigned short *param_3)

{
  unsigned short uVar1;
  unsigned char *puVar2;
  __int64 lVar3;
  unsigned char *apuStack_50 [4];
  unsigned char auStack_40 [8];
  unsigned __int64 uStack_38;
  
  apuStack_50[0] = (unsigned char *)0x0;
  uStack_38 = 0;
  if (*param_1 == 0) {
    lVar3 = -0x3ff2c917;
  }
  else if ((param_3 == (unsigned short *)0x0) || (param_1 == param_3)) {
    lVar3 = -0x7fffbffd;
  }
  else if ((*param_3 == 0) ||
          ((uVar1 = *param_1 & 0xfff, uVar1 != 0xc && ((*param_3 & 0xfff) != uVar1)))) {
    lVar3 = -0x7ff8ffa9;
  }
  else {
    lVar3 = fn_82E7F8F0(param_1,param_2,auStack_40);
    if (((-1 < lVar3) && (lVar3 = fn_82E7E7E0(auStack_40), -1 < lVar3)) &&
       (lVar3 = fn_82E7E900(auStack_40,param_3), -1 < lVar3)) {
      if ((*param_1 & 0xfff) == 0xc) {
        puVar2 = auStack_40;
      }
      else {
        lVar3 = fn_82E7ED68(auStack_40,0,apuStack_50);
        puVar2 = apuStack_50[0];
        if (lVar3 < 0) goto LAB_82e807b8;
      }
      lVar3 = fn_82E7F868(param_1,param_2,puVar2);
      if (-1 < lVar3) {
        uStack_38 = 0;
      }
    }
  }
LAB_82e807b8:
  fn_82E7E7E0(auStack_40);
  return lVar3;
}

