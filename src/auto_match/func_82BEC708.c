extern int fn_82BE6B58(int, int, int, int);
extern int fn_82BEC650(int);
extern void fn_82BE64E0(int, int);
int fn_82BEC708(int a, int b) {
 if (!fn_82BE6B58(a,b,0x200,0x200)) return 0;
 if (!fn_82BEC650(a)) return 0;
 fn_82BE64E0(a,2);
 return 1;
}
