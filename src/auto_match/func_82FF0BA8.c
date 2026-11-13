extern int fn_82FF0478();
extern int fn_82FF5400();
extern unsigned int lbl_8216C698;
extern unsigned int lbl_832642F4;


unsigned __int64 fn_82FF0BA8(int param_1,int *param_2)

{
  float fVar1;
  unsigned __int64 uVar2;
  
  RtlEnterCriticalSection(0xffffffff83264558);
  if (((*(unsigned char *)(param_1 + 0xda) & 0x80) == 0) &&
     ((*(int *)(param_1 + 0x5c) == 0 || ((*(unsigned char *)(param_1 + 0x60) & 0x40) == 0)))) {
    *(unsigned char *)(param_1 + 0xd9) = *(unsigned char *)(param_1 + 0xd9) | 1;
    if (*param_2 != 0) {
      fn_82FF0478(param_1,1,0x2000000,*(unsigned __int64 *)param_2,1);
      RtlLeaveCriticalSection(0xffffffff83264558);
      return 1;
    }
    if ((*(unsigned char *)(param_1 + 0xd8) & 0x1e) != 0) {
      if (*(int *)(param_1 + 0x58) != 0) {
        fn_82FF5400((double)lbl_8216C698,lbl_832642F4,*(int *)(param_1 + 0x58),0x2000000);
        RtlLeaveCriticalSection(0xffffffff83264558);
        return 1;
      }
      if ((*(unsigned char *)(param_1 + 0xda) & 2) == 0) {
        *(unsigned char *)(param_1 + 0xd6) = 0;
        fVar1 = lbl_8216C698;
        *(float *)(param_1 + 0x78) = lbl_8216C698;
        *(float *)(param_1 + 0x80) = fVar1;
      }
      (*(int (**)())**(unsigned int **)(param_1 + 4))(param_1 + 4,0,1);
      RtlLeaveCriticalSection(0xffffffff83264558);
      return 1;
    }
  }
  uVar2 = (*(int (**)())**(unsigned int **)(param_1 + 4))(param_1 + 4,0,0);
  RtlLeaveCriticalSection(0xffffffff83264558);
  return uVar2;
}

