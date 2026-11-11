extern char *lbl_8329F620[];
extern void RtlLeaveCriticalSection(void *);
void fn_82F85F30(int i) {
    RtlLeaveCriticalSection(lbl_8329F620[i>>5]+(i&31)*0x48+0xc);
}
