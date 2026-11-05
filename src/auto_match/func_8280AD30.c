void fn_8280AD30(float *m, float *v, float *o)
{
  float v2 = v[2];
  float m13 = m[13];
  float m0 = m[0];
  float v1 = v[1];
  float v0 = v[0];
  float m4 = m[4];
  float m5 = m[5];
  float m14 = m[14];
  float m1 = m[1];
  float m8 = m[8];
  float m9 = m[9];
  float m10 = m[10];
  float m2 = m[2];
  float m12 = m[12];
  float m6 = m[6];
  o[0] = m0*v0 + m4*v1 + m8*v2 + m12;
  o[1] = m1*v0 + m5*v1 + m9*v2 + m13;
  o[2] = m2*v0 + m6*v1 + m10*v2 + m14;
}
