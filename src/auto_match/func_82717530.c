typedef int (*Method_82717530)();
void fn_82717530(int *p) {
 unsigned n=(unsigned)p[42];
 p[44]=0; p[45]=0; p[46]=0;*((char *)p+0x93)=0;
 if(n) { int offset=0; unsigned remaining=n; do { int child=*(int *)(p[41]+offset); if(child) ((Method_82717530)*(int *)(*(int *)child+100))(child); --remaining; offset+=4; } while(remaining); }
 { unsigned *flags=(unsigned *)(((Method_82717530)*(int *)(*p+0x40))(p)+0xb00); *flags|=0x400; }
}
