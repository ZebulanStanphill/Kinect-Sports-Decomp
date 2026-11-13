typedef struct Params_82590710 {
    int v[9];
} Params_82590710;

extern void *fn_8265C9E0(unsigned int size);
extern void *fn_825127E0(void *mem, unsigned char a2, int a3, int a4, int a5, Params_82590710 params,
                         void *name, int a12, unsigned char a13, int a14, int a15, int a16,
                         int a17, unsigned char a18, unsigned char a19);

void *fn_82590710(void *owner, unsigned char a2, int a3, int a4, int a5, Params_82590710 params,
                  void *name, int a12, unsigned char a13, int a14, int a15, int a16, int a17,
                  unsigned char a18, unsigned char a19)
{
    void *mem = fn_8265C9E0(0x130);
    if (mem != 0)
        return fn_825127E0(mem, a2, a3, a4, a5, params, name, a12, a13, a14, a15, a16, a17, a18, a19);
    return 0;
}
