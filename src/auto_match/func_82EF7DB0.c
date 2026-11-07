extern int fn_82EF75C0(char *, int, char *, int);
int fn_82EF7DB0(char *a, int stridea, char *b, int strideb, int limit) {
 int sum;
 if (limit < 0) return 0;
 sum = fn_82EF75C0(a,stridea,b,strideb);
 if (sum * 8 > limit * 5) return limit;
 sum = fn_82EF75C0(a+8,stridea,b+8,strideb) + sum;
 if (sum * 8 > limit * 6) return limit;
 a += stridea * 8;
 b += strideb * 8;
 sum = fn_82EF75C0(a+8,stridea,b+8,strideb) + sum;
 if (sum * 8 > limit * 7) return limit;
 return fn_82EF75C0(a,stridea,b,strideb) + sum;
}
