typedef union { float f; int i; } F;
int fn_82BAF2E8(F a,F b) { F x,y; x=a; y=b; return x.f>y.f ? 1:0; }
