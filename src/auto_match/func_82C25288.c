extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int fn_82F691F0();


unsigned __int64 fn_82C25288(int param_1,__int64 param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int aiStack_74 [29];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  aiStack_74[0] = 0;
  uVar2 = (**(int (***)())(*piVar1 + 0xc))(*piVar1,param_2 + -0x18);
  if ((-1 < (int)uVar2) &&
     (uVar2 = fn_82C10AD0(piVar1[0x38],0xb,0x58,aiStack_74), -1 < (int)uVar2)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(aiStack_74[0],0,0x58);
  }
  if (aiStack_74[0] != 0) {
    fn_82C10B28(piVar1[0x38],0xb,aiStack_74);
  }
  return uVar2;
}

