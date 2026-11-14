typedef struct Node_82E1DE88 {
    char *key;
    char *value;
} Node_82E1DE88;

typedef struct Settings_82E1DE88 Settings_82E1DE88;

extern Node_82E1DE88 *fn_82E1D978(Settings_82E1DE88 *s, const char *key);
extern void fn_82E1DA50(Settings_82E1DE88 *s, const char *msg, const char *key);
extern int fn_82F67FE8(const char *text, const char *format, ...);

int fn_82E1DE88(Settings_82E1DE88 *s, const char *key, int def)
{
    Node_82E1DE88 *n = fn_82E1D978(s, key);
    const char *text;
    int value;
    if (n == 0)
        return def;
    text = n->value;
    value = 0;
    if (fn_82F67FE8(text, "%i", &value) != 1) {
        fn_82E1DA50(s, "Improper format for integer value", key);
        return def;
    }
    return value;
}
