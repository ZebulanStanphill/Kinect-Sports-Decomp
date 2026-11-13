extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern int fn_8251FA58();
extern int fn_82526A20();
extern int fn_82526C70();
extern int fn_8256A790();
extern int fn_8265BF48();
extern int fn_82837D88();
extern int fn_828387B8();
extern int fn_82851760();
extern int fn_82851858();
extern int iRam8328220c;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_825B51E8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int auStack_58 [2];
  unsigned char auStack_50 [48];
  
  iVar3 = param_3 * 4;
  if (*(int *)(*(int *)(*param_1 + 0x98) + iVar3) != 0) {
    uStack_60 = 0;
    fn_82526C70(auStack_50,0x20,0xffffffff821c8460,param_3);
    iVar1 = fn_82851760(*param_1,auStack_50,0,&uStack_5c);
    if (iVar1 != 0) {
      fn_82851858(uStack_5c,&uStack_60);
    }
    uVar2 = (unsigned __int64)uStack_60;
    if (uVar2 == 0) {
      if (*(int *)(param_3 * 0x20 + param_2 + 0x10) == 0) {
        fn_828387B8(*(unsigned int *)(*(int *)(*param_1 + 0x98) + iVar3),auStack_58);
        fn_82837D88(*(unsigned int *)(*(int *)(*param_1 + 0x98) + iVar3));
      }
      else {
        fn_8251FA58();
      }
    }
    else {
      iVar1 = fn_82526A20(uVar2,0xffffffff821c8450);
      if (iVar1 == 0) {
        iRam8328220c = iRam8328220c + -1;
      }
      else {
        auStack_58[0] = fn_8265BF48(uVar2,0);
        fn_8256A790(auStack_58,*(int *)(*param_1 + 0x98) + iVar3);
      }
    }
    *(unsigned int *)(*(int *)(*param_1 + 0x98) + iVar3) = 0;
  }
  return;
}

