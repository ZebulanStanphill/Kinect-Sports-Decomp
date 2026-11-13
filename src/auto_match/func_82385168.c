extern int fn_823852D8();
extern int fn_82385670();
extern int fn_823857D8();
extern unsigned int iStack0000001c;
extern unsigned int lbl_8218E8E8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x0000001c;


unsigned __int64
fn_82385168(unsigned __int64 param_1,double param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             __int64 param_6,unsigned __int64 param_7,int *param_8,unsigned __int64 param_9,unsigned __int64 param_10)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  int iStack0000001c;
  
  iStack0000001c = (int)param_4;
  iVar1 = iStack0000001c * 0x140 + param_3;
  if (*(int *)(iVar1 + 0x27c) == 0) {
    if (*(int *)(iVar1 + 0x294) == 0) {
      uVar4 = fn_823852D8(param_1,param_2,param_3,&stack0x0000001c,param_5,-(param_6 != 0) & 3
                                ,(-(param_6 != 0) & 3U) + 3,3,param_8,param_9);
      param_8[0xc] = (int)(float)param_2;
    }
    else if ((param_10 & 0xffffffff) == 0) {
      *param_8 = iStack0000001c;
      param_8[0xd] = (int)param_9;
      iVar3 = ltcg_pool_0_0f;
      iVar1 = lbl_8218E8E8;
      param_8[2] = 0;
      param_8[1] = iVar3;
      param_8[3] = 0;
      param_8[0xc] = iVar1;
      *(unsigned short *)(param_8 + 0xe) = 0x5b;
      puVar2 = (unsigned int *)((unsigned int)(param_8 + 4) & 0xfffffff0);
      *puVar2 = in_register_00010010;
      puVar2[1] = in_register_00010014;
      puVar2[2] = in_register_00010018;
      puVar2[3] = in_vr1;
      uVar4 = 1;
      puVar2 = (unsigned int *)((unsigned int)(param_8 + 8) & 0xfffffff0);
      *puVar2 = in_register_00010010;
      puVar2[1] = in_register_00010014;
      puVar2[2] = in_register_00010018;
      puVar2[3] = in_vr1;
    }
    else {
      uVar4 = fn_823857D8(param_2,param_3,param_4,param_10,param_6,param_8,param_9);
    }
  }
  else {
    uVar4 = fn_82385670(param_2,param_3,param_4,param_6,param_6,param_8,param_9);
    if ((int)uVar4 == 0) {
      fn_82385670(param_2,param_3,param_4,(int)param_6 == 0);
      uVar4 = 1;
    }
  }
  return uVar4;
}

