extern unsigned int *auStack_10;
extern int fn_82648AF0();


unsigned int fn_82677AF8(int self)

{
  unsigned int auStack_10;
  
  auStack_10 = 0;
  if (*(unsigned int *)(self + 0xd8) != 0) {
    fn_82648AF0(*(int *)(self + 0xd8),&auStack_10);
  }
  return auStack_10;
}

