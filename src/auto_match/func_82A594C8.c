extern void *memset(void *,int,unsigned);
void fn_82A594C8(unsigned *o) {
 unsigned *p;int i;
 memset(o,0,0x74);
 p=o+15;
 o[0]=0;o[1]=0;o[2]=0;o[3]=0;o[4]=0;o[14]=0;
 for(i=0;i<6;i++) p[i]=0;
 o[21]=0;o[23]=0;*(unsigned short *)p=1;o[25]=0;
 o[6]=2;o[8]=1;o[9]=0;
}
