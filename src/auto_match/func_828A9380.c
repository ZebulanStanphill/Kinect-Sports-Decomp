typedef int (*Get)(int *);
typedef void (*Read)(int *,unsigned __int64 *);
unsigned __int64 fn_828A9380(int *p) {
 unsigned __int64 result;
 int *q = (int *)((*(Get *)(*p+4))(p)+0x48);
 (*(Read *)(*q+0x40))(q,&result);
 return result;
}