typedef struct Reader_827671F0 {
    void *data;
    int position;
    unsigned short values[4];
} Reader_827671F0;

extern int fn_82766450(Reader_827671F0 *self, int position, unsigned int *value);

void fn_827671F0(Reader_827671F0 *self, int position)
{
    unsigned int value;
    self->position = position;
    position += fn_82766450(self, position, &value);
    self->position = position;
    self->values[0] = value;
    position += fn_82766450(self, position, &value);
    self->position = position;
    self->values[1] = value;
    position += fn_82766450(self, position, &value);
    self->position = position;
    self->values[2] = value;
    position += fn_82766450(self, position, &value);
    self->position = position;
    self->values[3] = value;
}
