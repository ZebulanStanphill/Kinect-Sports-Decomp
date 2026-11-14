// Reads the config entry named key as a double ("%lf"); returns fallback when the entry is
// missing, empty or not a number. lbl_821954B0[13] is the pooled 0.0.
unsigned int strlen(const char *s);

extern const double lbl_821954B0[0x145];
extern const char *fn_82579DB0(void *config, const char *key);
extern int fn_82F67FE8(const char *text, const char *format, ...);

double fn_8257A0B0(void *config, const char *key, double fallback)
{
    const char *text = fn_82579DB0(config, key);
    double value;

    if (text == 0)
        return fallback;
    if (strlen(text) == 0)
        return fallback;
    value = lbl_821954B0[13];
    if (fn_82F67FE8(text, "%lf", &value) != 1)
        return fallback;
    return value;
}
