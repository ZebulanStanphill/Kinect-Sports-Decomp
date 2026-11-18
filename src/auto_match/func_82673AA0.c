typedef struct Value_82673AA0 {
    void *object;      /* 0x0 */
    unsigned int type; /* 0x4 */

    union {
        double number;
        const char *string;
        const char **managedString;
    } value; /* 0x8 */
} Value_82673AA0;

extern int fn_82526B90(const char *a, const char *b);
extern void fn_826737C8(void *self, const char *name, float x, float y, float width, float height);
extern void fn_82671AC8(void *self, const char *name, float x, float y, float width, float height);
extern void fn_82671B90(void *self, const char *name);

static __forceinline const char *GetString(const Value_82673AA0 *value)
{
    if ((unsigned char)((value->type >> 6) & 1) != 0) {
        return *value->value.managedString;
    }
    return value->value.string;
}

void fn_82673AA0(void *self, const char *command, const Value_82673AA0 *args)
{
    if (fn_82526B90(command, "RegisterOccludingBox") == 0) {
        fn_826737C8(self, GetString(&args[0]), (float)args[1].value.number, (float)args[2].value.number,
                    (float)args[3].value.number, (float)args[4].value.number);
    } else if (fn_82526B90(command, "UpdateOccludingBox") == 0) {
        fn_82671AC8(self, GetString(&args[0]), (float)args[1].value.number, (float)args[2].value.number,
                    (float)args[3].value.number, (float)args[4].value.number);
    } else if (fn_82526B90(command, "UnregisterOccludingBox") == 0) {
        fn_82671B90(self, GetString(&args[0]));
    }
}
