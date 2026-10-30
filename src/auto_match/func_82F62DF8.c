extern int *fn_82F70470(void); extern unsigned int fn_82D7E470(void);
unsigned __int64 fn_82F62DF8(void) { union { unsigned __int64 q; unsigned int v[2]; } u; u.v[0]=fn_82F70470()[2]; u.v[1]=fn_82D7E470(); return u.q; }
