typedef struct Str_8268B8E8 Str_8268B8E8;

extern unsigned int strlen(const char *s);
void fn_8268B818(Str_8268B8E8 *s, const char *p, unsigned int len);

void fn_8268B8E8(Str_8268B8E8 *s, const char *p)
{
    fn_8268B818(s, p, p != 0 ? strlen(p) : 0);
}
