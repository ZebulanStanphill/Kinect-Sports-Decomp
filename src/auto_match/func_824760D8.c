extern char *fn_8249ABC0(void);
int fn_824760D8(char *p) { char *q=fn_8249ABC0(); int r; if (*(int *)(q+0x88)) r=3; else { r=1; if (*(float *)(p+0xb8) < *(float *)(p+0x58)) r=0; } return r; }
