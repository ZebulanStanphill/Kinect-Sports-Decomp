typedef struct { int pad; float v; } Val_83096A18;
typedef struct { char pad[0xc]; Val_83096A18 *val; } Src_83096A18;

void fn_83096A18(unsigned char *out, Src_83096A18 *s)
{
    *out = s->val->v < 1.0f;
}
