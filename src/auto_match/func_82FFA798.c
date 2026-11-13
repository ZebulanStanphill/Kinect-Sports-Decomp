#define _uStack00000028 ((*(unsigned __int64*)&uStack00000028))
#define _uStack00000030 ((*(unsigned __int64*)&uStack00000030))
extern unsigned int *auStack_60;
extern int fn_82FE6608();
extern int fn_82FF9278();
extern int fn_82FF9FA8();
extern int fn_8300F1A8();
extern int fn_8300F208();
extern int fn_8302B530();
extern int fn_8302B540();
extern int fn_8302B618();
extern int fn_8302B660();
extern unsigned int iStack_5c;
extern unsigned int lbl_832642E4;
extern unsigned int lbl_832642F0;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack_5e;


unsigned __int64
fn_82FFA798(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int uVar1;
  int iVar3;
  unsigned short uVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uStack00000020;
  unsigned int uStack00000028;
  unsigned int uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned char auStack_60 [2];
  unsigned short uStack_5e;
  int iStack_5c;
  
  uStack00000020 = param_2;
  _uStack00000028 = param_3;
  _uStack00000030 = param_4;
  uStack00000038 = param_5;
  uStack00000040 = param_6;
  fn_8302B530();
  uVar1 = uStack00000030;
  iVar3 = fn_8302B618(param_1 + 0x39c,uStack00000030);
  if (iVar3 == 0) {
    fn_8302B540();
    fn_82FF9278(param_1,&stack0x00000020,0x36);
    uVar2 = 0x36;
  }
  else {
    fn_8302B660((unsigned __int64)lbl_832642F0 + 0x39c,uVar1);
    if ((*(unsigned char *)(iVar3 + 0x48) & 0x80) == 0) {
      fn_8302B540();
      fn_82FF9278(param_1,&stack0x00000020,1);
      uVar2 = 1;
    }
    else {
      fn_8302B540();
      fn_82FF9FA8(iVar3);
      *(unsigned int *)(iVar3 + 0x2c) = (((unsigned __int64)(uStack00000020) >> 32) & 0xFFFFFFFF);
      *(unsigned int *)(iVar3 + 0x30) = uStack00000028;
      uStack_5e = 0x18;
      iStack_5c = iVar3;
      uVar4 = fn_8300F1A8();
      fn_8300F208(lbl_832642E4,auStack_60,uVar4);
      uVar2 = fn_82FE6608();
    }
  }
  return uVar2;
}

