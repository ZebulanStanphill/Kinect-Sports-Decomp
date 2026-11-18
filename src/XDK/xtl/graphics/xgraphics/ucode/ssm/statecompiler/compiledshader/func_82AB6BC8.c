extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern void *fn_82AB6498(void *list);
extern void *fn_82AB67A8(void *item);
extern void fn_82AB6770(void *item);
extern void *fn_82AB5910(void *list);
extern void fn_82B6B628(void *pIntListFactory, void *list);
extern void fn_82B6B868(void *pObjListFactory, void *list);
extern void fn_82B6B3E8(void *pOListFactory, void *list);
extern void fn_82AB8540(void *p);
extern void fn_82B6BF80(void *p);

#define CS_ASSERT(e, line)                                                                                                   \
    if (!(e))                                                                                                                \
    fn_82AB15D0(                                                                                                             \
        0, "Assertion failed: %s (%s:%u)", #e,                                                                               \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledshader.cpp", \
        line)

typedef void *(*AllocFn_82AB6BC8)(void *context, unsigned int size);
typedef void (*FreeFn_82AB6BC8)(void *context, void *p);

typedef struct CompiledShader_82AB6BC8 {
    void *context;                   /* 0x0 */
    AllocFn_82AB6BC8 AllocateSysMem; /* 0x4 */
    FreeFn_82AB6BC8 FreeSysMem;      /* 0x8 */
    void *pRegistry;                 /* 0xc */
    void *pOListFactory;             /* 0x10 */
    void *pIntListFactory;           /* 0x14 */
    void *pObjListFactory;           /* 0x18 */
    int f1c;
    int f20;
    int f24;
    int f28;
    void *f2c; /* 0x2c */
    int f30;
    void *f34; /* 0x34 */
    void *f38; /* 0x38 */
    char pad3c[0x97c - 0x3c];
    void *list97c;         /* 0x97c */
    void *list980;         /* 0x980 */
    void *list984;         /* 0x984 */
    void *list988;         /* 0x988 */
    void *list98c;         /* 0x98c */
    unsigned int refCount; /* 0x990 */
} CompiledShader_82AB6BC8;

void fn_82AB6BC8(CompiledShader_82AB6BC8 *pCS)
{
    void *item;
    void *p;

    CS_ASSERT(pCS, 0xe6);
    if (--pCS->refCount == 0) {
        CS_ASSERT(pCS->refCount == 0, 0xf1);
        fn_82B6B628(pCS->pIntListFactory, pCS->list98c);
        while ((item = fn_82AB6498(pCS->list988)) != 0) {
            pCS->FreeSysMem(pCS->context, fn_82AB67A8(item));
            fn_82AB6770(item);
        }
        fn_82B6B868(pCS->pObjListFactory, pCS->list988);
        while ((item = fn_82AB6498(pCS->list984)) != 0) {
            pCS->FreeSysMem(pCS->context, fn_82AB67A8(item));
            fn_82AB6770(item);
        }
        fn_82B6B868(pCS->pObjListFactory, pCS->list984);
        while ((item = fn_82AB6498(pCS->list97c)) != 0) {
            pCS->FreeSysMem(pCS->context, fn_82AB67A8(item));
            fn_82AB6770(item);
        }
        fn_82B6B868(pCS->pObjListFactory, pCS->list97c);
        while ((p = fn_82AB5910(pCS->list980)) != 0) {
            pCS->FreeSysMem(pCS->context, p);
        }
        fn_82B6B3E8(pCS->pOListFactory, pCS->list980);
        fn_82AB8540(pCS->f34);
        if (pCS->f38 != 0) {
            fn_82B6BF80(pCS->f38);
        }
        if (pCS->f2c != 0) {
            pCS->FreeSysMem(pCS->context, pCS->f2c);
        }
        pCS->FreeSysMem(pCS->context, pCS);
    }
}
