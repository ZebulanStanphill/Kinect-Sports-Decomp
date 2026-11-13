extern long _InterlockedExchangeAdd(long *, long);
typedef struct { int f0; long refs; int f8; } Obj_8268C210;
extern Obj_8268C210 lbl_83155184;
void fn_8268C210(void **out)
{
  _InterlockedExchangeAdd(&lbl_83155184.refs, 1);
  *out = (void *)((unsigned)&lbl_83155184 | 1);
}
