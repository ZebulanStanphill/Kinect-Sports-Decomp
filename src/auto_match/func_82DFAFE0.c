extern unsigned int *auStack_40;


void fn_82DFAFE0(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5
                  ,float *param_6)

{
  unsigned char *puVar1;
  double dVar2;
  unsigned char auStack_40 [64];
  
  dVar2 = (double)(**(int (***)())(*param_2 + 0x10))();
  *param_6 = (float)dVar2;
  dVar2 = (double)(**(int (***)())(*param_2 + 0x14))(param_1,param_2);
  param_6[1] = (float)dVar2;
  dVar2 = (double)(**(int (***)())(*param_2 + 0x1c))(param_1,param_2,*param_2,param_4,param_5,param_6);
  param_6[2] = (float)dVar2;
  *(unsigned char *)(param_6 + 3) = *(unsigned char *)(param_5 + 0x10);
  puVar1 = (unsigned char *)
           (**(int (***)())(*param_2 + 0x18))
                     (param_1,auStack_40,param_2,*(int (***)())(*param_2 + 0x18),param_4,param_5,param_6
                     );
  *(unsigned char *)((int)param_6 + 0xd) = *puVar1;
  return;
}

