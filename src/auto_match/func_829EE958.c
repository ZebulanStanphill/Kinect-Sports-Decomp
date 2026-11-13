int fn_829EE958(int p,int q) {
 int result=4;
 if (*(float *)((*(int *)(p+0x74)+0x1e)*4+q)>*(float *)(p+0x84)) result=5;
 else {
  float f=*(float *)((*(int *)(p+0x74)+0x1c)*4+q);
  if(f<*(float *)(q+0xac)) result=0;
  else if(f<*(float *)(q+0xb0)) result=1;
  else if(f<*(float *)(q+0xb4)) result=2;
  else if(f<*(float *)(q+0xb8)) result=3;
 }
 return result;
}
