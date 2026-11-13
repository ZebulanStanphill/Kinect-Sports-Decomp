typedef unsigned char bool;
#define false 0
extern unsigned int fStack_14;
extern int fn_8249ABC0();
extern int fn_8249F490();
extern int fn_82F4EBE8();
extern int fn_82F52188();
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


bool fn_82277D58(int *param_1)

{
  unsigned int *puVar1;
  int *piVar3;
  int iVar4;
  __int64 lVar2;
  __int64 alStack_30 [2];
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  float fStack_14;
  
  if ((((-1 < *param_1) && (*param_1 < 2)) && (piVar3 = (int *)fn_82F4EBE8(), piVar3 != (int *)0x0)
      ) && (iVar4 = (**(int (***)())(*piVar3 + 4))(piVar3), iVar4 != 0)) {
    iVar4 = fn_8249ABC0();
    puVar1 = *(unsigned int **)(iVar4 + 0xec);
    uStack_20 = *puVar1;
    uStack_1c = puVar1[1];
    uStack_18 = puVar1[2];
    iVar4 = (int)(float)puVar1[3];
    if (iVar4 < -1) {
      iVar4 = -1;
    }
    alStack_30[0] = (__int64)iVar4;
    fStack_14 = (float)alStack_30[0];
    fn_82F52188(alStack_30,piVar3,1);
    lVar2 = fn_8249F490(&uStack_20);
    return lVar2 != 0;
  }
  return false;
}

