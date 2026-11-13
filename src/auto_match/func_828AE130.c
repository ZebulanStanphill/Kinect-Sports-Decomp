typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_828ACC40();
extern int fn_828AD0F8();
extern int fn_828AD488();
extern int fn_828ADCE8();
extern int fn_828B2DE8();
extern int fn_828B8F40();
extern int fn_828B9250();
extern int fn_828D0F50();


unsigned __int64
fn_828AE130(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6)

{
  int iVar1;
  bool bVar2;
  char cVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int in_stack_0000007c;
  
  cVar6 = fn_828AD0F8();
  if (cVar6 == '\0') {
    cVar6 = fn_828AD488(param_1);
    bVar2 = false;
    if (cVar6 != '\0') goto LAB_828ae184;
  }
  else {
LAB_828ae184:
    bVar2 = true;
  }
  if (bVar2) {
    cVar6 = fn_828ACC40(param_1);
    bVar2 = true;
    if (cVar6 != '\0') goto LAB_828ae1b0;
  }
  bVar2 = false;
LAB_828ae1b0:
  if ((!bVar2) || (bVar2 = true, *(int *)(param_1 + 0x8c) == 0)) {
    bVar2 = false;
  }
  if ((!bVar2) || (bVar2 = true, *(int *)(*(int *)(param_1 + 0x8c) + 8) != 0)) {
    bVar2 = false;
  }
  if ((!bVar2) || (bVar2 = true, (param_4 & 0xffffffff) == 0)) {
    bVar2 = false;
  }
  if ((!bVar2) || (bVar2 = true, (param_5 & 0xffffffff) == 0)) {
    bVar2 = false;
  }
  if ((!bVar2) || (bVar2 = true, (param_5 & 0xffffffff) < (param_4 & 0xffffffff))) {
    bVar2 = false;
  }
  if ((!bVar2) || (bVar2 = true, *(char *)(in_stack_0000007c + 4) != '\x01')) {
    bVar2 = false;
  }
  cVar6 = fn_828AD488(param_1);
  if (cVar6 == '\0') {
    cVar6 = fn_828AD0F8(param_1);
    if (cVar6 == '\0') {
      return 0;
    }
    if (*(char *)(*param_2 + 100) == '\0') {
      return 0;
    }
  }
  else if (*(char *)(*param_2 + 100) != '\0') {
    return 0;
  }
  fn_828B9250();
  fn_828AD0F8(param_1);
  if (!bVar2) {
    return 0;
  }
  iVar1 = *param_2;
  uVar3 = fn_828D0F50(iVar1);
  uVar4 = fn_828B2DE8(iVar1);
  uVar5 = fn_828B8F40(iVar1);
  uVar3 = fn_828ADCE8(param_1,param_3,param_4,param_5,param_6,uVar5,uVar4,uVar3);
  return uVar3;
}

