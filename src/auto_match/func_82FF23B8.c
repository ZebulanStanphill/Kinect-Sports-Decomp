extern unsigned int *auStack_1c;
extern int fn_82FF2248();
extern int fn_82FF22B8();
extern unsigned int iStack_20;


void fn_82FF23B8(int param_1,unsigned __int64 param_2)

{
  unsigned int iStack_20;
  unsigned int auStack_1c[1];
  
  fn_82FF2248(&iStack_20,param_1,param_2);
  if (iStack_20 != *(int *)(param_1 + 4)) {
    fn_82FF22B8(auStack_1c,param_1,&iStack_20);
  }
  return;
}

