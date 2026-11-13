extern int fn_82698C48();
extern int memcpy();


void fn_82699580(int *param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int uVar4;
  char cVar5;
  int aiStack_30;
  
  iVar1 = param_2[0x10];
  uVar2 = param_1[1];
  aiStack_30 = iVar1;
  uVar4 = fn_82698C48(param_1,0,uVar2,&aiStack_30,0xffffffff82698c28);
  if (uVar4 < uVar2) {
    piVar3 = *(int **)(uVar4 * 4 + *param_1);
    if (piVar3[5] == iVar1) {
      *(unsigned char *)((int)piVar3 + 0x66) = *(unsigned char *)((int)piVar3 + 0x66) & 0xbf;
      cVar5 = (**(int (***)())(*piVar3 + 0x10))(piVar3);
      if (cVar5 != '\0') {
        if ((*(unsigned char *)((int)param_2 + 0x4b) & 8) != 0) {
          memcpy(piVar3 + 9,param_2 + 1,0x20);
          (**(int (***)())(*piVar3 + 4))(piVar3);
        }
        if ((*(unsigned char *)((int)param_2 + 0x4b) & 4) != 0) {
          piVar3[0x11] = param_2[9];
          piVar3[0x12] = param_2[10];
          piVar3[0x13] = param_2[0xb];
          piVar3[0x14] = param_2[0xc];
          piVar3[0x15] = param_2[0xd];
          piVar3[0x16] = param_2[0xe];
        }
        if ((*(unsigned char *)((int)param_2 + 0x4b) & 0x80) != 0) {
          (**(int (***)())(*piVar3 + 0x18))(piVar3,*(unsigned char *)((int)param_2 + 0x4a));
        }
        if (*param_2 != 0) {
          (**(int (***)())(*piVar3 + 0x1c))(piVar3);
        }
        piVar3[7] = param_2[0xf];
      }
    }
  }
  return;
}

