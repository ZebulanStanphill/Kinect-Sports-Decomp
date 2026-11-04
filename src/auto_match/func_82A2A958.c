typedef struct { unsigned short len, max; char *p; } Ansi_82A2A958;
typedef struct { unsigned root; Ansi_82A2A958 *name; unsigned attributes; } Attributes_82A2A958;
extern void RtlInitAnsiString(Ansi_82A2A958 *, const char *);
extern int NtOpenFile(unsigned *,unsigned,Attributes_82A2A958 *,void *,unsigned,unsigned);
extern int NtSetInformationFile(unsigned,void *,void *,unsigned,unsigned);
extern int NtClose(unsigned); extern void fn_82A2B760(int);
int fn_82A2A958(const char *name) {
 struct { unsigned char remove; unsigned handle; Ansi_82A2A958 name; unsigned iosb[2]; Attributes_82A2A958 attrs; } s;
 int result; int second;
 RtlInitAnsiString(&s.name,name);
 s.attrs.root=-3; s.attrs.attributes=0x40; s.attrs.name=&s.name;
 result=NtOpenFile(&s.handle,0x10000,&s.attrs,s.iosb,7,0x4040);
 if(result>=0) { s.remove=1; second=NtSetInformationFile(s.handle,s.iosb,&s.remove,1,13); NtClose(s.handle); if(second>=0) return 1; result=second; }
 fn_82A2B760(result); return 0;
}
