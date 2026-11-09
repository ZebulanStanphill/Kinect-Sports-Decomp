typedef struct { int Status; unsigned int Information; } IO_STATUS_BLOCK_8306C590;
extern int NtFlushBuffersFile(void *, IO_STATUS_BLOCK_8306C590 *);
extern void fn_82A2B760(int);
unsigned char fn_8306C590(void *file)
{
  IO_STATUS_BLOCK_8306C590 iosb;
  int status = NtFlushBuffersFile(file, &iosb);
  if (status >= 0) return 1;
  fn_82A2B760(status);
  return 0;
}
