#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_82B465E0();
extern int fn_82B48C48();
extern int fn_82B48CF0();
extern int fn_82B494C8();
extern int fn_82B496A0();
extern int fn_82B49D90();
extern int fn_82B4BAA8();
extern int fn_82B4D688();
extern int fn_82B4D758();
extern int fn_82B4D828();
extern int fn_82B866A0();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82015468;
extern unsigned int lbl_8201DFE8;
extern unsigned int lbl_82022E60;
extern unsigned int lbl_820288D0;
extern unsigned int lbl_8202DAB8;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_82B4F870(unsigned __int64 param_1,unsigned int *param_2,int param_3)

{
  char cVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  double dVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned char auStack_48 [8];
  unsigned char auStack_40 [8];
  unsigned char auStack_38 [56];
  
  cVar3 = fn_82B465E0(param_1,param_2,&stack_pair_50.first);
  if (((cVar3 == '\0') || ((double)CONCAT44(stack_pair_50.first,stack_pair_50.second) < lbl_8202DAB8)) ||
     (lbl_820288D0 < (double)CONCAT44(stack_pair_50.first,stack_pair_50.second))) {
    dVar4 = (double)lbl_821AAD20;
    fn_82B866A0((double)lbl_8201DFE8,dVar4,dVar4,dVar4,&stack_pair_50.first,param_1,1);
    fn_82B866A0((double)lbl_82002C5C,dVar4,dVar4,dVar4,auStack_48,param_1,1);
    fn_82B866A0((double)lbl_82015468,dVar4,dVar4,dVar4,auStack_40,param_1,1);
    fn_82B866A0((double)lbl_82022E60,dVar4,dVar4,dVar4,auStack_38,param_1,1);
    uVar1 = fn_82B4D828(param_1,param_2,&stack_pair_50.first);
    uVar1 = fn_82B4D688(param_1,uVar1,auStack_48);
    uVar1 = fn_82B494C8(param_1,uVar1);
    uVar1 = fn_82B4D758(param_1,uVar1,auStack_40);
    stack_pair_50.first = fn_82B4D688(param_1,uVar1,auStack_38);
    param_2 = &stack_pair_50.first;
    stack_pair_50.second = stack_pair_50.second & 0x10000 | 1;
  }
  uVar1 = fn_82B4BAA8(param_1,param_2);
  if (param_3 == 0xb) {
    uVar2 = fn_82B48CF0();
  }
  else {
    uVar2 = fn_82B48C48(param_1,uVar1);
    if (param_3 == 0x4a) {
      uVar1 = fn_82B48CF0(param_1,uVar1);
      uVar1 = fn_82B496A0(param_1,uVar1);
      uVar2 = fn_82B49D90(param_1,uVar2,uVar1);
    }
  }
  return uVar2;
}

