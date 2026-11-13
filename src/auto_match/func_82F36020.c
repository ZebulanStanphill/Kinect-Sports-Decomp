extern int fn_82F35618();


unsigned __int64 fn_82F36020(int param_1,short param_2,unsigned int param_3,unsigned short *param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  short *psStack_40;
  int aiStack_3c;
  
  if (param_4 == (unsigned short *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar2 = 0;
    *param_4 = 0xffff;
    if (*(int *)(param_1 + 0x130) != 0) {
      do {
        fn_82F35618(param_1 + 200,uVar2,&psStack_40);
        if ((*psStack_40 == param_2) &&
           (fn_82F35618(param_1 + 200,uVar2,&aiStack_3c), *(unsigned short *)(aiStack_3c + 2) == param_3)
           ) {
          *param_4 = (short)uVar2;
          return 0;
        }
        uVar2 = uVar2 + 1;
      } while ((uVar2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x130));
    }
    uVar1 = 0xffffffffc00d3a9c;
  }
  return uVar1;
}

