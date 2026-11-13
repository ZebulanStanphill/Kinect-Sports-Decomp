#define true 1
extern int fn_82CE5410();


void fn_82D741B8(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5
                  )

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  puVar1 = (unsigned int *)*param_2;
  piVar2 = (int *)*puVar1;
  iVar6 = 0;
  iVar5 = 0;
  do {
    iVar3 = *piVar2;
    piVar7 = piVar2 + 4;
    do {
      piVar8 = piVar7;
      switch(*(unsigned char *)piVar7) {
      case 0:
        piVar8 = (int *)((unsigned int)(unsigned char)*piVar7 + (int)piVar7);
        break;
      case 1:
        iVar6 = puVar1[iVar6];
        if (iVar6 != 0) {
          iVar5 = fn_82CE5410();
          (**(int (***)())(**(int **)(iVar5 + 0x10) + 8))(*(int **)(iVar5 + 0x10),iVar6,0x200);
        }
        iVar6 = fn_82CE5410();
        piVar2 = *(int **)(iVar6 + 0x10);
        param_2[1] = 0;
        if ((param_2[2] & 0x80000000U) == 0) {
          (**(int (***)())(*piVar2 + 0x10))(piVar2,*param_2,param_2[2] & 0x3fffffff,4);
        }
        *param_2 = 0;
        param_2[2] = -0x80000000;
        return;
      case 2:
      case 3:
      case 6:
      case 10:
      case 0xb:
      case 0xe:
        piVar8 = (int *)((unsigned int)(unsigned char)*piVar7 + (int)piVar7);
        (**(int (***)())((unsigned int)*(unsigned char *)((int)piVar7 + 1) * 0x50 + param_5 + 0x16b4))
                  (piVar7,piVar7 + 4,param_3,param_4,param_5);
        break;
      case 4:
      case 5:
      case 0xc:
      case 0xd:
        piVar8 = (int *)((unsigned int)(unsigned char)*piVar7 + (int)piVar7);
        (**(int (***)())((unsigned int)*(unsigned char *)((int)piVar7 + 1) * 0x50 + param_5 + 0x16b4))
                  (piVar7,piVar7 + 8,param_3,param_4,param_5);
      }
      piVar7 = piVar8;
    } while (piVar8 < (int *)((int)piVar2 + iVar3 + 0x10));
    iVar3 = *(int *)(iVar5 + (int)puVar1);
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 4;
    if (iVar3 != 0) {
      iVar4 = fn_82CE5410();
      (**(int (***)())(**(int **)(iVar4 + 0x10) + 8))(*(int **)(iVar4 + 0x10),iVar3,0x200);
    }
    piVar2 = *(int **)(*param_2 + iVar5);
  } while( true );
}

