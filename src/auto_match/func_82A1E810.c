extern int NtSetEvent(void *,int *);extern void fn_82A2B760(int);
unsigned char fn_82A1E810(void *event) {int status=NtSetEvent(event,0);if(status>=0)return 1;fn_82A2B760(status);return 0;}
