extern void fn_82230300(unsigned, int, int);
void fn_82E22050(unsigned *p) {
 unsigned i;
 if(p[4] != 0) {
  i=p[4]+p[3]-1;
  if(p[2]<=i) i-=p[2];
  fn_82230300(*(unsigned *)(i*4+p[1]),1,0);
  if(--p[4]==0) p[3]=0;
 }
}
