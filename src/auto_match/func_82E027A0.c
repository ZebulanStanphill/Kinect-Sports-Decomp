extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82E025E0();


int fn_82E027A0(int self,unsigned int flags)

{
  int iVar1;
  
  if (*(void **)(self + 0x20) != 0) {
    fn_82CE4118(*(void **)(self + 0x20));
  }
  *(unsigned int *)(self + 0x20) = 0;
  fn_82E025E0(self);
  if ((flags & 1) != 0) {
    iVar1 = fn_82CE5410();
    (*(int (**)())(**(int **)(iVar1 + 0x10) + 8))
              (*(int **)(iVar1 + 0x10),self,*(unsigned short *)(self + 4));
  }
  return self;
}

