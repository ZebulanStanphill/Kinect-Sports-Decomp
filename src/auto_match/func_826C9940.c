typedef unsigned char Bool_826C9940;
typedef Bool_826C9940 (*Method_826C9940)();
extern void fn_82681728(void *, void *, const char *);
extern void fn_826944C8(void *);
extern Bool_826C9940 fn_82695608(void *, void *);
extern void fn_82696330(void *);
extern Bool_826C9940 fn_826C98F8(void *);
Bool_826C9940 fn_826C9940(char *self) {
    struct { unsigned *words[4]; unsigned char value[16]; } local;
    unsigned *owner;
    Bool_826C9940 result;
    if (!(*(Method_826C9940 *)(*(int *)self+8))(self)) return 0;
    if ((*(unsigned *)(self+0x8c)&0x60) == 0) {
    owner=*(unsigned **)(self+0x6c);
    if (owner) {
        local.value[0]=0;
        fn_82681728(local.words,(char *)*(void **)(self+0x148)+0x254,"tabEnabled");
        result=(*(Method_826C9940 *)(owner[4]+0x2c))(owner+4,self+0x148,local.words,local.value);
        {
            unsigned *ref=local.words[0];
            if (--ref[2]==0) fn_826944C8(ref);
        }
        if (result) {
            Bool_826C9940 empty = local.value[0]==0 || local.value[0]==10;
            if (!empty) {
                result=fn_82695608(local.value,self+0xd0);
                fn_82696330(local.value);
                return result;
            }
        }
        fn_82696330(local.value);
    }
    return fn_826C98F8(self) || *(short *)(self+0x90)>0;
    } else return (*(unsigned *)(self+0x8c)&0x60)==0x60;
}
