// Kinect Sports retail 4D5308C9, function 0x82B7F370 (100 bytes).
// compiledprogram.cpp: runs the translation-buffer callback {context, fn} on itself,
// asserting pTranslationBuffers (line 0x180). Always returns 0.

extern int fn_82AB15D0();

typedef struct TranslationBuffers_82B7F370 {
    void *context;
    void (*callback)(void *context, struct TranslationBuffers_82B7F370 *self);
} TranslationBuffers_82B7F370;

#define FILE_82B7F370 "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledprogram.cpp"

int fn_82B7F370(TranslationBuffers_82B7F370 *pTranslationBuffers)
{
    if (pTranslationBuffers != 0) {
        pTranslationBuffers->callback(pTranslationBuffers->context, pTranslationBuffers);
    } else {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pTranslationBuffers", FILE_82B7F370, 0x180);
    }
    return 0;
}
