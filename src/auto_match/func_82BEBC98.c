extern int fn_82BE6B58(int, int, int, int);
extern int fn_82BEBBF0(int);
extern void fn_82BE64E0(int, int);
int fn_82BEBC98(int a, int b) {
 if (!fn_82BE6B58(a,b,0x100,0x100)) return 0;
 if (!fn_82BEBBF0(a)) return 0;
 fn_82BE64E0(a,2);
 return 1;
}
