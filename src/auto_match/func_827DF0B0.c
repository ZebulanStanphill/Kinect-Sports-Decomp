#define true 1
extern unsigned int *auStack_40;
extern int fn_827D96A0();
extern int fn_827D9780();
extern int fn_827E0580();
extern int fn_827E2598();
extern int fn_827E25A8();


unsigned int fn_827DF0B0(__int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int auStack_40 [2];
  unsigned int *puStack_38;
  unsigned int *puStack_34;
  
  auStack_40[0] = fn_827D96A0(param_2);
  fn_827E0580(&puStack_38,param_1 + 0x78,auStack_40);
  puVar2 = puStack_38;
  do {
    if (puVar2 == puStack_34) {
      return 0;
    }
    uVar1 = puVar2[3];
    uVar3 = fn_827E2598(uVar1);
    iVar4 = fn_827D9780(uVar3,param_2);
    if (iVar4 == 0) {
      if (param_3 == -1) {
        return uVar1;
      }
      iVar4 = fn_827E25A8(uVar1);
      if (param_3 == iVar4) {
        return uVar1;
      }
    }
    puVar2 = (unsigned int *)*puVar2;
  } while( true );
}

