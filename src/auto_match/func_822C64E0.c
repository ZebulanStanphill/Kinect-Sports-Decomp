extern unsigned int *auStack_30;
extern int fn_822315A0(void *);
extern void *fn_82365BD8(void *,void *);


void fn_822C64E0(int param_1,int param_2)

{
  int iVar1;
  void *uVar2;
  unsigned char auStack_30 [8];
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = fn_82365BD8(auStack_30,(void*)param_2);
  (*(int (**)())(iVar1 + 4))(param_1 + 4,uVar2);
  if (*(void **)(param_2 + 4) != 0) {
    fn_822315A0(*(void **)(param_2 + 4));
  }
  return;
}

