extern unsigned fn_826F3420(int,int);
extern unsigned fn_826D6C48(int);
extern unsigned lbl_831E7E64;
unsigned fn_826DF848(char *p) {
 int a=*(int *)(p+0x10);
 if (fn_826F3420(a,*(int *)(p+0x2b8))) return lbl_831E7E64;
 return fn_826D6C48(*(int *)(p+0x20));
}
