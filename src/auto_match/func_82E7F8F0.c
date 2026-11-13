extern unsigned int *auStack_30;
extern int fn_82E7E7E0();
extern int fn_82E7ED68();
extern int fn_82E7F868();
extern int memcpy();
extern unsigned int uStack_18;
extern unsigned int uStack_20;


__int64 fn_82E7F8F0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  __int64 lVar3;
  unsigned int auStack_30;
  unsigned __int64 uStack_20;
  unsigned __int64 uStack_18;
  
  auStack_30 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  if (((param_3 & 0xffffffff) == 0) || ((param_1 & 0xffffffff) == (param_3 & 0xffffffff))) {
    lVar3 = -0x7fffbffd;
  }
  else {
    *(unsigned __int64 *)param_3 = 0;
    ((unsigned __int64 *)param_3)[1] = 0;
    lVar3 = fn_82E7ED68(param_1,param_2,&auStack_30);
    if (-1 < lVar3) {
      uVar1 = *(unsigned short *)param_1 & 0xfff;
      if (uVar1 == 0xc) {
        memcpy(param_3,auStack_30,0x10);
      }
      else {
        puVar2 = (unsigned short *)param_3;
        if (uVar1 == 0x48) {
          *puVar2 = 0x48;
          *(unsigned int *)(puVar2 + 4) = auStack_30;
        }
        else {
          *puVar2 = uVar1;
          lVar3 = fn_82E7F868(param_3,0,auStack_30);
        }
      }
    }
  }
  fn_82E7E7E0(&uStack_20);
  return lVar3;
}

