int fn_827A82C8(unsigned *p,int pos) {
 unsigned char flag=(unsigned char)(p[0]>>31); unsigned start=p[2];
 if(flag) { start &= 0xffffff; if(start==0xffffff) start=-1; }
 if(pos >= (int)start) { unsigned n; if(flag) n=*(unsigned char *)&p[2]; else n=p[8];
 if(pos < (int)(n+start)) return 0; }
 return start-pos;
}
