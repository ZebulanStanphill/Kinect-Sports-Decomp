extern int fn_830177C8();
extern float lbl_82186E6C;
extern unsigned int lbl_832642FC;
extern unsigned int uStack_10;


void fn_83005BE8(int param_1,unsigned __int64 param_2)

{
  unsigned int uStack_10;
  
  if (*(short **)(param_1 + 0x44) == (short *)0x0) {
  }
  else {
    uStack_10 = (float)(__int64)**(short **)(param_1 + 0x44) * lbl_82186E6C;
  }
  if ((*(unsigned int *)(param_1 + 0x40) >> 0x1d & 1) != 0) {
    fn_830177C8((double)uStack_10,lbl_832642FC,param_1,0x1d,param_2);
  }
  return;
}

