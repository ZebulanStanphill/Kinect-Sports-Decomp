typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82CD3948();
extern int fn_82CD42A0();
extern int fn_82CD4B20();
extern int fn_82CD4C68();
extern int fn_82CD50D0();
extern int fn_82CD5570();
extern int fn_82CD9CA0();


unsigned __int64 fn_82CD58C0(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1[1] + 0x10);
  if ((iVar1 == 0) || (bVar3 = false, iVar1 == 3)) {
    bVar3 = true;
  }
  uVar2 = *(unsigned int *)(*param_1 + 0x10);
  if (uVar2 < 0x3231565a) {
    if ((uVar2 != 0x32315659) && (uVar2 != 0x30323449)) {
      if (uVar2 != 0x31313450) {
        return 3;
      }
      if (bVar3) {
        return 5;
      }
      if (iVar1 == 0x32595559) {
        param_1[0xe52] = (int)fn_82CD4B20;
        return 0;
      }
      if ((iVar1 != 0x56555949) && (iVar1 != 0x30323449)) {
        return 5;
      }
      if (param_1[0xe47] == 2) {
        return 5;
      }
      param_1[0xe51] = (int)fn_82CD3948;
      return 0;
    }
  }
  else {
    if (uVar2 == 0x32323450) {
      if (bVar3) {
        return 5;
      }
      if (iVar1 != 0x32595559) {
        if (((iVar1 != 0x30323449) && (iVar1 != 0x56555949)) && (iVar1 != 0x32315659)) {
          return 5;
        }
        param_1[0xe51] = (int)fn_82CD42A0;
        return 0;
      }
      param_1[0xe52] = (int)fn_82CD50D0;
      return 0;
    }
    if (uVar2 != 0x56555949) {
      return 3;
    }
  }
  if (!bVar3) {
    if (iVar1 == 0x32595559) {
      if (param_1[0xe47] != 2) {
        param_1[0xe52] = (int)fn_82CD5570;
        return 0;
      }
      param_1[0xe52] = (int)fn_82CD4C68;
      return 0;
    }
    if (((iVar1 == 0x30323449) || (iVar1 == 0x56555949)) || (iVar1 == 0x32315659)) {
      param_1[0xe51] = (int)fn_82CD9CA0;
      return 0;
    }
  }
  return 5;
}

