extern int NtReleaseMutant(void *,int *);extern void fn_82A2B760(int);
unsigned char fn_82A2A790(void *mutant) {int status=NtReleaseMutant(mutant,0);if(status>=0)return 1;fn_82A2B760(status);return 0;}
