typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82364DF0();
extern int fn_82456BC0();
extern int fn_824BD858();
extern int fn_824C97F0();
extern int fn_8288B760();


void fn_823642A0(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  
  iVar6 = fn_82364DF0(param_1,*param_2);
  iVar6 = iVar6 * 0x44 + param_1;
  uVar3 = *(unsigned int *)(*(int *)(iVar6 + 0x188) + 0x2c);
  iVar6 = *(int *)(*(int *)(iVar6 + 400) * 0x44 + param_1 + 0x188);
  if (*(int *)(iVar6 + 0x24) == 0) {
LAB_82364310:
    bVar5 = false;
  }
  else {
    if (*(int *)(iVar6 + 0x168) == 0) {
      uVar7 = *(unsigned int *)(iVar6 + 0x16c);
    }
    else {
      uVar7 = fn_8288B760();
      uVar7 = uVar7 & 0xff;
    }
    bVar5 = true;
    if (uVar7 == 0) goto LAB_82364310;
  }
  if ((param_2[4] != 8) && (bVar5)) {
    iVar6 = param_2[6];
    if (iVar6 == 1) {
      fVar1 = *(float *)(param_1 + 0x274);
      fVar2 = *(float *)(param_1 + 0x270);
    }
    else {
      if (iVar6 != 2) {
        if (iVar6 == 3) {
          fn_824BD858((double)*(float *)(param_1 + 0x250),(double)*(float *)(param_1 + 0x254))
          ;
          if (*(int *)(*param_2 + 0x2c) == 0) {
            uVar8 = 0xffffffff821b2a60;
          }
          else {
            uVar8 = 0xffffffff821b2a6c;
          }
          piVar4 = (int *)(*(unsigned int **)(param_1 + 0xa8))[1];
          for (piVar9 = (int *)**(unsigned int **)(param_1 + 0xa8); piVar9 != piVar4;
              piVar9 = piVar9 + 2) {
            fn_824C97F0(*(unsigned int *)(*piVar9 + 0x28),uVar8);
          }
        }
        goto LAB_823643e8;
      }
      fVar1 = *(float *)(param_1 + 0x264);
      fVar2 = *(float *)(param_1 + 0x260);
    }
    fn_824BD858((double)fVar2,(double)fVar1);
  }
LAB_823643e8:
  fn_82456BC0(param_1 + 0x718,0,uVar3);
  (**(int (***)())(**(int **)(param_1 + 0x3ec) + 0x10))(*(int **)(param_1 + 0x3ec),param_2);
  return;
}

