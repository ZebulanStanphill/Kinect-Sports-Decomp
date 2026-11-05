extern void fn_82A1DDC0(void *,const void *,unsigned);
extern void RtlInitAnsiString(void *,const char *);
extern unsigned XexLoadImageHeaders(void *,unsigned,unsigned);
extern unsigned char lbl_83219B90[];
int fn_82A20D78(const char *input,int n,void *out){struct {char ansi[16];char path[512];} f;
unsigned status;if((unsigned)(n+7)>512)return 0;
fn_82A1DDC0(f.path,"game:\\",6);fn_82A1DDC0(f.path+6,input,n);f.path[n+6]=0;
RtlInitAnsiString(f.ansi,f.path);status=XexLoadImageHeaders(f.ansi,*(unsigned *)(lbl_83219B90+0xfc),0x10000);
if((status&0xc0000000)==0xc0000000)return 0;
fn_82A1DDC0(out,(void *)(*(unsigned *)(*(unsigned *)(lbl_83219B90+0xfc)+0x10)+0x140),16);return 1;}
