extern int fn_82F65350(void);extern unsigned strlen(const char *);extern void *memcpy(void *,const void *,unsigned);
int fn_82E9A160(int p,unsigned char *out,unsigned cap,unsigned char type,unsigned *len){unsigned t;int i;char *text;unsigned n;
*len=0;
if(!*(int*)(p+0x214)||*(int*)(p+0x44)||((t=(unsigned char)type)==0x1c&&*(int*)(p+0x40)!=3)||(fn_82F65350()&1))return 0;
switch(t){case 0x1f:i=0;break;case 0x1e:i=1;break;case 0x1d:i=2;break;case 0x1c:i=3;break;case 0x1b:i=4;break;default:return -100;}
text=(char*)"0001a"+i*100;n=strlen(text);*len=n;if(n>=99)n=99;*len=n;
if(n+5<=cap){out[3]=(unsigned char)type;out[0]=0;out[1]=0;out[2]=1;memcpy(out+4,text,*len);out[*len+4]=0x80;*len+=5;return 0;}return -100;}
