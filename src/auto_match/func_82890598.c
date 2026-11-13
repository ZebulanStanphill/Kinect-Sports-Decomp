extern unsigned int *auStack_28;
extern int fn_8288CCB8();
extern int fn_82897620();
extern int fn_82897B18();
extern int fn_828A12E8();
extern int fn_828B5580();
extern int fn_828B55B0();


unsigned __int64 fn_82890598(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,unsigned __int64 param_4)

{
  int *piVar1;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int aiStack_30 [2];
  unsigned char auStack_28 [16];
  
  fn_828B5580(auStack_28,param_3 + 8);
  iVar4 = fn_828A12E8(param_2);
  fn_8288CCB8(aiStack_30,iVar4 + 4,auStack_28);
  if ((aiStack_30[0] != *(int *)(iVar4 + 8)) &&
     (piVar1 = *(int **)(aiStack_30[0] + 0x14), piVar1 != (int *)0x0)) {
    uVar2 = fn_82897B18(param_4);
    uVar3 = (**(int (***)())(*piVar1 + 8))(piVar1);
    uVar2 = fn_82897620(uVar3,uVar2);
    fn_828B55B0(auStack_28);
    return uVar2;
  }
  fn_828B55B0(auStack_28);
  return 0;
}

