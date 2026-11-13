typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Reader_822CB020 {
    int pos;
    int bit;
    int source;
    int width;
} Reader_822CB020;

typedef struct Parser_822CB020 {
    Reader_822CB020 reader;
    int source;
    int width;
    void *buffer;
    int size;
    int capacity;
} Parser_822CB020;

extern int fn_82236140(void *src);
extern void fn_828E9D28(Reader_822CB020 *reader, int source, int width);
extern __vector4 fn_822CB730(Parser_822CB020 *parser);
extern void fn_8265CA20(void *p);

__vector4 *fn_822CB020(__vector4 *out, void *src)
{
    Parser_822CB020 parser;
    int source;

    source = fn_82236140(src);
    parser.source = source;
    parser.buffer = 0;
    parser.size = 0;
    parser.capacity = 0;
    parser.width = 4;
    fn_828E9D28(&parser.reader, source, 4);
    *out = fn_822CB730(&parser);
    if (parser.buffer != 0) {
        fn_8265CA20(parser.buffer);
    }
    return out;
}
