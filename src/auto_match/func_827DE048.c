extern int fn_827D94C0();
extern void *fn_82811400(void *p, int n);
void *memcpy(void *d, const void *s, unsigned int n);


int * fn_827DE048(int *param_1)

{
  unsigned char auStack_50 [32];
  unsigned char auStack_30 [32];
  
  memcpy(auStack_50,fn_82811400(auStack_30,0x10),0x18);
  *param_1 = fn_827D94C0();
  memcpy(param_1 + 1,auStack_50,0x18);
  return param_1;
}
