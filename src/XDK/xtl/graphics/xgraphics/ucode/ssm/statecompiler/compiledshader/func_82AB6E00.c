extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define CS_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledshader.cpp", line)

#define IL_SHADER_VERTEX 0
#define IL_SHADER_PIXEL 1

typedef struct CompiledShader_82AB6E00 {
    void *a;           /* 0x00 */
    void *b;           /* 0x04 */
    void *c;           /* 0x08 */
    void *d;           /* 0x0c */
    int pad10[3];
    int set;           /* 0x1c */
    int eShaderType;   /* 0x20 */
    void *f24;         /* 0x24 */
    int pad28[4];
    void *result;      /* 0x38 */
} CompiledShader_82AB6E00;

extern void *fn_82B6BE30(void *a, void *b, void *c, void *d, int pixel, int flag);

void fn_82AB6E00(CompiledShader_82AB6E00 *pCS, int eShaderType)
{
    int flag;
    int pixel;

    CS_ASSERT(pCS, 0x178);
    flag = pCS->f24 == 0;
    pCS->eShaderType = eShaderType;
    pCS->set = 1;
    if (eShaderType == IL_SHADER_VERTEX) {
        pixel = 0;
    } else {
        CS_ASSERT(eShaderType == IL_SHADER_PIXEL, 0x18b);
        pixel = 1;
    }
    pCS->result = fn_82B6BE30(pCS->a, pCS->b, pCS->c, pCS->d, pixel, flag);
}
