extern unsigned int *auStack_40;
extern int fn_8263B758();
extern int fn_8266C8A0();
extern int fn_8266EC60();
extern int fn_82670230();
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_826896B8();
extern int fn_82F67FE8();
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_82675760(unsigned __int64 param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  int *piVar5;
  char cVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar7;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  int aiStack_48 [2];
  unsigned char auStack_40 [24];
  unsigned int uStack_28;
  unsigned int uStack_24;
  
  uVar7 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  fn_82F67FE8(param_2 + 6,0xffffffff82002c30,&uStack_50,&uStack_4c);
  uVar1 = uStack_50;
  fn_8263B758(uStack_50,0,auStack_40);
  uVar2 = fn_8266EC60();
  puVar4 = (unsigned int *)fn_8266C8A0(aiStack_48,uVar2);
  piVar5 = (int *)(**(int (***)())(*(int *)*puVar4 + 8))();
  if (aiStack_48[0] != 0) {
    fn_8267C4F0(aiStack_48[0]);
  }
  if (piVar5 != (int *)0x0) {
    cVar6 = (**(int (***)())(*piVar5 + 0x34))(piVar5,uVar1,0,0);
    if (cVar6 != '\0') {
      uVar3 = fn_8267B890(lbl_831E7E64,0x24,0);
      if ((uVar3 & 0xffffffff) != 0) {
        uVar7 = fn_826896B8(uVar3,piVar5,uStack_28,uStack_24);
      }
      fn_82670230(piVar5);
      return uVar7;
    }
    fn_82670230(piVar5);
  }
  return 0;
}

