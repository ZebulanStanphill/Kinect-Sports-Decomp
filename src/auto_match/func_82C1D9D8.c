extern int fn_82C10F40();


typedef struct { char pad[0x4a]; unsigned short n; char pad2[4]; char *tab; } T_82C1D9D8;
unsigned int fn_82C1D9D8(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)
{
  unsigned int hr;
  unsigned short i;
  T_82C1D9D8 *t = 0;
  *param_3 = 0;
  hr = fn_82C10F40(param_1,param_2,&t);
  if (hr == 0x80500016) return 0;
  if (t->n != 0) {
    i = 0;
    do {
      *param_3 += *(unsigned short *)(t->tab + i * 0x1c + 0x10);
      i++;
    } while (i < t->n);
  }
  return hr;
}
