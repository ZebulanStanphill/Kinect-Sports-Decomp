void fn_82CA3A98(int unused,unsigned char *dst,unsigned char *src,unsigned char *a,unsigned char *b,int srcstride,int chromastride,int dststride) {
 int row;
 for(row=0;row<16;row++) {
  unsigned char *d=dst,*p=src,*q=a;
  int n=4;
  do {
   d[0]=p[0];d[2]=p[1];d[4]=p[2];d[6]=p[3];
   {unsigned char v=q[0];d[5]=v;d[1]=v;v=q[b-a];d[7]=v;d[3]=v;}
   p+=4;d+=8;q++;
  } while (--n);
  dst+=dststride;src+=srcstride;a+=chromastride;b+=chromastride;
 }
}
