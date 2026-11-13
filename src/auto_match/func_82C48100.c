extern unsigned int *auStack_80;
extern unsigned int *auStack_84;
extern unsigned int *auStack_88;
extern unsigned int *auStack_8c;
extern int fn_82C5E518();
extern int fn_82C80278();
extern int fn_82C81730();
extern int fn_82C818C8();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_6c;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_62;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_90;


unsigned __int64
fn_82C48100(int param_1,int param_2,unsigned short param_3,unsigned __int64 param_4,unsigned int param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int in_stack_00000054;
  unsigned int uStack_90;
  unsigned char auStack_8c [4];
  unsigned char auStack_88 [4];
  unsigned char auStack_84 [4];
  unsigned char auStack_80 [16];
  struct { unsigned int first; int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned short uStack_64;
  unsigned short uStack_62;
  int iStack_60;
  int iStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  
  if (param_1 == 0) {
    uVar2 = 0xfffffffffffffffd;
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x2e0);
    stack_pair_70.second = (int)param_4;
    stack_pair_70.first = 0x28;
    uStack_64 = 1;
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar3 = (unsigned int)param_3 * stack_pair_70.second;
      iStack_5c = ((param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f)) *
                  (((int)uVar3 >> 3) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 7) != 0) + 3 & 0xfffffffc);
    }
    else {
      uVar3 = (unsigned int)param_3 * stack_pair_70.second * param_5;
      iStack_5c = ((int)uVar3 >> 3) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 7) != 0);
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_68 = param_5;
    uStack_62 = param_3;
    iStack_60 = param_2;
    fn_82C5E518(uVar1,auStack_8c,auStack_88);
    fn_82C818C8(uVar1,&stack_pair_70.first,&uStack_90,param_6,param_7,0,0,param_4);
    uVar3 = (unsigned int)uStack_62 * (int)param_6 * (int)param_7;
    fn_82C81730(uStack_90,param_8,iStack_5c,auStack_80,in_stack_00000054,
                      (__int64)((int)uVar3 >> 3) + (unsigned __int64)((int)uVar3 < 0 && (uVar3 & 7) != 0),
                      auStack_84);
    fn_82C80278(uStack_90);
    uVar2 = 0;
  }
  return uVar2;
}

