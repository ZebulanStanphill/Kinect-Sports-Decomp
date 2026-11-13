extern int fn_82776B48();

typedef struct { unsigned int *p; unsigned int c; } Key;

void fn_82777378(unsigned __int64 param_1,unsigned int *param_2,unsigned int param_3)
{
  Key k;
  k.p = param_2;
  k.c = param_3;
  fn_82776B48(param_1,param_1,&k,
                (unsigned int)(*(unsigned char *)((int)param_2 + 7) ^ *(unsigned char *)((int)param_2 + 6)) ^
                (unsigned int)*(unsigned short *)(param_2 + 1) ^ *param_2 >> 6 ^ *param_2);
}
