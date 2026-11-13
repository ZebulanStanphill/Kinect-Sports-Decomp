#define true 1
extern int fn_827E40D0();
extern int fn_827E4408();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_827E82F8(int *param_1,unsigned __int64 param_2)

{
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar1;
  int iVar4;
  int iVar5;
  int *piVar6;
  unsigned int uStack0000001c;
  
  uStack0000001c = (unsigned int)param_2;
  iVar5 = 0;
  iVar2 = fn_827E4408(param_2);
  if (iVar2 != 0) {
    piVar3 = (int *)*param_1;
    piVar6 = (int *)*piVar3;
    if (piVar6 != piVar3) {
      iVar5 = piVar6[2];
      piVar6 = (int *)*piVar6;
      if (piVar6 != piVar3) {
        piVar3 = (int *)fn_827E4408(param_2);
        iVar2 = *piVar3;
        uVar1 = fn_827E4408(iVar5);
        iVar2 = (**(int (***)())(iVar2 + 4))(piVar3,uVar1);
        if (iVar2 < 0) {
          for (; piVar6 != (int *)*param_1; piVar6 = (int *)*piVar6) {
            iVar2 = piVar6[2];
            piVar3 = (int *)fn_827E4408(iVar2);
            iVar4 = *piVar3;
            uVar1 = fn_827E4408(iVar5);
            iVar4 = (**(int (***)())(iVar4 + 4))(piVar3,uVar1);
            if (iVar4 < 0) break;
            iVar5 = iVar2;
          }
        }
      }
    }
    do {
      if (piVar6 == (int *)*param_1) goto code_r0x827e841c;
      iVar5 = piVar6[2];
      piVar3 = (int *)fn_827E4408(param_2);
      iVar2 = *piVar3;
      uVar1 = fn_827E4408(iVar5);
      iVar2 = (**(int (***)())(iVar2 + 4))(piVar3,uVar1);
      if (iVar2 < 0) {
        piVar3 = (int *)piVar6[1];
        goto LAB_827e8428;
      }
      piVar6 = (int *)*piVar6;
    } while( true );
  }
  piVar3 = (int *)*param_1;
LAB_827e8428:
  fn_827E40D0(param_1,piVar3,&stack0x0000001c);
  return;
code_r0x827e841c:
  piVar3 = (int *)*param_1;
  if (iVar5 != 0) {
    piVar3 = piVar6;
  }
  goto LAB_827e8428;
}

