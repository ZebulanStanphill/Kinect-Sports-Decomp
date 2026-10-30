typedef unsigned __int64 U; struct S { U a,b,x; };
int fn_82BF4228(U *p,struct S *q) { U a[2]; a[0]=*p;a[1]=q->x; if(a[1]<a[0])return 1; return 0;}