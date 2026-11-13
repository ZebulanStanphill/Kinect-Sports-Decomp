typedef unsigned char bool;
extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_822E5F48();
extern unsigned int iStack_2c;
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_822F0780(int param_1)

{
  float fVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  bool bVar5;
  double dVar6;
  unsigned char auStack_50 [4];
  int iStack_4c;
  unsigned char auStack_48 [4];
  int iStack_44;
  unsigned char auStack_40 [4];
  int iStack_3c;
  unsigned char auStack_38 [4];
  int iStack_34;
  unsigned char auStack_30 [4];
  int iStack_2c;
  
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x178) == 2) {
    uVar3 = 0xffffffff821ae41c;
  }
  else {
    piVar4 = (int *)fn_822E5F48(auStack_50,*(unsigned int *)(param_1 + 0xc));
    iVar2 = *(int *)(*piVar4 + 0xc);
    if (iStack_4c != 0) {
      fn_822315A0(iStack_4c);
    }
    if (iVar2 == 0) {
      piVar4 = (int *)fn_822E5F48(auStack_38,*(unsigned int *)(param_1 + 0xc));
      dVar6 = (double)ltcg_pool_0_0f;
      bVar5 = (double)*(float *)(*piVar4 + 8) <= dVar6;
      if (iStack_34 != 0) {
        fn_822315A0();
      }
      if (bVar5) {
        piVar4 = (int *)fn_822E5F48(auStack_30,*(unsigned int *)(param_1 + 0xc));
        fVar1 = *(float *)(*piVar4 + 8);
        if (iStack_2c != 0) {
          fn_822315A0();
        }
        if (dVar6 <= (double)fVar1) {
          uVar3 = 0xffffffff821ae4ac;
        }
        else {
          uVar3 = 0xffffffff821ae494;
        }
      }
      else {
        uVar3 = 0xffffffff821ae47c;
      }
    }
    else {
      piVar4 = (int *)fn_822E5F48(auStack_48,*(unsigned int *)(param_1 + 0xc));
      dVar6 = (double)ltcg_pool_0_0f;
      bVar5 = (double)*(float *)(*piVar4 + 8) <= dVar6;
      if (iStack_44 != 0) {
        fn_822315A0();
      }
      if (bVar5) {
        piVar4 = (int *)fn_822E5F48(auStack_40,*(unsigned int *)(param_1 + 0xc));
        fVar1 = *(float *)(*piVar4 + 8);
        if (iStack_3c != 0) {
          fn_822315A0();
        }
        if (dVar6 <= (double)fVar1) {
          uVar3 = 0xffffffff821ae464;
        }
        else {
          uVar3 = 0xffffffff821ae44c;
        }
      }
      else {
        uVar3 = 0xffffffff821ae434;
      }
    }
  }
  return uVar3;
}

