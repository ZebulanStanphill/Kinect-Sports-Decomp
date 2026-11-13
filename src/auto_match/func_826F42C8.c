typedef unsigned char bool;
#define true 1
extern int fn_8267B890();
extern int fn_82687270();
extern int fn_82687F98();
extern int fn_826D6828();
extern int fn_826F30F0();
extern int fn_82768968();


bool fn_826F42C8(unsigned __int64 param_1,int *param_2,int *param_3,int param_4,unsigned __int64 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar5;
  char cVar7;
  int iVar6;
  unsigned __int64 uVar4;
  unsigned int uVar8;
  
  uVar8 = 0;
  if (*(int *)(param_4 + 0x4c) != 0) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(*(int *)(param_4 + 0x48) + iVar6);
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x1c) + 0xc) + 0x20) + 0x98);
      sync(1);
      while (iVar1 != 0) {
        piVar2 = *(int **)(iVar1 + 4);
        iVar5 = (**(int (***)())(*piVar2 + 0x38))(piVar2);
        if ((iVar5 != 0) && (cVar7 = fn_826D6828(param_2,piVar2), cVar7 != '\0')) {
          iVar6 = *(int *)(iVar3 + 0x1c);
          if ((*(char *)(iVar6 + 0x40) == '\0') || (*(unsigned int *)(iVar6 + 0x1c) <= *(unsigned int *)(iVar1 + 8))
             ) {
            fn_826F30F0(iVar6 + 0x18,param_3);
          }
          else {
            fn_82687F98(param_3,(unsigned __int64)*(unsigned int *)(iVar6 + 0x20) +
                                      ((unsigned __int64)*(unsigned int *)(iVar1 + 8) & 0x1fffffff) * 8);
          }
          return true;
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        sync(1);
      }
      uVar8 = uVar8 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar8 < *(unsigned int *)(param_4 + 0x4c));
  }
  cVar7 = (**(int (***)())(*param_2 + 0x40))(param_2);
  if ((cVar7 == '\0') && (iVar6 = (**(int (***)())(*param_2 + 0x3c))(param_2), iVar6 != 0)) {
    param_2[5] = param_2[5] | 0x40;
  }
  if (*param_3 == 0) {
    uVar4 = fn_8267B890(param_5,0x2c,0);
    if ((uVar4 & 0xffffffff) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = fn_82768968(uVar4,param_2,param_3[1]);
    }
    if (*param_3 != 0) {
      fn_82687270();
    }
    *param_3 = iVar6;
  }
  return *param_3 != 0;
}

