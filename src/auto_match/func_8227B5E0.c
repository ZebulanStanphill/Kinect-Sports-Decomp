extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_82279C58();
extern int fn_82672C20();
extern unsigned int iStack_1c;


void fn_8227B5E0(int param_1)

{
  unsigned int *puVar1;
  struct { int value; void *owner; } local;
  
  if ((*(int *)(param_1 + 0xa48) != 5) && (*(int *)(param_1 + 0xa60) != 0)) {
    puVar1 = (unsigned int *)fn_82279C58(&local,param_1);
    fn_82672C20(*puVar1,"_root.mainCtrl.hide",0,0);
    if (local.owner != 0) {
      fn_822315A0(local.owner);
    }
    *(unsigned int *)(param_1 + 0xa48) = 5;
    *(float *)(param_1 + 0xa4c) = 0.0f;
  }
  return;
}

