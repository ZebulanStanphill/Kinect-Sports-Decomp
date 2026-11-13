#define true 1
extern unsigned int lbl_8200133C;


void fn_82D74238(double param_1,double param_2,unsigned __int64 param_3,int *param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,int *param_7)

{
  int (**pcVar1)();
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  double dVar6;
  
  iVar3 = 4;
  piVar4 = *(int **)*param_4;
  piVar2 = (int *)((int)piVar4 + *piVar4 + 0x10);
  dVar6 = (double)lbl_8200133C;
  piVar4 = piVar4 + 4;
  do {
    piVar5 = piVar4;
    switch(*(unsigned char *)piVar4) {
    case 0:
      piVar5 = (int *)((unsigned int)(unsigned char)*piVar4 + (int)piVar4);
      break;
    case 1:
      return;
    case 2:
    case 3:
    case 6:
    case 10:
    case 0xb:
    case 0xe:
      piVar5 = (int *)((unsigned int)(unsigned char)*piVar4 + (int)piVar4);
      pcVar1 = *(int (***)())((unsigned int)*(unsigned char *)((int)piVar4 + 1) * 0x50 + *param_7 + 0x16d4);
      if (pcVar1 != (int (**)())0x0) {
        (*pcVar1)(param_1,param_2,piVar4,piVar4 + 4);
      }
      break;
    case 4:
    case 5:
    case 0xc:
    case 0xd:
      if ((double)(float)piVar4[3] == param_1) {
        piVar4[3] = (int)(float)param_2;
      }
      else {
        piVar4[3] = (int)(float)dVar6;
      }
      piVar5 = (int *)((unsigned int)(unsigned char)*piVar4 + (int)piVar4);
      pcVar1 = *(int (***)())((unsigned int)*(unsigned char *)((int)piVar4 + 1) * 0x50 + *param_7 + 0x16d4);
      if (pcVar1 != (int (**)())0x0) {
        (*pcVar1)(param_1,param_2,piVar4,piVar4 + 8);
      }
    }
    piVar4 = piVar5;
    if (piVar2 <= piVar5) {
      piVar2 = *(int **)(*param_4 + iVar3);
      iVar3 = iVar3 + 4;
      piVar4 = piVar2 + 4;
      piVar2 = (int *)((int)piVar2 + *piVar2 + 0x10);
    }
  } while( true );
}

