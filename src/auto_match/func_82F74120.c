#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_38;
extern int fn_82F71D98();
extern int fn_82F72DD0();
extern int fn_82F73228();
extern int fn_82F732B0();
extern int fn_82F735D8();
extern int fn_82F73680();
extern int fn_82F73928();
extern int fn_82F73A48();
extern int fn_82F78108();
extern int fn_82F78540();
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


unsigned __int64 * fn_82F74120(unsigned __int64 *param_1,unsigned __int64 *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 *puVar3;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uStack_70;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned __int64 uStack_60;
  unsigned __int64 uStack_58;
  unsigned __int64 uStack_50;
  unsigned __int64 uStack_48;
  unsigned __int64 uStack_40;
  unsigned char auStack_38 [56];
  
  if (*lbl_832635C0 == '\0') {
    if (*(int *)param_2 == 0) {
      puVar3 = (unsigned __int64 *)fn_82F732B0(auStack_38,0x5b);
      uStack_50 = *puVar3;
      fn_82F72DD0(&uStack_50,1);
      uStack_40 = uStack_50;
      fn_82F735D8(&uStack_40,0x5d);
      puVar3 = &uStack_40;
    }
    else {
      puVar3 = (unsigned __int64 *)fn_82F73928(auStack_38,0x28,param_2);
      uStack_50 = *puVar3;
      fn_82F73680(&uStack_50,0xffffffff82169e24);
      uStack_60 = uStack_50;
      fn_82F72DD0(&uStack_60,1);
      uStack_48 = uStack_60;
      fn_82F735D8(&uStack_48,0x5d);
      puVar3 = &uStack_48;
    }
  }
  else {
    uVar1 = fn_82F71D98();
    uVar1 = ((uVar1 & 0xffffffff) >> 0x1f) - 1 & uVar1;
    if ((int)uVar1 != 0) {
      uStack_70 = (unsigned __int64)(((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF) & 0xffffffff0000ffff;
      if ((*param_2 & 0x100000) != 0) {
        fn_82F73680(&uStack_70,0xffffffff82169afc);
      }
      while ((((int)((((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF) & 0xff000000) < 0x1000001 &&
              (iVar4 = (int)uVar1, uVar1 = uVar1 - 1, iVar4 != 0)) && (*lbl_832635C0 != '\0'))) {
        uVar2 = fn_82F73A48(&uStack_50,0);
        puVar3 = (unsigned __int64 *)fn_82F73928(auStack_38,0x5b,uVar2);
        uStack_60 = *puVar3;
        fn_82F735D8(&uStack_60,0x5d);
        fn_82F73228(&uStack_70,&uStack_60);
      }
      if (*(int *)param_2 != 0) {
        if ((*param_2 & 0x100000) == 0) {
          puVar3 = (unsigned __int64 *)fn_82F73928(auStack_38,0x28,param_2);
          uStack_60 = *puVar3;
          fn_82F735D8(&uStack_60,0x29);
          uStack_50 = uStack_60;
          fn_82F73228(&uStack_50,&uStack_70);
          uStack_70 = uStack_50;
        }
        else {
          uStack_60 = *param_2;
          fn_82F73228(&uStack_60,&uStack_70);
          uStack_70 = uStack_60;
        }
      }
      fn_82F78540(&uStack_68,&uStack_70);
      *param_1 = CONCAT44(uStack_68,uStack_64) | 0x100000;
      return param_1;
    }
    puVar3 = (unsigned __int64 *)fn_82F732B0(&uStack_50,0x5b);
    uStack_60 = *puVar3;
    fn_82F72DD0(&uStack_60,1);
    uStack_58 = uStack_60;
    fn_82F735D8(&uStack_58,0x5d);
    puVar3 = &uStack_58;
  }
  fn_82F78108(param_1,puVar3);
  return param_1;
}

