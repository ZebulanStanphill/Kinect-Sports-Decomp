extern unsigned int *auStack_70;
extern int fn_822EDDB0();
extern int fn_822EF458();
extern int fn_82F63AB8();
extern int fn_82F65148();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000028;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;


unsigned __int64 *
fn_822ED6F0(unsigned __int64 *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned int *param_6,unsigned __int64 *param_7)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  char cVar3;
  unsigned __int64 extraout_f1;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  int iStack_80;
  int iStack_7c;
  unsigned char *apuStack_78 [2];
  unsigned char auStack_70 [112];
  
  iStack_7c = 0;
  iStack_80 = 0;
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uVar1 = fn_822EDDB0(param_2,auStack_70,&stack0x00000020,&stack0x00000028,param_5,&iStack_80);
  uVar2 = fn_82F63AB8(auStack_70,apuStack_78,uVar1,&iStack_7c);
  uVar1 = extraout_f1;
  if (iStack_80 != 0) {
    uVar1 = fn_82F65148(uVar2,iStack_80 << 2);
  }
  cVar3 = fn_822EF458(&stack0x00000020,&stack0x00000028);
  if (cVar3 != '\0') {
    *param_6 = *param_6 | 1;
  }
  if ((apuStack_78[0] == auStack_70) || (iStack_7c != 0)) {
    *param_6 = *param_6 | 2;
  }
  else {
    *param_7 = uVar1;
  }
  *param_1 = uStack00000020;
  return param_1;
}

