#define true 1
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern int fn_82FF5400();
extern int fn_82FF59A8();
extern unsigned int iStack_40;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642F4;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_4c;


unsigned __int64 fn_8300A520(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int *piVar3;
  double dVar4;
  int *piStack_50;
  unsigned int uStack_4c;
  float fStack_48;
  float fStack_44;
  int iStack_40;
  unsigned int uStack_3c;
  unsigned char uStack_38;
  
  puVar1 = *(unsigned int **)(param_1 + 0x7c);
  while( true ) {
    if (puVar1 == (unsigned int *)0x0) {
      return 1;
    }
    if (puVar1[1] == param_2) break;
    puVar1 = (unsigned int *)*puVar1;
  }
  piVar3 = puVar1 + 2;
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  dVar4 = (double)lbl_821AAD20;
  if (puVar1[4] != 0) {
    fStack_44 = lbl_821AAD20;
    fn_82FF5400(dVar4,lbl_832642F4,puVar1[4],0x10000,param_4,param_3,param_4,0);
  }
  if (puVar1[4] != 0) {
    return 1;
  }
  fStack_48 = (float)puVar1[5];
  fStack_44 = (float)dVar4;
  if (((double)fStack_48 != dVar4) && (iStack_40 = (int)param_3, iStack_40 != 0)) {
    uStack_3c = (unsigned int)param_4;
    uStack_4c = 0x10000;
    uStack_38 = 1;
    piStack_50 = piVar3;
    uVar2 = fn_82FF59A8(lbl_832642F4,&piStack_50,1,0);
    puVar1[4] = uVar2;
    return 1;
  }
  (**(int (***)())*piVar3)(dVar4,piVar3,0x10000);
  return 1;
}

