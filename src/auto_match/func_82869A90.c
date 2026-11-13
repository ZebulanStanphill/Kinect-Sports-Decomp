extern unsigned int *auStack_150;
extern unsigned int *auStack_15c;
extern unsigned int *auStack_170;
extern unsigned int *auStack_180;
extern unsigned int *auStack_1d8;
extern int fn_82866018();
extern int fn_82866110();
extern int fn_82869890();
extern int fn_82876408();
extern int fn_82876698();
extern int fn_828766C8();
extern int fn_828767F0();
extern int fn_82876C70();
extern int fn_828774A0();
extern int fn_82877520();
extern int fn_82A1DDC0();
extern int fn_82A1E658();
extern unsigned int iStack_1e0;
extern unsigned int register0x0000000c;
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_1dc;


unsigned __int64 fn_82869A90(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  struct { int first; unsigned int second; } stack_pair_1e0;

  unsigned char auStack_1d8 [8];
  unsigned char *puStack_1d0;
  unsigned char auStack_180 [4];
  unsigned int uStack_17c;
  unsigned int uStack_178;
  unsigned int uStack_174;
  unsigned char auStack_170 [1];
  unsigned char auStack_15c [12];
  unsigned char auStack_150 [336];
  
  puStack_1d0 = (unsigned char *)register0x0000000c;
  uVar1 = fn_82876C70(param_1 + 8,param_2,0,auStack_150);
  if ((int)uVar1 != 1) {
    return uVar1;
  }
  uVar1 = fn_82866018(auStack_150,0,0,0,&uStack_17c);
  if ((int)uVar1 != 1) {
    return uVar1;
  }
  iVar2 = fn_82866110(&uStack_17c,&stack_pair_1e0.first,0,8,&uStack_178);
  if ((iVar2 != 1) || (uStack_178 < 8)) {
    fn_82A1E658(uStack_17c);
    return 2;
  }
  if ((stack_pair_1e0.first == 0x414b504b) && (stack_pair_1e0.second != 0)) {
    uVar1 = fn_82876408(param_1,param_2,0,0,auStack_180,auStack_170);
    if ((int)uVar1 != 1) goto LAB_82869ca8;
    uVar5 = (unsigned __int64)stack_pair_1e0.second;
    uVar1 = fn_828766C8(param_1 + 4,auStack_170);
    iVar2 = fn_828774A0(auStack_15c,param_2,uVar5 + 8,uVar1,&uStack_174);
    if ((iVar2 != 0) && ((unsigned __int64)uStack_174 != 0)) {
      uVar4 = (unsigned __int64)uStack_178;
      uVar6 = (unsigned __int64)stack_pair_1e0.second;
      uVar5 = 8;
      if (8 < uVar4) {
        fn_82A1DDC0((unsigned __int64)uStack_174 + 8,auStack_1d8,uVar4 - 8);
        uVar6 = uVar6 - (uVar4 - 8);
        uVar5 = uVar4;
      }
      if (((uVar6 & 0xffffffff) == 0) ||
         ((iVar3 = fn_82866110(&uStack_17c,uVar5 + uStack_174,uStack_178,uVar6,&uStack_178),
          iVar3 == 1 && ((uVar6 & 0xffffffff) <= (unsigned __int64)uStack_178)))) {
        fn_82A1E658(uStack_17c);
        uVar1 = fn_828767F0(iVar2 + 8,uStack_174,(unsigned __int64)stack_pair_1e0.second + 8);
        if ((int)uVar1 == 1) {
          if (*(int *)(param_1 + 0x424) == 0) {
            *(int *)(param_1 + 0x424) = iVar2;
            *(unsigned int *)(iVar2 + 4) = 0;
          }
          else {
            *(int *)(iVar2 + 4) = *(int *)(param_1 + 0x424);
            *(int *)(param_1 + 0x424) = iVar2;
          }
          *param_3 = *(unsigned int *)(iVar2 + 0x20);
          uVar1 = fn_82869890(param_1,iVar2);
          return uVar1;
        }
      }
      else {
        fn_82A1E658(uStack_17c);
        uVar1 = 2;
      }
      fn_82876698(param_1 + 4,auStack_170);
      fn_82877520(iVar2);
      return uVar1;
    }
  }
  uVar1 = 2;
LAB_82869ca8:
  fn_82A1E658(uStack_17c);
  return uVar1;
}

