extern unsigned int *auStack_10;
extern int fn_822315A0();
extern int fn_82279C58();
extern int fn_8266F678();
extern unsigned int iStack_c;


void fn_8229E410(unsigned int *param_1)

{
  unsigned int *puVar1;
  struct { unsigned int first, second; } temp;
  
  puVar1 = (unsigned int *)fn_82279C58(&temp,*param_1);
  fn_8266F678(*puVar1,1);
  if (temp.second != 0) {
    fn_822315A0(temp.second);
  }
  return;
}

