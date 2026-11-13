#define true 1
extern unsigned int *auStack_6c;
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_6e;
extern unsigned int uStack_70;


__int64 fn_82E5E6C0(int *param_1)

{
  int iVar2;
  __int64 lVar1;
  __int64 lVar3;
  unsigned short uVar4;
  unsigned short uStack_70;
  unsigned short uStack_6e;
  unsigned int auStack_6c [3];
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  
  if (param_1 != (int *)0x0) {
    uStack_70 = 0;
    lVar3 = 0;
    iVar2 = (**(int (***)())(*param_1 + 0x98))(param_1,&uStack_70);
    if (-1 < iVar2) {
      uVar4 = 0;
      if (uStack_70 == 0) {
        return 0;
      }
      while( true ) {
        uStack_6e = 0;
        auStack_6c[0] = 0;
        uStack_60 = lbl_8202E618;
        uStack_5c = lbl_8202E61C;
        uStack_58 = lbl_8202E620;
        uStack_54 = lbl_8202E624;
        lVar1 = (**(int (***)())(*param_1 + 0x9c))(param_1,uVar4,&uStack_60,&uStack_6e,0,auStack_6c);
        if ((int)(-(unsigned int)(lVar1 != -0x3ff2c94f) & (unsigned int)lVar1) < 0) break;
        if ((unsigned __int64)uStack_6e == 0xffff) {
          return 0xff;
        }
        lVar3 = (unsigned __int64)uStack_6e + lVar3;
        uVar4 = uVar4 + 1;
        if (uStack_70 <= uVar4) {
          return lVar3;
        }
      }
    }
  }
  return 0;
}

