static __forceinline int IsValid(float f)
{
  return f >= -3.402823466e+38f && f <= 3.402823466e+38f;
}

unsigned char fn_8268CB68(const float *v)
{
  return IsValid(v[0]) && IsValid(v[1]) && IsValid(v[2]) &&
         IsValid(v[3]) && IsValid(v[4]) && IsValid(v[5]);
}
