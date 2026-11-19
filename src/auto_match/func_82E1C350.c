typedef struct { unsigned int x[4]; } Four;
extern int fn_82E1C150();


int fn_82E1C350(int self,unsigned int *param_2)

{
  int uVar1;
  
  if (param_2 == (unsigned int *)0x0) {
    uVar1 = 0x80004003;
  }
  else if ((*(char *)(self + 8) != '\0') || (uVar1 = fn_82E1C150(self), uVar1 >= 0)) {
    uVar1 = 0;
    *(Four *)param_2 = *(Four *)(self + 40);
  }
  return uVar1;
}

