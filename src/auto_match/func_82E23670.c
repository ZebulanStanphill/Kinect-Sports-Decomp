unsigned __int64 fn_82E23670(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar1;
  
  *(unsigned int *)(*param_1 + 4) = param_4;
  *(unsigned int *)(*param_1 + 0x18) = param_3;
  sync(0);
  *(unsigned int *)*param_1 = param_2;
  if (param_1[1] == 0) {
    if (param_1[2] != 0) {
      KeSetEvent(param_1[2],0,0);
      ObDereferenceObject(param_1[2]);
    }
  }
  else {
    iVar1 = KeInsertQueueApc(param_1[1],0,0,0);
    if (iVar1 == 0) {
      iVar1 = param_1[1];
      ObDereferenceObject(*(unsigned int *)(iVar1 + 4));
      ExFreePool(iVar1);
    }
  }
  *param_1 = 0;
  return 0;
}

