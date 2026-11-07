typedef struct Node_82E1DFA0 {
    char *key;
    char *value;
    struct Node_82E1DFA0 *next;
    int field_c;
} Node_82E1DFA0;

typedef struct Settings_82E1DFA0 {
    unsigned char field_0;
    unsigned char validate;
    unsigned char pad[2];
    Node_82E1DFA0 *head;
} Settings_82E1DFA0;

extern void *fn_8265C9E0(unsigned int size);
extern void fn_8265CA20(void *p);
extern void fn_82E1D900(Settings_82E1DFA0 *s, Node_82E1DFA0 *n);
extern Node_82E1DFA0 *fn_82E1D978(Settings_82E1DFA0 *s, char *key);
extern void fn_82E1DA50(Settings_82E1DFA0 *s, const char *msg, char *key);
extern unsigned char fn_82E1DAA8(Settings_82E1DFA0 *s, char *key);
extern unsigned char fn_82E1DF00(Settings_82E1DFA0 *s, const char *name, int v);
extern char *fn_82E1F7F0(const char *s);
extern int stricmp(const char *a, const char *b);

void fn_82E1DFA0(Settings_82E1DFA0 *s, const char *keyIn, const char *valueIn)
{
    char *key;
    char *value;
    Node_82E1DFA0 *n;
    Node_82E1DFA0 *mem;
    unsigned char found;

    key = fn_82E1F7F0(keyIn);
    found = 0;
    if (key != 0) {
        value = fn_82E1F7F0(valueIn);
        n = fn_82E1D978(s, key);
        if (n == 0) {
            if (value != 0) {
                mem = (Node_82E1DFA0 *)fn_8265C9E0(0x10);
                if (mem != 0) {
                    mem->key = 0;
                    mem->value = 0;
                    mem->next = 0;
                    mem->field_c = 0;
                    n = mem;
                } else {
                    n = 0;
                }
                n->key = key;
                n->value = value;
                n->next = s->head;
                n->field_c = 0;
                s->head = n;
            }
        } else {
            found = 1;
            if (value != 0) {
                if (n->value != 0) {
                    fn_8265CA20(n->value);
                    n->value = 0;
                }
                n->value = value;
            } else {
                fn_82E1D900(s, n);
            }
        }
        if (s->validate != 0 && fn_82E1DAA8(s, key) == 0) {
            fn_82E1DA50(s, "Unrecognized configuration setting", key);
        }
        if (stricmp(key, "ValidateSettings") == 0) {
            s->validate = fn_82E1DF00(s, "ValidateSettings", 1);
        }
        if (found) {
            fn_8265CA20(key);
        }
    }
}
