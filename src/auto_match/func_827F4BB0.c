extern int fn_827F3C48();
extern int fn_827F3C28(int);
extern unsigned fn_827F3C20(int);
extern float fn_827F4868(int);
extern void fn_827FD770(int, int, unsigned, float, int);
void fn_827F4BB0(int self) {
 int a,b; unsigned c; float f;
 a=fn_827F3C28(fn_827F3C48(self,0));
 b=fn_827F3C28(fn_827F3C48(self,1));
 c=fn_827F3C20(self);
 f=fn_827F4868(self);
 fn_827FD770(a,b,c,f,*(int *)(self+0x40));
}
