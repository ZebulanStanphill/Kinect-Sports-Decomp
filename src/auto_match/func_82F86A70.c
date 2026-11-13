extern unsigned int *auStack_14a0;
extern unsigned int *auStack_a60;
extern int memcpy();
extern int _SaveUnwindContext();
extern unsigned int uStack_a58;


void _UnwindNestedFrames(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned char auStack_14a0 [2624];
  unsigned char auStack_a60 [8];
  unsigned int uStack_a58;
  
  memcpy(auStack_14a0,param_3,0xa40);
  RtlCaptureContext(auStack_a60);
  uStack_a58 = 0x82f86ad4;
  _SaveUnwindContext();
  RtlUnwind(param_1,0xffffffff82f86ad4,param_2,0);
  memcpy(param_3,auStack_14a0,0xa40);
  _SaveUnwindContext(0);
  *(unsigned int *)(param_2 + 4) = *(unsigned int *)(param_2 + 4) & 0xfffffffd;
  return;
}

