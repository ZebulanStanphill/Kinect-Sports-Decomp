typedef struct { char *first; char *last; char *end; } Vec;
extern unsigned char fn_82880710(Vec *, unsigned int);

Vec *fn_82888B90(Vec *param_1, Vec *param_2)
{
  char *src;
  char *last;
  char *dst;
  
  param_1->first = 0;
  param_1->end = 0;
  param_1->last = 0;
  if (fn_82880710(param_1, param_2->last - param_2->first)) {
    last = param_2->last;
    src = param_2->first;
    dst = param_1->first;
    for (; src != last; dst++, src++) {
      if (dst != 0) {
        *dst = *src;
      }
    }
    param_1->last = dst;
  }
  return param_1;
}
