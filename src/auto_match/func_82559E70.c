extern int fn_825B99F8();
extern int fn_825B9A58();


void fn_82559E70(unsigned __int64 param_1,__int64 param_2,unsigned __int64 param_3,float *param_4,int param_5
                  )

{
  double dVar1;
  
  if (param_5 == 0) {
    dVar1 = (double)fn_825B99F8(param_2 + 0x24);
    *param_4 = (float)dVar1;
    dVar1 = (double)fn_825B99F8(param_1,param_2 + 0x30);
    param_4[1] = (float)dVar1;
    dVar1 = (double)fn_825B99F8(param_1,param_2 + 0x3c);
    param_4[2] = (float)dVar1;
    dVar1 = (double)fn_825B99F8(param_1,param_2 + 0x48);
    param_4[3] = (float)dVar1;
  }
  else {
    fn_825B9A58(param_2 + 0x24,param_2 + 0x30,param_2 + 0x3c,param_2 + 0x48);
  }
  return;
}

