extern int fn_8281E888(float);
extern __int64 fn_8281E910();

__int64 fn_82811E60(float *p)
{
  float f = p[3];
  if (f < 0.0f || fn_8281E888(f) == 0) {
    return 0;
  }
  return fn_8281E910(p);
}
