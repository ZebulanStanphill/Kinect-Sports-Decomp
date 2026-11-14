unsigned int strlen(const char *s);

extern const char *fn_82579DB0(void *self, const char *key);
extern int fn_82F67FE8(const char *text, const char *format, ...);

float fn_8257A028(void *self, const char *key, float def)
{
    const char *text = fn_82579DB0(self, key);
    float value;

    if (text == 0) return def;
    if (strlen(text) == 0) return def;
    value = 0.0f;
    if (fn_82F67FE8(text, "%f", &value) != 1) return def;
    return value;
}
