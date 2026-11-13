extern void *KeTlsGetValue(unsigned int index);
extern int KeTlsSetValue(unsigned int index, void *value);
extern void *fn_8265C9E0(unsigned int size);
extern void fn_82CE5430(void *p);
extern void *memset(void *dst, int value, unsigned int size);

typedef struct Tls_82599308 {
    int head[2];
    char body[0x24];
} Tls_82599308;

extern unsigned int lbl_83297014;

Tls_82599308 *fn_82599308(void)
{
    Tls_82599308 *tls = (Tls_82599308 *)KeTlsGetValue(lbl_83297014);

    if (tls == 0) {
        Tls_82599308 *mem = (Tls_82599308 *)fn_8265C9E0(0x2c);
        if (mem != 0) {
            fn_82CE5430(mem->body);
            tls = mem;
        } else {
            tls = 0;
        }
        memset(tls, 0, 0x2c);
        KeTlsSetValue(lbl_83297014, tls);
    }
    return tls;
}
