extern int fn_82A2F770(void *,unsigned,int,int);
int fn_82A30800(void *a,char * b) { int hr=fn_82A2F770(a,*(unsigned *)(b+32),0,0); if (hr>=0) { unsigned char f=*(unsigned char *)(b+53)|16; *(unsigned *)(b+32)=0; *(unsigned *)(b+36)=-1; *(unsigned *)(b+20)=0; *(unsigned *)(b+24)=0; *(unsigned *)(b+28)=0; *(unsigned *)(b+40)=-1; *(unsigned char *)(b+53)=f; return 0; } return hr; }
