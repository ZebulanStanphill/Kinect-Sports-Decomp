extern __int64 fn_82BD4438();
extern int fn_82BD9810();
extern int fn_82BD9BA0();
extern unsigned int lbl_820E8684;


unsigned __int64 fn_82BDA348(int param_1,unsigned short *param_2,unsigned __int64 param_3)

{
  int lVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0xffffffff80004005;
  lVar1 = fn_82BD9810(param_1,lbl_820E8684);
  if (lVar1 != 0) {
    if (*(int *)(param_1 + 0x44) != (*param_2 & 1)) {
      *(unsigned int *)(param_1 + 0x44) = *param_2 & 1;
      fn_82BD9BA0(param_1);
    }
    uVar2 = fn_82BD4438(lVar1,param_2,param_3);
  }
  return uVar2;
}

