typedef unsigned char (*Query)(int,int);
extern void fn_822AF200(void *,int *);
extern int fn_8249ABC0(void);
extern void fn_8249D980(int,int);
extern void fn_82359928(int,int);
void fn_823A4E58(char *p) {char *sub=p+12;int zero=0;int obj;unsigned char c;
*(int *)(p+0x50)=0;fn_822AF200(sub+0x40,&zero);
obj=*(int *)(*(int *)(p+0x48)+8);
if(obj)c=(*(Query *)(*(int *)obj+8))(obj,1);else c=1;
if(c)*(int *)(sub+0x18)=1;
{char *q=*(char **)(p+8);if(*(int *)(q+0xac)!=1){int g=fn_8249ABC0();if(*(int *)(q+0xb4)!=-1){fn_8249D980(*(int *)(g+0x110),*(int *)(q+0xb4));*(int *)(q+0xb4)=-1;}*(int *)(q+0xac)=1;}}
fn_82359928(*(int *)(p+8),1);*(int *)(p+0x60)=0;}
