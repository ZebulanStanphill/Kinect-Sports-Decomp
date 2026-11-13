#define true 1
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_8305CFA8();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_83060380();
extern unsigned char fn_830603C0();
extern int fn_830603D0();
extern int fn_83060CB0();
extern int fn_83060CD0();
extern int fn_83061508();
extern int fn_83061548();
extern int fn_83061F30();
extern int fn_83065E50();


void fn_8305D038(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned char cVar3;
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [48];
  
  fn_83061508(auStack_50);
  fn_83060380(auStack_70,param_3);
  fn_83060CB0(auStack_70);
  while( true ) {
    cVar3 = fn_830603C0(auStack_70);
    if (cVar3 != '\0') break;
    fn_8305CFA8(param_1,param_2,fn_830603D0(auStack_70),auStack_50);
    fn_83060CD0(auStack_70);
  }
  fn_83061548(param_3,0);
  fn_83060380(auStack_60,auStack_50);
  fn_83060CB0(auStack_60);
  while( true ) {
    cVar3 = fn_830603C0(auStack_60);
    if (cVar3 != '\0') break;
    uVar1 = fn_83065E50();
    fn_8305E0F8(uVar1,param_3);
    uVar2 = fn_830603D0(auStack_60);
    fn_8305EC98(uVar1,uVar2);
    fn_83060CD0(auStack_60);
  }
  fn_83061548(auStack_50,0);
  fn_83061F30(auStack_50);
  return;
}

