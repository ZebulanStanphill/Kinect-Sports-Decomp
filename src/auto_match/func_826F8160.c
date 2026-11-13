extern int fn_8267C498();
extern int fn_826C6248();
extern unsigned int iStack_24;


int fn_826F8160(int *param_1)

{
  int iVar1;
  int aiStack_70;
  int iStack_24;
  
  iVar1 = 0;
  if (((*(unsigned char *)(param_1 + 1) & 0x80) != 0) &&
     (iVar1 = *(int *)((int)param_1 + 5), *(int *)((int)param_1 + 5) == 0)) {
    fn_826C6248(&aiStack_70);
    (**(int (***)())(*param_1 + 0x20))(param_1,&aiStack_70);
    iVar1 = iStack_24;
    if (aiStack_70 != 0) {
      fn_8267C498();
    }
  }
  return iVar1;
}

