typedef unsigned char bool;
#define false 0
extern float fn_830177C8();
extern float lbl_821AAD20;
extern unsigned int lbl_832642FC;


bool fn_83009060(int param_1)

{
  unsigned char bVar1;
  double dVar2;
  
  if (*(unsigned int *)(param_1 + 0x28) == 0) {
    return false;
  }
  bVar1 = (*(unsigned char *)(*(unsigned int *)(param_1 + 0x28) + 0x3c) >> 4) & 1;
  if ((unsigned char)(*(unsigned int *)(param_1 + 0x40) >> 0x1c & 1) != 0) {
    dVar2 = (double)fn_830177C8(lbl_832642FC,param_1,0x1c,0);
    return dVar2 != 0.0;
  }
  if (*(unsigned int *)(param_1 + 0x24) != 0) {
    bVar1 = (*(unsigned char *)(*(unsigned int *)(param_1 + 0x24) + 0x3d) >> 4) & 1;
  }
  return bVar1;
}

