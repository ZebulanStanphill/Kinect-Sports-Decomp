struct Element_826E1E10 {
    void *vtable;
    int references;  /* 0x04 */
    void *owner;     /* 0x08 */
    int flags;       /* 0x0c */
    float values[4]; /* 0x10 */
    int unused[2];
};

extern char lbl_8200C93C[];

void fn_826E1E10(struct Element_826E1E10 *elements, unsigned int count)
{
    while (count-- != 0) {
        if (elements != 0) {
            elements->vtable = lbl_8200C93C;
            {
                int *pReferences = &elements->references;
                *pReferences = 1;
            }
            elements->owner = 0;
            elements->flags = 0;
            {
                float *values = &elements->values[2];
                values[-2] = 0.0f;
                values[-1] = 0.0f;
                values[0] = 0.0f;
                values[1] = 0.0f;
            }
        }
        ++elements;
    }
}
