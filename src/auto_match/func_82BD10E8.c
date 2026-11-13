extern int fn_82BC0088();
extern int fn_82BD0948();
extern int fn_82BD0A98();
extern int fn_82BD34A0();
extern unsigned int lbl_83223EC4;


unsigned __int64 fn_82BD10E8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  char cVar2;
  unsigned int *puVar1;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  
  iVar4 = (int)param_3;
  iVar3 = (int)param_2;
  if (iVar3 != iVar4) {
    cVar2 = fn_82BD0948(param_1,param_3,param_2);
    if (cVar2 != '\0') {
      return 0;
    }
    uVar5 = param_3;
    if ((iVar3 <= iVar4) && (uVar5 = param_2, iVar3 < iVar4)) {
      param_2 = param_3;
    }
    fn_82BD34A0(uVar5,param_2,lbl_83223EC4);
    iVar3 = *(int *)(param_1 + 4);
    if ((uVar5 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar3 + 4)) {
      puVar1 = (unsigned int *)(*(int *)(iVar3 + 8) + (int)uVar5 * 4);
    }
    else {
      puVar1 = (unsigned int *)fn_82BC0088(iVar3,uVar5);
    }
    fn_82BD0A98(*puVar1,param_2,param_1);
  }
  return 1;
}

