typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_80;
extern int memcpy();


void fn_8243FF38(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  unsigned char auStack_80 [96];
  
  if (param_2[0x13] == 1) {
    if (param_1[0x13] == 1) {
      if ((param_2[0x12] < param_1[0x12]) ||
         ((param_2[0x12] == param_1[0x12] && (*param_2 < *param_1)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    memcpy(auStack_80,param_2,0x5c);
    memcpy(param_2,param_1,0x5c);
    memcpy(param_1,auStack_80,0x5c);
  }
  if (param_3[0x13] == 1) {
    if (param_2[0x13] == 1) {
      if ((param_3[0x12] < param_2[0x12]) ||
         ((param_3[0x12] == param_2[0x12] && (*param_3 < *param_2)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    memcpy(auStack_80,param_3,0x5c);
    memcpy(param_3,param_2,0x5c);
    memcpy(param_2,auStack_80,0x5c);
  }
  if (param_2[0x13] == 1) {
    if (param_1[0x13] == 1) {
      if ((param_2[0x12] < param_1[0x12]) ||
         ((param_2[0x12] == param_1[0x12] && (*param_2 < *param_1)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    memcpy(auStack_80,param_2,0x5c);
    memcpy(param_2,param_1,0x5c);
    memcpy(param_1,auStack_80,0x5c);
  }
  return;
}

