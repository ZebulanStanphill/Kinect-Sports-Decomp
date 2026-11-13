typedef unsigned char bool;
extern int fn_82237E90();
extern int fn_82237EF8();


void fn_82237C68(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  bool bVar1;
  int iVar2;
  unsigned int *puVar3;
  
  if (param_2 != (unsigned int *)*param_1) {
    do {
      if ((param_2 != (unsigned int *)0x0) && (param_2[3] != 1)) break;
      puVar3 = (unsigned int *)param_3[1];
      if (param_2 == puVar3) {
        puVar3 = (unsigned int *)param_3[2];
        if (puVar3[3] == 0) {
          puVar3[3] = 1;
          param_3[3] = 0;
          fn_82237E90(param_3,param_1);
          puVar3 = (unsigned int *)param_3[2];
        }
        iVar2 = puVar3[1];
        if (((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 1)) ||
           ((puVar3[2] != 0 && (*(int *)(puVar3[2] + 0xc) != 1)))) {
          if ((puVar3[2] == 0) || (*(int *)(puVar3[2] + 0xc) == 1)) {
            *(unsigned int *)(iVar2 + 0xc) = 1;
            puVar3[3] = 0;
            fn_82237EF8(puVar3,param_1);
            puVar3 = (unsigned int *)param_3[2];
          }
          puVar3[3] = param_3[3];
          param_3[3] = 1;
          if (puVar3[2] != 0) {
            *(unsigned int *)(puVar3[2] + 0xc) = 1;
          }
          fn_82237E90(param_3,param_1);
          break;
        }
      }
      else {
        if (puVar3[3] == 0) {
          puVar3[3] = 1;
          param_3[3] = 0;
          fn_82237EF8(param_3,param_1);
          puVar3 = (unsigned int *)param_3[1];
        }
        iVar2 = puVar3[2];
        if (((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 1)) ||
           ((puVar3[1] != 0 && (*(int *)(puVar3[1] + 0xc) != 1)))) {
          if ((puVar3[1] == 0) || (*(int *)(puVar3[1] + 0xc) == 1)) {
            *(unsigned int *)(iVar2 + 0xc) = 1;
            puVar3[3] = 0;
            fn_82237E90(puVar3,param_1);
            puVar3 = (unsigned int *)param_3[1];
          }
          puVar3[3] = param_3[3];
          param_3[3] = 1;
          if (puVar3[1] != 0) {
            *(unsigned int *)(puVar3[1] + 0xc) = 1;
          }
          fn_82237EF8(param_3,param_1);
          break;
        }
      }
      puVar3[3] = 0;
      bVar1 = param_3 != (unsigned int *)*param_1;
      param_2 = param_3;
      param_3 = (unsigned int *)*param_3;
    } while (bVar1);
  }
  if (param_2 != (unsigned int *)0x0) {
    param_2[3] = 1;
  }
  return;
}

