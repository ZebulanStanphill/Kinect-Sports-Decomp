typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_28;
extern int fn_822315A0();
extern int fn_8255BB98();
extern int fn_828AD0F8();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_82593B00(int param_1)

{
  bool bVar1;
  int *piVar3;
  unsigned __int64 uVar2;
  bool bVar4;
  unsigned int uStack_30;
  int iStack_2c;
  unsigned char auStack_28 [4];
  int iStack_24;
  
  bVar4 = false;
  uStack_30 = 0;
  if (param_1 != 0) {
    bVar4 = true;
    piVar3 = (int *)fn_8255BB98(&uStack_30,*(unsigned int *)(param_1 + 0xd48));
    bVar1 = true;
    if (*piVar3 != 0) goto LAB_82593b4c;
  }
  bVar1 = false;
LAB_82593b4c:
  if ((bVar4) && (iStack_2c != 0)) {
    fn_822315A0();
  }
  if (bVar1) {
    piVar3 = (int *)fn_8255BB98(auStack_28,*(unsigned int *)(param_1 + 0xd48));
    uVar2 = fn_828AD0F8(*(unsigned int *)(*piVar3 + 8));
    if (iStack_24 != 0) {
      fn_822315A0(iStack_24);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

