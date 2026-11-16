extern void *memset(void *, int, unsigned int);
extern const int lbl_820E8684[];

typedef struct Description_828B21F0 {
    unsigned int type;
    unsigned int fields[12];
} Description_828B21F0;

typedef struct Device_828B21F0 {
    unsigned int reserved00;
    void *object;       /* 0x04 */
    unsigned int value; /* 0x08 */
} Device_828B21F0;

extern void fn_82BD39F0(Description_828B21F0 *, unsigned int *, void **);

void fn_828B21F0(Device_828B21F0 *self, unsigned int value)
{
    if (self->object == 0) {
        unsigned int data = lbl_820E8684[0];
        Description_828B21F0 description;
        memset(description.fields, 0, sizeof(description.fields));
        description.fields[11] = value;
        description.fields[2] = 1;
        description.type = 30;
        description.fields[0] = 4;
        description.fields[1] = (unsigned int)&data;
        description.fields[3] = (unsigned int)&data;
        description.fields[4] = 1;
        fn_82BD39F0(&description, &self->value, &self->object);
    }
}
