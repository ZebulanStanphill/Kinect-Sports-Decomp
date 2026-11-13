/* Minimal C library declarations written for this project (not a vendor header): just
   what the open-source library sources in src/auto_match need. See include/libc/README.md. */
typedef double jmp_buf[64];
int setjmp(jmp_buf env);
void longjmp(jmp_buf env, int value);
