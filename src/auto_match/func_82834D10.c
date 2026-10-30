typedef struct { int a,b,c; } E;
extern int fn_828346D0();
void fn_82834D10(E *param_1,E *param_2,int param_3)
{
  while (param_2 - param_1 > 1) { fn_828346D0(param_1,param_2,param_3,0); --param_2; }
}
