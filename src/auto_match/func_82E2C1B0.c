/* WARNING: Inlined function: __savegprlr_25 */

unsigned __int64 fn_82E2C1B0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned short *puVar2;
  unsigned __int64 uVar1;
  int *piVar3;
  unsigned __int64 uVar4;
  
  piVar3 = (int *)(param_1 + -4);
  RtlEnterCriticalSection(param_1 + 4);
  puVar2 = (unsigned short *)fn_82E2BBA0(piVar3,param_2);
  uVar4 = 0;
  if (puVar2 != (unsigned short *)0x0) {
    uVar1 = fn_82E4FE08(param_4);
    *(int *)(puVar2 + 6) = (int)uVar1;
    if ((uVar1 & 0xffffffff) != 0) {
      memcpy(uVar1,param_3,param_4);
      *(int *)(puVar2 + 4) = (int)param_4;
      *puVar2 = 0x1011;
      goto LAB_82e2c0e8;
    }
    (**(int (***)())(*piVar3 + 0x4c))(piVar3,param_2);
  }
  uVar4 = 0xffffffff8007000e;
LAB_82e2c0e8:
  RtlLeaveCriticalSection(param_1 + 4);
  return uVar4;
}
