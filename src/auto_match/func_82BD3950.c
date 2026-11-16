typedef struct Object_82BD3950 Object_82BD3950;

typedef struct Table_82BD3950 {
    void *unused;
    void (*release)(Object_82BD3950 *self);
} Table_82BD3950;

struct Object_82BD3950 {
    Table_82BD3950 *vtable;
};

typedef struct Parameters_82BD3950 {
    void *first;
    void *second;
    void *third;
} Parameters_82BD3950;

extern void *XMemSet(void *destination, int value, unsigned int size);
extern int fn_82BD5F30(Parameters_82BD3950 *parameters, Object_82BD3950 **out);
extern void fn_82BD36E8(void);
extern void fn_82BD3788(void);

extern struct {
    void (*first)(void);
    void (*second)(void);
} lbl_83223ECC;

int fn_82BD3950(void *first, void *second, void *third, Object_82BD3950 **out)
{
    Parameters_82BD3950 parameters;
    int result;
    XMemSet(&parameters, 0, sizeof(parameters));
    parameters.first = first;
    parameters.second = second;
    parameters.third = third;
    result = fn_82BD5F30(&parameters, out);
    if (result < 0) {
        if (*out != 0) {
            (*out)->vtable->release(*out);
            *out = 0;
        }
    } else {
        lbl_83223ECC.first = fn_82BD36E8;
        lbl_83223ECC.second = fn_82BD3788;
    }
    return result;
}
