extern void *fn_8265C9E0(unsigned int); extern void fn_82895158(void *, void *); extern void *fn_828B2BF8(void); extern void fn_828B2AE0(void *, void *); extern int lbl_82197D98;
void *fn_8224F040(void *p) { void **o=fn_8265C9E0(0x68); if (o) { fn_82895158(o,p); *o=&lbl_82197D98; fn_828B2AE0(fn_828B2BF8(),o); return o; } return 0; }
