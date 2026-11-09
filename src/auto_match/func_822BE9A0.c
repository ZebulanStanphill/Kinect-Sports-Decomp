extern void fn_822C8C08(unsigned,const char *); 
static __forceinline void copy_float(float *d,float *s) {*d=*s;}
void fn_822BE9A0(unsigned p) {
 float *qcopy=(float *)(p+0x4e8);
 fn_822C8C08(*(unsigned *)(p+0x114),"idle");
 *(unsigned *)(p+0x7bc)=1;
 { float *q=(float *)(p+0x4ec); float z=0.0f; q[0]=z;
 q[1]=z; }
 *qcopy=*(float *)(p+0x4e0);
 *(unsigned *)(p+0x790)=0;
}