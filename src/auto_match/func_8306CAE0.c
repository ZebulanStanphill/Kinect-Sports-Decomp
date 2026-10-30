typedef struct { int a[5]; } S;
int fn_8306CAE0(int *p,S *q) { int r=0; if (!q) r=0x80070057; else { *(S *)(p+1)=*q; } return r; }
