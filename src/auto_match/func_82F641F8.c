extern void *fn_82A2A360(void);
extern int fn_82A28E60(void *heap, int flags, void *p);
extern int *_errno(void);
extern unsigned int fn_82A1F470(void);
extern int fn_82F681D0(unsigned int err);
void fn_82F641F8(void *p)
{
  if (p != 0) {
    if (fn_82A28E60(fn_82A2A360(), 0, p) == 0) {
      *_errno() = fn_82F681D0(fn_82A1F470());
    }
  }
}
