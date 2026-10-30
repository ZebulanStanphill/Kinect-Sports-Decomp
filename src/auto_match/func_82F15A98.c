extern int fn_82F02410();
typedef struct { char p[0x588]; unsigned int base; char q[0x1ebc-0x58c]; int h; } O;
void fn_82F15A98(O *o,int param_2,int param_3)
{
  int v = param_2 - o->base;
  if (v < param_3 || v > param_3 + 6) {
    fn_82F02410(o->h,7,3);
    fn_82F02410(o->h,param_2,5);
  }
  else {
    fn_82F02410(o->h,v - param_3,3);
  }
}
