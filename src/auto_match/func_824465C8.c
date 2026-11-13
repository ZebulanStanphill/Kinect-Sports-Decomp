extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82440B28();
extern int fn_82440D08();
extern int fn_82441D38();
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;


void fn_824465C8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 auStack_50 [2];
  unsigned char auStack_40 [8];
  
  puVar1 = *(unsigned int **)(param_1 + 8);
  auStack_50[0] = (unsigned __int64)(unsigned int)puVar1[1] + 0xff & 0xff;
  uStack00000030 = param_3;
  uStack00000038 = param_4;
  fn_82440B28((double)(float)puVar1[2],
                    (double)((float)auStack_50[0] * *(float *)(*(int *)*puVar1 + 4)),auStack_40);
  puVar2 = (unsigned __int64 *)
           fn_82440D08((double)(float)(*(unsigned int **)(param_1 + 8))[2],auStack_50,
                         **(unsigned int **)(param_1 + 8));
  fn_82441D38(param_1,param_2,*puVar2,(unsigned __int64)*(unsigned int *)(puVar2 + 1) << 0x20);
  return;
}

