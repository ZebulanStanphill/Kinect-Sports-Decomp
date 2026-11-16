typedef struct Setting_8265BC60 {
    const char *name;
    float value;
} Setting_8265BC60;

extern Setting_8265BC60 *fn_8265B6B0(int index);
extern float fn_8265BB90(void);
extern int strcmp(const char *first, const char *second);

float fn_8265BC60(const char *name)
{
    int index;
    for (index = 0; index < 0x7a; index++) {
        if (strcmp(fn_8265B6B0(index)->name, name) == 0) {
            if (fn_8265B6B0(index)->value == -1.0f) {
                return fn_8265BB90();
            }
            return fn_8265B6B0(index)->value;
        }
    }
    return -1.0f;
}
