#define _iStack00000018 ((*(unsigned __int64*)&iStack00000018))
extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern int fn_8288BE40();
extern int fn_8288CB08();
extern int fn_8288D188();
extern int fn_8288E548();
extern int fn_82F622A8();
extern unsigned int iStack00000018;
extern unsigned int uStack_40;
extern unsigned int uStack_50;


__int64 fn_82890020(int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int iVar1;
  unsigned __int64 *puVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int iStack00000018;
  unsigned char uStack_50;
  int aiStack_48 [2];
  unsigned __int64 uStack_40;
  unsigned char auStack_38 [8];
  unsigned char auStack_30 [1];
  
  iStack00000018 = (int)(param_2 >> 0x20);
  lVar3 = ((unsigned __int64)(unsigned int)(iStack00000018 - *param_1 >> 2) & 0x7ffffff) * 0x20 +
          (param_2 & 0xffffffff);
  if (param_3 != 0) {
    _iStack00000018 = param_2;
    if (0xffffffffU - param_1[4] < param_3) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82023624);
    }
    fn_8288E548(param_1,param_1[4] + param_3 + 0x1f >> 5,0);
    iVar1 = param_1[4];
    if (iVar1 == 0) {
      param_1[4] = param_3;
    }
    else {
      fn_8288D188(&uStack_40,param_1);
      aiStack_48[0] = *param_1;
      param_1[4] = iVar1 + param_3;
      aiStack_48[1] = 0;
      puVar2 = (unsigned __int64 *)fn_8288D188(auStack_38,param_1);
      uVar4 = *puVar2;
      puVar2 = (unsigned __int64 *)fn_8288BE40(auStack_30,aiStack_48,lVar3);
      fn_8288CB08(&uStack_40,*puVar2,uStack_40,uVar4,uStack_50);
    }
  }
  return lVar3;
}

