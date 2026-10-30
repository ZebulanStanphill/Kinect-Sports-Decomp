extern "C" void fn_8267EBA0(unsigned int, unsigned __int64, void *);
struct S { unsigned int *data; unsigned int size; void run(unsigned __int64 p); };
void S::run(unsigned __int64 p) {
  for (unsigned int i = 0; i < size; ++i) fn_8267EBA0(data[i], p, this);
}
