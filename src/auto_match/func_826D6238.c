typedef struct { int mode; void *p; } S; extern void fn_8267C4C8(void *);
S *fn_826D6238(S *dst,S *src) { dst->mode=src->mode; dst->p=src->p; if(dst->mode==0 && dst->p) fn_8267C4C8(dst->p); return dst; }
