extern void fn_83029B20(void *, void *);
extern char *lbl_832642E4;
int fn_8301B488(void *self, char *p) { int result = 0x26; if (*(int *)(p+4) == 1) { result = 1; fn_83029B20(p, *(void **)(lbl_832642E4+0x90)); } return result; }
