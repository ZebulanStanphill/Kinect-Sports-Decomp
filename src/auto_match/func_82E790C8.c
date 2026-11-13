extern int fn_82EEB658();
extern int fn_82F691F0();


/* WARNING: Removing unreachable block (ram,0x82e79574) */
/* WARNING: Removing unreachable block (ram,0x82e7920c) */
/* WARNING: Removing unreachable block (ram,0x82e79554) */
/* WARNING: Removing unreachable block (ram,0x82e7956c) */

unsigned __int64 fn_82E790C8(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  int aiStack_8c [35];
  
  if (param_2 == (unsigned int *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    if ((*(unsigned char *)(param_1 + 0x238) & 2) == 0) {
      uVar1 = 0xffffffffc00d3a98;
    }
    else {
      aiStack_8c[0] = 0;
      fn_82EEB658(param_1 + 0x1e4,aiStack_8c);
      if (aiStack_8c[0] != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(aiStack_8c[0],0,0x148);
      }
      *param_2 = 0;
      uVar1 = 0xffffffff8007000e;
    }
  }
  return uVar1;
}

