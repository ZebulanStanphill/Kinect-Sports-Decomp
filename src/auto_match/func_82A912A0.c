struct Work_82A912A0 { int head; char a[0x34], b[0x34]; };
extern void *memset(void *, int, unsigned int);
extern unsigned char fn_82A8EBF8(int, int, struct Work_82A912A0 *);
extern unsigned char fn_82A90AD8(int, int, struct Work_82A912A0 *, int, int, int, int);
unsigned char fn_82A912A0(int a,int b,int c,int d,int e,int f) {
 struct Work_82A912A0 s;
 memset(s.a,0,0x34);
 memset(s.b,0,0x34);
 return fn_82A8EBF8(a,b,&s) && fn_82A90AD8(a,b,&s,c,d,e,f);
}
