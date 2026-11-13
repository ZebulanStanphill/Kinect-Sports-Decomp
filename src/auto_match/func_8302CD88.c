extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82FFE000();
extern int fn_830009E0();
extern int fn_8302E990();


void fn_8302CD88(__int64 param_1,unsigned __int64 param_2)

{
  unsigned char auStack_40 [8];
  int *piStack_38;
  unsigned char auStack_30 [24];
  
  fn_830009E0();
  fn_8302E990(auStack_40,param_1 + 0x8c,param_2);
  if (piStack_38 != (int *)0x0) {
    fn_82FFE000(auStack_30,param_1 + 0x8c,auStack_40);
    (**(int (***)())(*piStack_38 + 4))(piStack_38);
  }
  return;
}

