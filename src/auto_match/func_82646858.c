extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_82637398();
extern int fn_82637840();
extern int fn_82639DB0();
extern int fn_82639EA8();
extern int fn_8263DF30();
extern int fn_82643B08();
extern int fn_82645110();
extern int fn_82645EA8();
extern int fn_8264EFE0();
extern int memcpy();
extern unsigned int lbl_83000000;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_82646858(int param_1,unsigned char param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned int uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  if ((*(unsigned char *)(param_1 + 0x2abc) & 0x20) == 0) {
    *(unsigned int *)(param_1 + 0x3260) = 1;
    fn_8264EFE0();
  }
  else {
    fn_82645110();
  }
  puVar1 = *(unsigned int **)(param_1 + 0x350c);
  if (*(unsigned int **)(param_1 + 0x3510) < puVar1 + 1) {
    puVar1 = (unsigned int *)fn_82643B08(param_1 + 0x3500);
  }
  *puVar1 = &lbl_83000000;
  *(unsigned int **)(param_1 + 0x350c) = puVar1 + 1;
  *(unsigned int *)(param_1 + 0x3250) = *(unsigned int *)(param_1 + 0x2934) >> 4 & 7;
  *(unsigned char *)(param_1 + 0x2abc) = *(unsigned char *)(param_1 + 0x2abc) | 0x40;
  uVar4 = *(unsigned __int64 *)(param_1 + 0x28) | 0x2000000000;
  if (((*(unsigned char *)(param_1 + 0x2abf) & 0x20) != 0) &&
     (*(unsigned int *)(param_1 + 0x3428) != (*(unsigned int *)(param_1 + 0x2880) & 0x3fff))) {
    uVar4 = *(unsigned __int64 *)(param_1 + 0x28) | 0x200002000000000;
  }
  *(unsigned __int64 *)(param_1 + 0x28) = uVar4;
  *(unsigned char *)(param_1 + 0x2abd) = (~param_2 & 1) << 6 | *(unsigned char *)(param_1 + 0x2abd) & 0xbf;
  *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) | 8;
  *(unsigned int *)(param_1 + 0x324c) = 0xffffffff;
  fn_82637398(param_1,1);
  if (((*(unsigned int *)(param_1 + 0x3434) & 1) == 0) && ((*(unsigned char *)(param_1 + 0x2abf) & 0x20) != 0)) {
    uVar7 = 0;
    uVar6 = 0;
    uVar2 = 0;
    if (*(unsigned int *)(param_1 + 0x327c) != 0) {
      piVar3 = (int *)(param_1 + 0x328c);
      piVar5 = (int *)(param_1 + 0x3374);
      uVar7 = 0;
      uVar6 = 0;
      do {
        if (uVar7 <= (unsigned int)(piVar3[-1] - piVar5[-1])) {
          uVar7 = piVar3[-1] - piVar5[-1];
        }
        if (uVar6 <= (unsigned int)(*piVar3 - *piVar5)) {
          uVar6 = *piVar3 - *piVar5;
        }
        uVar2 = uVar2 + 1;
        piVar5 = piVar5 + 2;
        piVar3 = piVar3 + 4;
      } while (uVar2 < *(unsigned int *)(param_1 + 0x327c));
    }
    memcpy(&fStack_60,param_1 + 0x3218,0x1c);
    stack_pair_70.first = *(unsigned int *)(param_1 + 0x3234);
    stack_pair_70.second = *(unsigned int *)(param_1 + 0x3238);
    uStack_68 = *(unsigned int *)(param_1 + 0x323c);
    uStack_64 = *(unsigned int *)(param_1 + 0x3240);
    fn_82639EA8(param_1,0xffffffff821cc030);
    fn_82639DB0(param_1,0xffffffff821cc048);
    uStack_78 = *(unsigned int *)(param_1 + 0x342c);
    uStack_74 = *(unsigned int *)(param_1 + 0x3430);
    uStack_80 = 0;
    uStack_7c = 0;
    fn_82645EA8(param_1,1);
    fn_8263DF30((double)*(float *)(param_1 + 0x3450),param_1,0x30,&uStack_80,param_1 + 0x3440);
    uVar8 = 0xf;
    if ((*(unsigned char *)(param_1 + 0x2abf) & 0x10) == 0) {
      uVar8 = 0x3f;
    }
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = uVar7;
    uStack_74 = uVar6;
    fn_82645EA8(param_1,2);
    fn_8263DF30((double)*(float *)(param_1 + 0x3450),param_1,uVar8,&uStack_80,param_1 + 0x3440);
    fn_82645EA8(param_1,0);
    fn_82637840((double)fStack_60,(double)fStack_5c,(double)fStack_58,(double)fStack_54,
                      (double)fStack_50,(double)fStack_4c,param_1);
    fn_82639DB0(param_1,&stack_pair_70.first);
  }
  return;
}

