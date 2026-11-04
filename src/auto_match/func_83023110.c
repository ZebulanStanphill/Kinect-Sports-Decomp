extern void fn_83022AD8(void *); extern void fn_83022908(void *);
typedef struct { char *p; unsigned int state; unsigned short value; } S_83023110;
void fn_83023110(S_83023110 *p, unsigned unused, char *q) {p->p=q; switch(p->state) {case 0x3f: fn_83022908(p); break; case 3: fn_83022AD8(p); break; } *(unsigned short *)(p->p+14)=p->value;}