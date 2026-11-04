extern int fn_82A2B4B8(int,void *);
extern void fn_82A2A370(int);
int fn_82A29D80(int self, unsigned *out) {
 struct { unsigned a; int b; } pair;
 int result;
 if (fn_82A2B4B8(self,&pair) != 0) {
  if (out) *out = pair.a;
  result = pair.b;
  if (result == -1) { fn_82A2A370(0); result = pair.b; }
 } else result = -1;
 return result;
}
