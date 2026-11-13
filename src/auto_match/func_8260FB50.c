typedef unsigned char bool;
#define false 0
extern int fn_82520780();
extern int fn_82563230();
extern int fn_82569980();
extern int fn_82599B18();
extern int fn_825BC4F8();
extern int fn_826244E0();
extern int iRam832748f0;
extern unsigned int lbl_821954E8;
extern unsigned int uRam832748ec;
extern unsigned int uRam832748f4;


void fn_8260FB50(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int uVar1;
  float fVar2;
  int iVar3;
  unsigned int *puVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  
  if ((param_5 == 0) &&
     (iVar3 = fn_82520780((double)*(float *)(param_3 + 0x24),0xffffffff83265a28), iVar3 != 0)) {
    iVar3 = fn_82569980(param_1,*(unsigned char *)(param_3 + 0x10));
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0xd8) + iVar3 * 0x30 + 0x10);
    }
    if (iVar3 != 0) {
      uRam832748f4 = *(unsigned short *)(param_3 + 0x18);
      uVar1 = **(unsigned int **)(param_1 + 0x60);
      uRam832748ec = 1;
      iRam832748f0 = iVar3;
      puVar4 = (unsigned int *)fn_825BC4F8(iVar3,0xffffffff832748ec);
      puVar4[0xb] = (unsigned int)(*(float *)(iVar3 + 0xa8) * *(float *)(param_3 + 0x20));
      *puVar4 = *puVar4 | 0x40;
      iVar5 = fn_82599B18((unsigned __int64)uVar1 + 0x7fc,param_3 + 0x14,puVar4);
      if (iVar5 != -1) {
        fVar2 = lbl_821954E8;
        if (*(int *)(param_3 + 0x1c) != 0) {
          fVar2 = *(float *)(param_3 + 8) - *(float *)(param_3 + 4);
        }
        fn_826244E0((double)fVar2,(unsigned __int64)uVar1);
      }
      piVar6 = (int *)(param_3 + 0x2c);
      if (piVar6 == (int *)0x0) {
        bVar7 = false;
      }
      else {
        bVar7 = *piVar6 != 0;
      }
      if (bVar7) {
        fn_82563230(iVar3,*(unsigned int *)(param_3 + 0x28),piVar6,0,0);
      }
    }
  }
  return;
}

