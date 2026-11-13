typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82279C58();
extern int fn_826728E8();
extern int fn_82837D98();
extern unsigned int iStack_2c;
extern unsigned int iStack_34;


void fn_8228D3D0(unsigned __int64 param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int auStack_40;
  unsigned char auStack_38 [4];
  int iStack_34;
  unsigned char auStack_30 [4];
  int iStack_2c;
  
  piVar2 = (int *)fn_82279C58(auStack_38,param_1);
  if ((*piVar2 == 0) || (bVar1 = true, param_2 == 0)) {
    bVar1 = false;
  }
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  if (bVar1) {
    fn_82837D98(*(unsigned int *)(param_2 + 0x14),0,&auStack_40);
    puVar3 = (unsigned int *)fn_82279C58(auStack_30,param_1);
    fn_826728E8(*puVar3,0xffffffff821a84fc,auStack_40);
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  return;
}

