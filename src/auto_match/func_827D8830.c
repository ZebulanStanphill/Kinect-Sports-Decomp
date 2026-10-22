extern int fn_827DC858();
extern int fn_827DE048();
extern int fn_82811400();
extern int memcpy();

typedef struct {
  unsigned char a[4];
  unsigned char b[0x18];
} S;

int fn_827D8830(int param_1)
{
  unsigned int *puVar1;
  S s;
  unsigned char auStack_40[40];
  
  puVar1 = (unsigned int *)fn_827DE048(auStack_40);
  fn_82811400(s.b,0x10);
  *(unsigned int *)s.a = *puVar1;
  memcpy(s.b,puVar1 + 1,0x18);
  fn_827DC858(param_1,&s);
  return param_1;
}
