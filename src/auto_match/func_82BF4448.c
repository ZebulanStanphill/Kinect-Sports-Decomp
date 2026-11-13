extern int fn_82BE19A0();
extern int fn_82BE51E8();
extern int fn_82BE5240();
extern int fn_82F6A3F8();
extern unsigned int lbl_820EB918;
extern unsigned int lbl_831751D0;


unsigned int *
fn_82BF4448(unsigned int *param_1,char *param_2,unsigned int param_3,unsigned __int64 param_4,unsigned short param_5,
             unsigned short param_6)

{
  __int64 lVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  
  fn_82BE51E8(param_1,0xffffffff820eb920);
  param_1[6] = param_3;
  *(unsigned short *)(param_1 + 8) = param_5;
  *(unsigned short *)((int)param_1 + 0x22) = param_6;
  param_1[5] = 0;
  *param_1 = &lbl_820EB918;
  param_1[7] = 0;
  param_1[9] = 0;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    fn_82BE5240(param_1,400,0xffffffff82196582);
  }
  else {
    iVar3 = fn_82BE19A0(param_2);
    param_1[5] = iVar3;
    if (iVar3 == 0) {
      uVar4 = 0xffffffff820eb8a8;
    }
    else {
      if ((param_4 & 0xffffffff) == 0) {
        return param_1;
      }
      if (param_5 == 0) {
        return param_1;
      }
      lVar1 = (unsigned __int64)param_5 << 2;
      uVar2 = (*(int (**)())lbl_831751D0)(lVar1);
      param_1[7] = (int)uVar2;
      if ((uVar2 & 0xffffffff) != 0) {
        fn_82F6A3F8(uVar2,lVar1,param_4,lVar1);
        return param_1;
      }
      uVar4 = 0xffffffff820eb8d8;
    }
    fn_82BE5240(param_1,0x65,uVar4,param_2);
  }
  param_1[4] = 0;
  return param_1;
}

