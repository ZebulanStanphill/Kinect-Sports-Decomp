#define true 1
extern unsigned int lbl_8200133C;


void fn_82D6FD90(int *param_1,int *param_2)

{
  unsigned char bVar1;
  int *piVar2;
  int iVar3;
  int (**pcVar4)();
  unsigned int *puVar5;
  unsigned char *pbVar6;
  int iVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  double dVar10;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  iVar7 = 4;
  piVar2 = *(int **)*param_1;
  pbVar6 = (unsigned char *)((int)piVar2 + *piVar2 + 0x10);
  dVar10 = (double)lbl_8200133C;
  pbVar8 = (unsigned char *)(piVar2 + 4);
  do {
    bVar1 = *pbVar8;
    pbVar9 = pbVar8;
    if (bVar1 < 0xf) {
      iVar3 = *(int *)((unsigned int)bVar1 * 4 + -0x7d29020c);
      switch(bVar1) {
      case 0:
        pbVar9 = pbVar8 + pbVar8[3];
        break;
      case 1:
        return;
      default:
        pbVar9 = pbVar8 + pbVar8[3];
        pcVar4 = *(int (***)())((pbVar8[1] + 0x49) * 0x50 + *param_2);
        if (pcVar4 != (int (**)())0x0) {
          (*pcVar4)(pbVar8,pbVar8 + 0x10,param_2);
        }
        break;
      case 4:
      case 5:
      case 0xc:
      case 0xd:
        *(float *)(pbVar8 + 0xc) = (float)dVar10;
        puVar5 = (unsigned int *)((unsigned int)(pbVar8 + iVar3 + 0x10) & 0xfffffff0);
        *puVar5 = in_register_000100d0;
        puVar5[1] = in_register_000100d4;
        puVar5[2] = in_register_000100d8;
        puVar5[3] = in_vr13;
        pbVar9 = pbVar8 + pbVar8[3];
        pcVar4 = *(int (***)())((pbVar8[1] + 0x49) * 0x50 + *param_2);
        if (pcVar4 != (int (**)())0x0) {
          (*pcVar4)(pbVar8,pbVar8 + 0x20,param_2);
        }
        break;
      case 7:
      case 8:
      case 9:
        break;
      }
    }
    pbVar8 = pbVar9;
    if (pbVar6 <= pbVar9) {
      piVar2 = *(int **)(iVar7 + *param_1);
      iVar7 = iVar7 + 4;
      pbVar8 = (unsigned char *)(piVar2 + 4);
      pbVar6 = (unsigned char *)((int)piVar2 + *piVar2 + 0x10);
    }
  } while( true );
}

