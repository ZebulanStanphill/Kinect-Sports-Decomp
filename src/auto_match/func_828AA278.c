typedef struct O O;
struct O { char *(**vt)(O *o); };
extern void fn_8224E978(void *d, char *s);
void *fn_828AA278(void *d, O *o)
{
  fn_8224E978(d, o->vt[1](o) + 0x9c);
  return d;
}
