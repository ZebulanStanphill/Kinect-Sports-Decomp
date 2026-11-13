typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_828D2E80();


unsigned __int64 fn_828D3028(int param_1)

{
  bool bVar1;
  char cVar2;
  
  switch(*(unsigned int *)(param_1 + 0xc)) {
  default:
    bVar1 = false;
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 10:
    bVar1 = true;
  }
  if ((!bVar1) && (cVar2 = fn_828D2E80(), cVar2 == '\0')) {
    return 0;
  }
  return 1;
}

