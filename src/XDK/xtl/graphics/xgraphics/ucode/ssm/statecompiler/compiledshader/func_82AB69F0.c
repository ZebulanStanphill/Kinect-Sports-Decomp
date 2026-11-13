extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern void *fn_82B6B340(void *pOListFactory);
extern void *fn_82B6B590(void *pIntListFactory);
extern void *fn_82B6B7D0(void *pObjListFactory);

#define CS_ASSERT(e, line) \
  if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledshader.cpp", line)

typedef void *(*AllocFn_82AB69F0)(void *context, unsigned int size);
typedef void (*FreeFn_82AB69F0)(void *context, void *p);

typedef struct CompiledShader_82AB69F0 {
    void *context;
    AllocFn_82AB69F0 AllocateSysMem;
    FreeFn_82AB69F0 FreeSysMem;
    void *pRegistry;
    void *pOListFactory;
    void *pIntListFactory;
    void *pObjListFactory;
    int f1c;
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    char pad3c[0x97c - 0x3c];
    void *list97c;
    void *list980;
    void *list984;
    void *list988;
    void *list98c;
    int f990;
} CompiledShader_82AB69F0;

CompiledShader_82AB69F0 *fn_82AB69F0(void *context, AllocFn_82AB69F0 AllocateSysMem,
                                     FreeFn_82AB69F0 FreeSysMem, void *pRegistry,
                                     void *pOListFactory, void *pIntListFactory,
                                     void *pObjListFactory, int f24)
{
    CompiledShader_82AB69F0 *pNewCS;

    CS_ASSERT(AllocateSysMem, 0x9b);
    CS_ASSERT(FreeSysMem, 0x9c);
    CS_ASSERT(pRegistry, 0x9d);
    CS_ASSERT(pOListFactory, 0x9e);
    CS_ASSERT(pIntListFactory, 0x9f);
    CS_ASSERT(pObjListFactory, 0xa0);
    pNewCS = (CompiledShader_82AB69F0 *)AllocateSysMem(context, sizeof(CompiledShader_82AB69F0));
    if (pNewCS == 0) {
        CS_ASSERT(!"Failed to allocate a new Compiled Shader", 0xa6);
        return 0;
    }
    pNewCS->context = context;
    pNewCS->AllocateSysMem = AllocateSysMem;
    pNewCS->FreeSysMem = FreeSysMem;
    pNewCS->pRegistry = pRegistry;
    pNewCS->pOListFactory = pOListFactory;
    pNewCS->pIntListFactory = pIntListFactory;
    pNewCS->pObjListFactory = pObjListFactory;
    pNewCS->f990 = 1;
    pNewCS->f1c = 0;
    pNewCS->f24 = f24;
    pNewCS->f2c = 0;
    pNewCS->f38 = 0;
    pNewCS->f34 = 0;
    pNewCS->f30 = 0;
    pNewCS->list97c = fn_82B6B7D0(pObjListFactory);
    pNewCS->list984 = fn_82B6B7D0(pObjListFactory);
    pNewCS->list988 = fn_82B6B7D0(pObjListFactory);
    pNewCS->list980 = fn_82B6B340(pOListFactory);
    pNewCS->list98c = fn_82B6B590(pIntListFactory);
    return pNewCS;
}
