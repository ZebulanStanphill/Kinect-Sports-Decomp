typedef struct Str_8278D038 Str_8278D038;

extern unsigned int strlen(const char *s);
void fn_8278D038(Str_8278D038 *s, const char *p, unsigned int len);

void fn_8278D240(Str_8278D038 *s, const char *p, unsigned int len)
{
    if (len == (unsigned int)-1) {
        len = strlen(p);
    }
    fn_8278D038(s, p, len);
}
