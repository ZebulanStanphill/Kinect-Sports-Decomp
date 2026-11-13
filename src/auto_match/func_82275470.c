extern int fn_82275530();
extern int fn_822755F8();
extern int fn_82275698();
extern int fn_822757E0();
extern void fn_82275470(int first,int last,int n,int buf);

void fn_82275470(int first,int last,int n,int buf)

{
  int half;
  int mid;

  if (n <= 0x20) {
    fn_822755F8(first,last,n,buf);
  }
  else {
    half = (n + 1) / 2;
    mid = first + half * 8;
    if (half <= fn_82275530(buf)) {
      fn_82275698(first,mid,half,buf);
      n = n - half;
      fn_82275698(mid,last,n,buf);
    }
    else {
      fn_82275470(first,mid,half,buf);
      n = n - half;
      fn_82275470(mid,last,n,buf);
    }
    fn_822757E0(first,mid,last,half,n,buf);
  }
}
