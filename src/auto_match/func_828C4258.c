extern unsigned char fn_828ACC40(void *);
extern void fn_828AD110(void *,void *);
extern void fn_828A1C38(void *);
unsigned char fn_828C4258(char *self) {
    unsigned char ready=*(int *)(self+0xa0)==0 && *(void **)(self+0x8c)==0;
    unsigned char result=ready && fn_828ACC40(self);
    unsigned tmp;
    if (result) {
        unsigned *dst;
        fn_828AD110(&tmp,self+0x2cc);
        dst=(unsigned *)(self+0x8c);
        if (dst!=&tmp) {
            unsigned value=tmp;
            tmp=0;
            if (value!=*dst) {
                fn_828A1C38(dst);
                *dst=value;
            }
        }
        fn_828A1C38(&tmp);
        *(int *)(self+0xa0)=3;
    }
    return result;
}
