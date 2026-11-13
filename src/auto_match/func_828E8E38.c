typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_828E61D0();
extern int fn_828E8728();
extern int fn_828E8A40();
extern unsigned int iStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


int fn_828E8E38(int param_1,unsigned int *param_2)

{
  bool bVar1;
  unsigned int uVar3;
  unsigned __int64 uVar2;
  unsigned int auStack_40 [4];
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  int iStack_24;
  
  uVar3 = fn_828E61D0();
  if (uVar3 != *(unsigned int *)(param_1 + 4)) {
    if ((*param_2 < *(unsigned int *)(uVar3 + 0xc)) ||
       ((*param_2 <= *(unsigned int *)(uVar3 + 0xc) && (param_2[1] < *(unsigned int *)(uVar3 + 0x10))))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) goto LAB_828e8eec;
  }
  uStack_30 = *param_2;
  uStack_2c = param_2[1];
  iStack_24 = 0;
  uStack_28 = 0;
  uVar2 = fn_828E8A40(param_1,&uStack_30);
  fn_828E8728(auStack_40,param_1,uVar3,uVar2);
  uVar3 = auStack_40[0];
  if (iStack_24 != 0) {
    fn_822315A0();
  }
LAB_828e8eec:
  return uVar3 + 0x14;
}

