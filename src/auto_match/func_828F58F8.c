extern void fn_828FA8D8(void *, void *, int, const char *);
void *fn_828F58F8(char *s, void *result) {
 if (result != 0) return result;
 if (*(int *)(s+0x50)==0) {
  fn_828FA8D8(s+0x18,s+0x280,0,"internal error: production failed");
  *(int *)(s+0x50)=1;
 }
 return 0;
}
