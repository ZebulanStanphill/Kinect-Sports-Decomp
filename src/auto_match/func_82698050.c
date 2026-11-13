#define CONCAT17(h,l) ((unsigned __int64)((((unsigned char)(h)) << 56) | ((unsigned __int64)(l))))
extern int fn_82681838();
extern int fn_82681898();
extern int fn_826944C8();
extern int fn_826959C8();
extern int fn_82695FA0();
extern int fn_82696D38();
extern int fn_82697248();
extern int fn_826972E0();
extern int fn_82697820();
extern int fn_82697918();
extern int fn_826979D0();
extern unsigned int iStack_68;


void fn_82698050(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned char uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  double dVar4;
  __int64 lStack_70;
  int iStack_68;
  int aiStack_60 [4];
  unsigned char abStack_50 [16];
  unsigned char abStack_40 [64];
  
  abStack_50[0] = 0;
  uVar2 = fn_826979D0(abStack_40,param_1,param_2,0);
  fn_82695FA0(abStack_50,uVar2);
  if (4 < abStack_40[0]) {
    fn_826959C8(abStack_40);
  }
  if (abStack_50[0] == 5) {
    uVar1 = *(unsigned char *)(param_2 + 0x7c);
    fn_82697820(abStack_50,param_2,uVar1);
    lStack_70 = CONCAT17(4,(((unsigned __int64)(lStack_70) >> 8) & 0xFFFFFFFFFFFFFF));
    iStack_68 = param_3;
    uVar2 = fn_82697248(aiStack_60,&lStack_70,param_2,uVar1);
    fn_82697918(abStack_50,param_2,uVar2);
    lVar3 = (unsigned __int64)*(unsigned int *)(aiStack_60[0] + 8) - 1;
    *(int *)(aiStack_60[0] + 8) = (int)lVar3;
    if (lVar3 == 0) {
      fn_826944C8(aiStack_60[0]);
    }
    fn_82696D38(&lStack_70,abStack_50,param_2,0xffffffffffffffff,0);
    fn_82681838(param_1,&lStack_70);
    lVar3 = (unsigned __int64)*(unsigned int *)((((unsigned __int64)(lStack_70) >> 0) & 0xFFFFFFFF) + 8) - 1;
    *(int *)((((unsigned __int64)(lStack_70) >> 0) & 0xFFFFFFFF) + 8) = (int)lVar3;
    if (lVar3 == 0) {
      fn_826944C8();
    }
  }
  else {
    dVar4 = (double)fn_826972E0(abStack_50,param_2);
    lStack_70 = (__int64)param_3;
    fn_82681898(dVar4 + (double)lStack_70,param_1);
  }
  if (4 < abStack_50[0]) {
    fn_826959C8(abStack_50);
  }
  return;
}

