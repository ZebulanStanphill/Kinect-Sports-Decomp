extern int fn_82F664B0(char *dst, unsigned int size, const char *src);

typedef struct Entry_82F96B30 {
    int unk0;
    int value;
    char name[0x201];
} Entry_82F96B30;

void fn_82F96B30(Entry_82F96B30 *self, int value, const char *name)
{
    self->value = value;
    fn_82F664B0(self->name, 0x201, name);
}
